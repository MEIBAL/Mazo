
package mazoarray;

/**
 * @author bri15
 */
public class MazoArray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Creo el objeto metodos
        metodos m = new metodos(); 
        //Creo la mano del Jugador y del CPU
        String[] jugador = new String[3];
        String[] maquina = new String[3];
        
        m.crear();   
        m.barajar();        
        
        //Reparto 3 cartas al Jugador y al CPU
        for (int i = 0; i < jugador.length; i++) { 
            jugador[i] = m.repartirJug();
            maquina[i] = m.repartirMaq(); 
        }   
        //Muesto la mano del Jugador
        System.out.println("\n>>> Mano del Jugador <<<");
        for (int i = 0; i < jugador.length; i++) {
            System.out.println(jugador[i]);
        }
        //Muestro la mano del CPU (mas adelante no se mostrara)
        System.out.println("\n>>> Mano del CPU <<<");
        for (int i = 0; i < maquina.length; i++) {
            System.out.println(maquina[i]);
//            System.out.println("Carta"+(i+1));
        }
        System.out.println("\n>>> Se calcula la posibilidad de realizar Envido <<<");
         
        m.SplitPlayer(jugador); 
        m.SplitCPU(maquina); 
        
        m.SplitpalabraPlayer(jugador);
        m.SplitpalabraCPU(maquina);
        
        m.CalcularEnvidoPlayer();
        m.CalcularEnvidoCPU();
        
    }     
}
