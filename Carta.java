

/**
 * Clase Carta
 * @author bri93
 */
public class Carta {
    
    //Atributos
    private int numero;
    private String palo;
    
    //Constantes
    public static final String[] PALOS={"ESPADA", "ORO", "COPA", "BASTO"};
    public static final int LIMITE_CARTA_PALO=12;

    //Constructor
    public Carta(int numero, String palo) {
        this.numero = numero;
        this.palo = palo;
    }
    
    @Override
    public String toString() {
        return + numero + " de " + palo;
    }
    
}
