
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mazoarray;

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

        if (cmd.NumeroCartaInt1Jugador == 1) {
            if (cmd.PaloCarta1Jugador.contains("oro") || cmd.PaloCarta1Jugador.contains("copa")) {
                cmd.card1 = 1;   
            }
            if (cmd.PaloCarta1Jugador.contains("basto")) {
                cmd.card1 = 1;
            }
            if (cmd.PaloCarta1Jugador.contains("espada")) {
                cmd.card1 = 1;
            }
        }       
        if (cmd.NumeroCartaInt1Jugador == 2) {
            cmd.card1 = 2;
        }    
        if (cmd.NumeroCartaInt1Jugador == 3) {
            cmd.card1 = 3;
        }        
        if (cmd.NumeroCartaInt1Jugador == 4) {
            cmd.card1 = 4;
        }
        if (cmd.NumeroCartaInt1Jugador == 5) {
            cmd.card1 = 5;
        }
        if (cmd.NumeroCartaInt1Jugador == 6) {
            cmd.card1 = 6;
        }       
        if (cmd.NumeroCartaInt1Jugador == 7) {
            if (cmd.PaloCarta1Jugador.contains("basto") || cmd.PaloCarta1Jugador.contains("copa")) {
                cmd.card1 = 7;
            }
            if (cmd.PaloCarta1Jugador.contains("oro")) {
                cmd.card1 = 7;
            }
            if (cmd.PaloCarta1Jugador.contains("espada")) {
                cmd.card1 = 7;
            }
        }
        if (cmd.NumeroCartaInt1Jugador == 10) {
            cmd.card1 = 0;
        }
        if (cmd.NumeroCartaInt1Jugador == 11) {
            cmd.card1 = 0;
        }
        if (cmd.NumeroCartaInt1Jugador == 12) {
            cmd.card1 = 0;
        }
        //----------------------------------------------------------------------
        //Segunda cadena de If Solo para comparar la segunda carta de la mano
        //----------------------------------------------------------------------
        if (cmd.NumeroCartaInt2Jugador == 1) {
            if (cmd.PaloCarta2Jugador.contains("oro") || cmd.PaloCarta2Jugador.contains("copa")) {
                cmd.card2 = 1;   
            }
            if (cmd.PaloCarta2Jugador.contains("basto")) {
                cmd.card2 = 1;
            }
            if (cmd.PaloCarta2Jugador.contains("espada")) {
                cmd.card2 = 1;
            }
        }       
        if (cmd.NumeroCartaInt2Jugador == 2) {
            cmd.card2 = 2;
        }    
        if (cmd.NumeroCartaInt2Jugador == 3) {
            cmd.card2 = 3;
        }        
        if (cmd.NumeroCartaInt2Jugador == 4) {
            cmd.card2 = 4;
        }
        if (cmd.NumeroCartaInt2Jugador == 5) {
            cmd.card2 = 5;
        }
        if (cmd.NumeroCartaInt2Jugador == 6) {
            cmd.card2 = 6;
        }       
        if (cmd.NumeroCartaInt2Jugador == 7) {
            if (cmd.PaloCarta2Jugador.contains("basto") || cmd.PaloCarta2Jugador.contains("copa")) {
                cmd.card2 = 7;
            }
            if (cmd.PaloCarta2Jugador.contains("oro")) {
                cmd.card2 = 7;
            }
            if (cmd.PaloCarta2Jugador.contains("espada")) {
                cmd.card2 = 7;
            }
        }
        if (cmd.NumeroCartaInt2Jugador == 10) {
            cmd.card2 = 0;
        }
        if (cmd.NumeroCartaInt2Jugador == 11) {
            cmd.card2 = 0;
        }
        if (cmd.NumeroCartaInt2Jugador == 12) {
            cmd.card2 = 0;
        }
        //----------------------------------------------------------------------
        //Tercera cadena de If Solo para comparar la tercera carta de la mano
        //----------------------------------------------------------------------
        if (cmd.NumeroCartaInt3Jugador == 1) {
            if (cmd.PaloCarta3Jugador.contains("oro") || cmd.PaloCarta3Jugador.contains("copa")) {
                cmd.card3 = 1;   
            }
            if (cmd.PaloCarta3Jugador.contains("basto")) {
                cmd.card3 = 1;
            }
            if (cmd.PaloCarta3Jugador.contains("espada")) {
                cmd.card3 = 1;
            }
        }       
        if (cmd.NumeroCartaInt3Jugador == 2) {
            cmd.card3 = 2;
        }    
        if (cmd.NumeroCartaInt3Jugador == 3) {
            cmd.card3 = 3;
        }        
        if (cmd.NumeroCartaInt3Jugador == 4) {
            cmd.card3 = 4;
        }
        if (cmd.NumeroCartaInt3Jugador == 5) {
            cmd.card3 = 5;
        }
        if (cmd.NumeroCartaInt3Jugador == 6) {
            cmd.card3 = 6;
        }       
        if (cmd.NumeroCartaInt3Jugador == 7) {
            if (cmd.PaloCarta3Jugador.contains("basto") || cmd.PaloCarta3Jugador.contains("copa")) {
                cmd.card3 = 7;
            }
            if (cmd.PaloCarta3Jugador.contains("oro")) {
                cmd.card3 = 7;
            }
            if (cmd.PaloCarta3Jugador.contains("espada")) {
                cmd.card3 = 7;
            }
        }
        if (cmd.NumeroCartaInt3Jugador == 10) {
            cmd.card3 = 0;
        }
        if (cmd.NumeroCartaInt3Jugador == 11) {
            cmd.card3 = 0;
        }
        if (cmd.NumeroCartaInt3Jugador == 12) {
            cmd.card3 = 0;
        }
    }
}
