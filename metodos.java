package mazoarray;

/**
 * @author ivo
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
    //-------------------Variables Numero de carta del Jugador
    static int NcartaJuagador []=new int [3];
    //------------------Variables Numero de carta del CPU
    static int NcartaCPU []=new int [3];
    //------------------Variables Tipo de Palo carta del Jugador (Captura porcion de memoria en un String)
    static String Palocartaj[]=new String [3];
    //-----------------Variables Tipo de Palo carta del CPU (Captura porcion de memoria en un String)
    static String Palocarta[]=new String [3];
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
        for (int i = 0; i < arreglo.length; i++) {
            //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
            int inicio0 = arreglo[i].indexOf(" ");
            //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
            int fin0 = arreglo[i].indexOf(" ", inicio0 + 1);
            //Captura la porcion de memoria y lo convierte a Int
            NcartaJuagador[i] = Integer.parseInt(arreglo[i].substring(inicio0 + 1, fin0));
        }
    }
    //Metodo Split Numero carta para el Jugador que llama a sus respectivas variables

    public static void SplitpalabraPlayer(String[] palabra) {
        for (int i = 0; i < palabra.length; i++) {
            //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
            int inicio0 = palabra[i].indexOf(".");
            //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
            int fin0 = palabra[i].indexOf(".", inicio0 + 1);
            //Captura la porcion de memoria la guarda en un String y lo convierte a Int

            Palocartaj[i] = palabra[i].substring(inicio0 + 1, fin0);
        }
    }

    //Metodo Split Numero carta para el CPU que llama a sus respectivas variables
    public static void SplitCPU(String[] arreglo) {
        for (int i = 0; i < arreglo.length; i++) {
            //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
            int inicio0 = arreglo[i].indexOf(" ");
            //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
            int fin0 = arreglo[i].indexOf(" ", inicio0 + 1);
            //Captura la porcion de memoria y lo convierte a Int
            NcartaCPU[i] = Integer.parseInt(arreglo[i].substring(inicio0 + 1, fin0));
        }
    }

    //Metodo Split Palo carta para el CPU que llama a sus respectivas variables   
    public static void SplitpalabraCPU(String[] palabra) {
        for (int i = 0; i < palabra.length; i++) {
            //Int "Inicio" marca el caracter donde cortara al String, pero no lo cuenta
            int inicio0 = palabra[i].indexOf(".");
            //Int "Fin" marca el caracter donde cortara al String, pero no lo cuenta
            int fin0 = palabra[i].indexOf(".", inicio0 + 1);
            //Captura la porcion de memoria la guarda en un String y lo convierte a Int

            Palocarta[i] = palabra[i].substring(inicio0 + 1, fin0);
        }
    }

    //Calculo de posibilidad de Envido del CPU
    public void CalcularEnvidoCPU() {
        System.out.println("\nPara el CPU:");

        if (Palocarta[0].equals(Palocarta[1]) || Palocarta[0].equals(Palocarta[2]) || Palocarta[1].equals(Palocarta[2])) {
            System.out.println("Es posible cantar Envido!");
            if (Palocarta[0].equals(Palocarta[1])) {
                sumaCPU = NcartaCPU[0] + NcartaCPU[1];
                System.out.println("Valor del Envido >> " + sumaCPU + " <<");
            }
            if (Palocarta[0].equals(Palocarta[2])) {
                sumaCPU = NcartaCPU[0] + NcartaCPU[2];
                System.out.println("Valor del Envido >> " + sumaCPU + " <<");
            }
            if (Palocarta[2].equals(Palocarta[1])) {
                sumaCPU = NcartaCPU[1] + NcartaCPU[2];
                System.out.println("Valor del Envido >> " + sumaCPU + " <<");
            }
        } else {
            System.out.println("No es posible cantar Envido...");
        }
    }

    //Calculo de posibilidad de Envido del Jugador
    public void CalcularEnvidoPlayer() {
        System.out.println("\nPara el Jugador:");
        if (Palocartaj[0].equals(Palocartaj[1]) || Palocartaj[0].equals(Palocartaj[2]) || Palocartaj[1].equals(Palocartaj[2])) {
            System.out.println("Es posible cantar Envido!");
            if (Palocartaj[0].equals(Palocartaj[1])) {
                sumaPlayer = NcartaJuagador[0]+NcartaJuagador[1] ;
                System.out.println("Valor del Envido >> " + sumaPlayer + " <<");
            }
            if (Palocartaj[0].equals(Palocartaj[2])) {
                sumaPlayer = NcartaJuagador[0]+NcartaJuagador[2] ;
                System.out.println("Valor del Envido >> " + sumaPlayer + " <<");
            }
            if (Palocartaj[2].equals(Palocartaj[1])) {
                sumaPlayer = NcartaJuagador[1]+NcartaJuagador[2] ;
                System.out.println("Valor del Envido >> " + sumaPlayer + " <<");
            }
        } else {
            System.out.println("No es posible cantar Envido...");}
    }

    public void VerificarValor() {
        ValorCartas Valor = new ValorCartas();
        Valor.PuntajeDeRango();}
    
}
