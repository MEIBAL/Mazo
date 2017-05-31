
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mazoarray;
import static mazoarray.metodos.Palocartaj;
/**
 *
 * @author Lucho Ochoa
 */

public class ValorCartas {
    
    metodos cmd = new metodos();
   static int Range14 = 4;       static int PointRange14 = 4;      static String TypeC14 = "basto,oro,copa,espada";     //Todas las pintas       
   static int Range13 = 5;       static int PointRange13 = 5;      static String TypeC13 = "basto,oro,copa,espada";     //Todas las pintas            
   static int Range12 = 6;       static int PointRange12 = 6;      static String TypeC12 = "basto,oro,copa,espada";     //Todas las pintas        
   static int Range11 = 7;       static int PointRange11 = 7;      static String TypeC11 = "basto,copa";                //Bastos - Copas        
   static int Range10 = 10;      static int PointRange10 = 0;      static String TypeC10 = "basto,oro,copa,espada";     //Todas las pintas        
   static int Range9 = 11;       static int PointRange9 = 0;       static String TypeC9 = "basto,oro,copa,espada";      //Todas las pintas        
   static int Range8 = 12;       static int PointRange8 = 0;       static String TypeC8 = "basto,oro,copa,espada";      //Todas las pintas       
   static int Range7 = 1;        static int PointRange7 = 1;       static String TypeC7 = "oro,copa";                   //Copa - Oro        
   static int Range6 = 2;        static int PointRange6 = 2;       static String TypeC6 = "basto,oro,copa,espada";      //Todas las pintas        
   static int Range5 = 3;        static int PointRange5 = 3;       static String TypeC5 = "basto,oro,copa,espada";      //Todas las pintas        
   static int Range4 = 7;        static int PointRange4 = 7;       static String TypeC4 = "oro";                        //Oro        
   static int Range3 = 7;        static int PointRange3 = 7;       static String TypeC3 = "espada";                     //Espadas        
   static int Range2 = 1;        static int PointRange2 = 1;       static String TypeC2 = "basto";                      //Bastos       
   static int Range1 = 1;        static int PointRange1 = 1;       static String TypeC1 = "espada";                     //Espadas
    
    //Ejemplo: Si el valor de la Carta en mano es 1(NumeroCartaInt1Jugador) de oro(PaloCarta1Jugador),
    //se verificara que el numero de la carta coincida con alguno de los rangos(Range1,Range2,Range7)
    //luego verificara que la pinta coincida con algunos de los tipos de palo(TypeC1,TypeC2,TypeC7)
    //en este caso su rango es 7(Range7) de tipo 7(TypeC7), esto al validarse se le asignara el
    //valor del puntaje de la correspondiente carta, en este caso 1(PointRange7)
    
    public void PuntajeDeRango(){
        
        ----------------------------------------------------------------------
    Primer cadena de If Solo para comparar la primera carta de la mano
       ----------------------------------------------------------------------
for (int i = 0; i < Palocartaj.length; i++) {
                    if (cmd.NcartaJugador [i] == 1) {
            if (cmd.Palocartaj[i].contains("oro") || cmd.Palocartaj[i].contains("copa")) {
                System.out.println("La primera carta es de Rango 7");
            }
            if (cmd.Palocartaj[i].contains("basto")) {
                System.out.println("La primera carta es de Rango 2");
            }
            if (cmd.Palocartaj[i].contains("espada")) {
                System.out.println("La primera carta es de Rango 1");                
            }
        }       
        if (cmd.NcartaJugador [i] == 2) {
            System.out.println("La primera carta es de Rango 6");     
        }    
            
        if (cmd.NcartaJugador [i] == 3) {
            System.out.println("La primera carta es de Rango 5");
        }        
        
        if (cmd.NcartaJugador [i] == 4) {
            System.out.println("La primera carta es de Rango 14");
        }
        if (cmd.NcartaJugador [i] == 5) {
            System.out.println("La primera carta es de Rango 13");
        }
        if (cmd.NcartaJugador [i] == 6) {
            System.out.println("La primera carta es de Rango 12");
        }       
        if (cmd.NcartaJugador [i] == 7) {
            if (cmd.Palocartaj[i].contains("basto") || cmd.Palocartaj[i].contains("copa")) {
                System.out.println("La primera carta es de Rango 11");
            }
            if (cmd.Palocartaj[i].contains("oro")) {
                System.out.println("La primera carta es de Rango 4");
            }
            if (cmd.Palocartaj[0].contains("espada")) {
                System.out.println("La primera carta es de Rango 3");
            }
        }
        if (cmd.NcartaJugador [i] == 10) {
            System.out.println("La primera carta es de Rango 10");
        }
        if (cmd.NcartaJugador [i] == 11) {
            System.out.println("La primera carta es de Rango 9");
        }
        if (cmd.NcartaJugador [i] == 12) {
            System.out.println("La primera carta es de Rango 8");
        }
        //----------------------------------------------------------------------
        //Segunda cadena de If Solo para comparar la segunda carta de la mano
        //----------------------------------------------------------------------
        if (cmd.NcartaJugador [1] == 1) {
            if (cmd.Palocartaj[i].contains("oro") || cmd.Palocartaj[i].contains("copa")) {
                System.out.println("La primera carta es de Rango 7");
            }
            if (cmd.Palocartaj[i].contains("basto")) {
                System.out.println("La primera carta es de Rango 2");
            }
            if (cmd.Palocartaj[i].contains("espada")) {
                System.out.println("La primera carta es de Rango 1");                
            }
            
        }
        
    }
     
    }
}
