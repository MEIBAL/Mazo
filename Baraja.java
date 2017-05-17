/**
 * Clase Baraja
 * @author bri93
 */
public class Baraja {
    //Atributos
    private Carta cartas[];
    
    //Cartas
    public static final int NUM_CARTAS = 40; 
        public Baraja() { 
        this.cartas = new Carta[NUM_CARTAS]; 
        crearBaraja(); //Creamos la baraja 
    } 
    
    private void crearBaraja() { //crea la baraja ordenada 
        String[] palos = Carta.PALOS; //Recorro los palos
        for (int i = 0; i < palos.length; i++) {
            //Recorro los numeros
            for (int j = 0; j < Carta.LIMITE_CARTA_PALO; j++) {
                //Las posiciones del 8 y del 9 son el 7 y el 8 (emepzamos en 8)
                if (!(j == 7 || j == 8)) {
                    if (j >= 9) {
                        //Solo para la sota, caballo y rey
                        cartas[((i * (Carta.LIMITE_CARTA_PALO - 2)) + (j - 2))] = new Carta(j + 1, palos[i]);
                    } else {
                        //Para los casos de 1 a 7
                        cartas[((i * (Carta.LIMITE_CARTA_PALO - 2)) + j)] = new Carta(j + 1, palos[i]);
                    }
                }
            }
        }
    }
    
    public void barajar() {
        int posAleatoria = 0;
        Carta c;
        //Recorro las cartas
        for (int i = 0; i < cartas.length; i++) {
            posAleatoria = generaNumeroEnteroAleatorio(0, NUM_CARTAS - 1);
            //intercambio
            c = cartas[i];
            cartas[i] = cartas[posAleatoria];
            cartas[posAleatoria] = c;
        } 
        mostrarBaraja();
    }
    
    public void mostrarBaraja() { 
        for (int i = 0; i < cartas.length; i++) {
            System.out.println(cartas[i]);
        } 
    } 
    
    public void repartir(){
//        cartas.
    }
    
    public static int generaNumeroEnteroAleatorio(int minimo, int maximo) {
        int num = (int) (Math.random() * (minimo - (maximo + 1)) + (maximo + 1));
        return num;
    }
}
