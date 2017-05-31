package mazoarray;

/**
 * @author bri15
 */
public class metodos {

    String[] mazo = new String[80];
    Carta carta = new Carta();
    int pal = 0;
    int contP = 0;
    int num = 0;
    int contN = 0;

    //Variables de prueba
    //-------------------Calcular Envido
    static int sumaPlayer = 0;
    static int sumaCPU = 0;
    //-------------------Variables Numero de carta del Jugador (Captura porcion de memoria en un String)
    static String NumeroCartaString1Jugador;
    static String NumeroCartaString2Jugador;
    static String NumeroCartaString3Jugador;
    //-------------------Variables Numero de carta del Jugador (Convierte el String capturado a Int)
    static int NumeroCartaInt1Jugador = 0;
    static int NumeroCartaInt2Jugador = 0;
    static int NumeroCartaInt3Jugador = 0;
    //------------------Variables Numero de carta del CPU (Captura porcion de memoria en un String)
    static String NumeroCartaString1CPU;
    static String NumeroCartaString2CPU;
    static String NumeroCartaString3CPU;
    //------------------Variables Numero de carta del CPU (Convierte el String capturado a Int)
    static int NumeroCartaInt1CPU = 0;
    static int NumeroCartaInt2CPU = 0;
    static int NumeroCartaInt3CPU = 0;
    //------------------Variables Tipo de Palo carta del Jugador (Captura porcion de memoria en un String)
    static String PaloCarta1Jugador;
    static String PaloCarta2Jugador;
    static String PaloCarta3Jugador;
    //-----------------Variables Tipo de Palo carta del CPU (Captura porcion de memoria en un String)
    static String PaloCarta1CPU;
    static String PaloCarta2CPU;
    static String PaloCarta3CPU;
    //Fin variables de Prueba
    String mazoFinal[] = new String[40];
    int contador = 0;
    int numerosJug = -2;
    int numerosMaq = -1;
    int contar = 0;

    public void crear() {
        for (int i = 0; i < mazo.length; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9 || i == 11 || i == 13 || i == 15 || i == 17
                    || i == 19 || i == 21 || i == 23 || i == 25 || i == 27 || i == 29 || i == 31 || i == 33
                    || i == 35 || i == 37 || i == 39 || i == 41 || i == 43 || i == 45 || i == 47 || i == 49
                    || i == 51 || i == 53 || i == 55 || i == 57 || i == 59 || i == 61 || i == 63 || i == 65
                    || i == 67 || i == 69 || i == 71 || i == 73 || i == 75 || i == 77 || i == 79) {
                mazo[i] = carta.getPalo()[pal];
                contP++; //contador contP se aumenta en 1
                if (contP == 10) {//
                    contP = 0; //Recursividad?
                    pal++;
                }
            } else {
                mazo[i] = String.valueOf(carta.getNumero()[num]);
                num++;
                contN++;
                if (contN == 10) {
                    num = 0;
                    contN = 0; //Recursividad?
                }
            }
        }
        for (int i = 0; i < mazoFinal.length; i++) {
            mazoFinal[i] = mazo[contador] + " " + mazo[contador + 1];
            contador = contador + 2;
        }
        System.out.println("Se creo el Mazo");
    }

    public void barajar() {
        String c;
        int Aleatoria;//variable qe llama al metodo que genera el numero aleatorio 
        int i;
        for (i = 0; i < mazoFinal.length; i++) {
            Aleatoria = generaNumeroEnteroAleatorio(0, 39);
            c = mazoFinal[i];
            mazoFinal[i] = mazoFinal[Aleatoria];
            mazoFinal[Aleatoria] = c;
        }
        System.out.println("Se barajo el Mazo");
        //    mostrar();
    }

    public void mostrar() {
        for (String mazoFinal1 : mazoFinal) {
            //lectura de mazo
            System.out.println(mazoFinal1);
        }
    }

    public String repartirJug() {  // Abre metodo repartirCarta
        if (numerosJug < mazoFinal.length) {
            return mazoFinal[numerosJug = numerosJug + 2];
        } else {
            return null;
        }
    }

    public String repartirMaq() {  // Abre metodo repartirCarta
        if (numerosMaq < mazoFinal.length) {
            return mazoFinal[numerosMaq = numerosMaq + 2];
        } else {
            return null;
        }
    }

    public static int generaNumeroEnteroAleatorio(int minimo, int maximo) {
        int num = (int) (Math.random() * (minimo - (maximo + 1)) + (maximo + 1));
        return num;
    }

    //Metodo Split Numero carta para el Jugador que llama a sus respectivas variables
    public static void SplitPlayer(String[] arreglo) {

        //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
        int inicio0 = arreglo[0].indexOf(" ");
        int inicio1 = arreglo[1].indexOf(" ");
        int inicio2 = arreglo[2].indexOf(" ");

        //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
        int fin0 = arreglo[0].indexOf(" ", inicio0 + 1);
        int fin1 = arreglo[1].indexOf(" ", inicio1 + 1);
        int fin2 = arreglo[2].indexOf(" ", inicio2 + 1);

        //Captura la porcion de memoria la guarda en un String y lo convierte a Int
        NumeroCartaString1Jugador = (arreglo[0].substring(inicio0 + 1, fin0));
        NumeroCartaString2Jugador = (arreglo[1].substring(inicio1 + 1, fin1));
        NumeroCartaString3Jugador = (arreglo[2].substring(inicio2 + 1, fin2));
        NumeroCartaInt1Jugador = Integer.parseInt(NumeroCartaString1Jugador);
        NumeroCartaInt2Jugador = Integer.parseInt(NumeroCartaString2Jugador);
        NumeroCartaInt3Jugador = Integer.parseInt(NumeroCartaString3Jugador);

//        System.out.println("\n" + NumeroCartaInt1Jugador + "\n" + NumeroCartaInt2Jugador + "\n" + NumeroCartaInt3Jugador);
    }

    //Metodo Split Numero carta para el Jugador que llama a sus respectivas variables
    public static void SplitpalabraPlayer(String[] palabra) {

        //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
        int inicio0 = palabra[0].indexOf(".");
        int inicio1 = palabra[1].indexOf(".");
        int inicio2 = palabra[2].indexOf(".");

        //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
        int fin0 = palabra[0].indexOf(".", inicio0 + 1);
        int fin1 = palabra[1].indexOf(".", inicio1 + 1);
        int fin2 = palabra[2].indexOf(".", inicio2 + 1);

        //Captura la porcion de memoria la guarda en un String y lo convierte a Int
        PaloCarta1Jugador = (palabra[0].substring(inicio0 + 1, fin0));
        PaloCarta2Jugador = (palabra[1].substring(inicio1 + 1, fin1));
        PaloCarta3Jugador = (palabra[2].substring(inicio2 + 1, fin2));

//        System.out.println("\n" + PaloCarta1Jugador + "\n" + PaloCarta2Jugador + "\n" + PaloCarta3Jugador);
    }

    //Metodo Split Numero carta para el CPU que llama a sus respectivas variables
    public static void SplitCPU(String[] arreglo) {

        //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
        int inicio0 = arreglo[0].indexOf(" ");
        int inicio1 = arreglo[1].indexOf(" ");
        int inicio2 = arreglo[2].indexOf(" ");

        //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
        int fin0 = arreglo[0].indexOf(" ", inicio0 + 1);
        int fin1 = arreglo[1].indexOf(" ", inicio1 + 1);
        int fin2 = arreglo[2].indexOf(" ", inicio2 + 1);

        //Captura la porcion de memoria la guarda en un String y lo convierte a Int
        NumeroCartaString1CPU = (arreglo[0].substring(inicio0 + 1, fin0));
        NumeroCartaString2CPU = (arreglo[1].substring(inicio1 + 1, fin1));
        NumeroCartaString3CPU = (arreglo[2].substring(inicio2 + 1, fin2));
        NumeroCartaInt1CPU = Integer.parseInt(NumeroCartaString1CPU);
        NumeroCartaInt2CPU = Integer.parseInt(NumeroCartaString2CPU);
        NumeroCartaInt3CPU = Integer.parseInt(NumeroCartaString3CPU);

//        System.out.println("\n" + NumeroCartaInt1CPU + "\n" + NumeroCartaInt2CPU + "\n" + NumeroCartaInt3CPU);
    }

    //Metodo Split Palo carta para el CPU que llama a sus respectivas variables   
    public static void SplitpalabraCPU(String[] palabra) {
        //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
        int inicio0 = palabra[0].indexOf(".");
        int inicio1 = palabra[1].indexOf(".");
        int inicio2 = palabra[2].indexOf(".");

        //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
        int fin0 = palabra[0].indexOf(".", inicio0 + 1);
        int fin1 = palabra[1].indexOf(".", inicio1 + 1);
        int fin2 = palabra[2].indexOf(".", inicio2 + 1);

        //Captura la porcion de memoria la guarda en un String y lo convierte a Int
        PaloCarta1CPU = (palabra[0].substring(inicio0 + 1, fin0));
        PaloCarta2CPU = (palabra[1].substring(inicio1 + 1, fin1));
        PaloCarta3CPU = (palabra[2].substring(inicio2 + 1, fin2));

//        System.out.println("\n" + PaloCarta1CPU + "\n" + PaloCarta2CPU + "\n" + PaloCarta3CPU);
    }

    //Calculo de posibilidad de Envido del CPU
    public void CalcularEnvidoCPU() {
        System.out.println("\nPara el CPU:");

        if (PaloCarta1CPU.equals(PaloCarta2CPU) || PaloCarta1CPU.equals(PaloCarta3CPU) || PaloCarta2CPU.equals(PaloCarta3CPU)) {
            System.out.println("Es posible cantar Envido!");
            if (PaloCarta1CPU.equals(PaloCarta2CPU)) {
                sumaCPU = NumeroCartaInt1CPU + NumeroCartaInt2CPU;
                System.out.println("Valor del Envido >> " + sumaCPU + " <<");
            }
            if (PaloCarta1CPU.equals(PaloCarta3CPU)) {
                sumaCPU = NumeroCartaInt1CPU + NumeroCartaInt3CPU;
                System.out.println("Valor del Envido >> " + sumaCPU + " <<");
            }
            if (PaloCarta2CPU.equals(PaloCarta3CPU)) {
                sumaCPU = NumeroCartaInt2CPU + NumeroCartaInt3CPU;
                System.out.println("Valor del Envido >> " + sumaCPU + " <<");
            }
        } else {
            System.out.println("No es posible cantar Envido...");
        }
    }

    //Calculo de posibilidad de Envido del CPU
    public void CalcularEnvidoPlayer() {
        System.out.println("\nPara el Jugador:");
        if (PaloCarta1Jugador.equals(PaloCarta2Jugador) || PaloCarta1Jugador.equals(PaloCarta3Jugador) || PaloCarta2Jugador.equals(PaloCarta3Jugador)) {
            System.out.println("Es posible cantar Envido!");
            if (PaloCarta1Jugador.equals(PaloCarta2Jugador)) {
                sumaPlayer = NumeroCartaInt1Jugador + NumeroCartaInt2Jugador;
                System.out.println("Valor del Envido >> " + sumaPlayer + " <<");
            }
            if (PaloCarta1Jugador.equals(PaloCarta3Jugador)) {
                sumaPlayer = NumeroCartaInt1Jugador + NumeroCartaInt3Jugador;
                System.out.println("Valor del Envido >> " + sumaPlayer + " <<");
            }
            if (PaloCarta2Jugador.equals(PaloCarta3Jugador)) {
                sumaPlayer = NumeroCartaInt2Jugador + NumeroCartaInt3Jugador;
                System.out.println("Valor del Envido >> " + sumaPlayer + " <<");
            }
        } else {
            System.out.println("Es posible cantar el envido, se tomara por valor la carta mas alta...");
            //Aca debemos colocar el modo por el cual lograremos tomar solamente el valor de la carta mayor
        }
    }
}
