/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mazoarray;

import static mazoarray.metodos.PaloCarta1Jugador;

/**
 *
 * @author Eyeless Jack
 */
public class Envido {

    //Calculo de posibilidad de Envido del Jugador
    public void CalcularEnvidoPlayer() {
        metodos tmp = new metodos();
        System.out.println("\nPara el Jugador:");
        //Si tenemos cartas de igual palo, es posible cantar envido
        if (tmp.PaloCarta1Jugador.equals(tmp.PaloCarta2Jugador) || tmp.PaloCarta1Jugador.equals(tmp.PaloCarta3Jugador) || tmp.PaloCarta2Jugador.equals(tmp.PaloCarta3Jugador)) {
            System.out.println("Es posible cantar Envido!");
            //Si la primera carta tiene el mismo palo que la segunda y son distintas de la tercera entoces
            if (tmp.PaloCarta1Jugador.equals(tmp.PaloCarta2Jugador) && !tmp.PaloCarta1Jugador.equals(tmp.PaloCarta3Jugador) && !tmp.PaloCarta2Jugador.equals(tmp.PaloCarta3Jugador)) {
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt2Jugador > 9) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador > 9 && tmp.NumeroCartaInt2Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt2Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador > 9 && tmp.NumeroCartaInt2Jugador > 9) {
                    tmp.EnviPlayer = 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt2Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + tmp.NumeroCartaInt2Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
            }
            //Si la primera carta tiene el mismo palo que la tercera y son distintas de la segunda entonces
            if (tmp.PaloCarta1Jugador.equals(tmp.PaloCarta3Jugador) && !tmp.PaloCarta1Jugador.equals(tmp.PaloCarta2Jugador) && !tmp.PaloCarta3Jugador.equals(tmp.PaloCarta2Jugador)) {
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt3Jugador > 9) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador > 9 && tmp.NumeroCartaInt3Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador > 9 && tmp.NumeroCartaInt3Jugador > 9) {
                    tmp.EnviPlayer = 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt3Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
            }
            //Si la segunda carta tiene el mismo palo que la tercera y son distintas de la segunda entonces
            if (tmp.PaloCarta2Jugador.equals(tmp.PaloCarta3Jugador) && !tmp.PaloCarta2Jugador.equals(tmp.PaloCarta1Jugador) && !tmp.PaloCarta2Jugador.equals(tmp.PaloCarta1Jugador)) {
                if (tmp.NumeroCartaInt2Jugador < 10 && tmp.NumeroCartaInt3Jugador > 9) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt2Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt2Jugador > 9 && tmp.NumeroCartaInt3Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt2Jugador > 9 && tmp.NumeroCartaInt3Jugador > 9) {
                    tmp.EnviPlayer = 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt2Jugador < 10 && tmp.NumeroCartaInt3Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt2Jugador + tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
            }
            //Si las 3 cartas tienen la misma pinta entonces
            if (PaloCarta1Jugador.equals(tmp.PaloCarta2Jugador) && tmp.PaloCarta1Jugador.equals(tmp.PaloCarta3Jugador) && tmp.PaloCarta2Jugador.equals(tmp.PaloCarta3Jugador)) {
                if (tmp.NumeroCartaInt1Jugador > 9 && tmp.NumeroCartaInt2Jugador < 10 && tmp.NumeroCartaInt3Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt2Jugador + tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt2Jugador > 9 && tmp.NumeroCartaInt3Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt2Jugador < 10 && tmp.NumeroCartaInt3Jugador > 9) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + tmp.NumeroCartaInt2Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador > 9 && tmp.NumeroCartaInt2Jugador > 9 && tmp.NumeroCartaInt3Jugador < 10) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt2Jugador > 9 && tmp.NumeroCartaInt3Jugador > 9) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador > 9 && tmp.NumeroCartaInt2Jugador < 10 && tmp.NumeroCartaInt3Jugador > 9) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt2Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt1Jugador < 10 && tmp.NumeroCartaInt2Jugador < 10 && tmp.NumeroCartaInt3Jugador < 10) {
                    if (tmp.NumeroCartaInt1Jugador < tmp.NumeroCartaInt2Jugador && tmp.NumeroCartaInt1Jugador < tmp.NumeroCartaInt3Jugador) {
                        tmp.EnviPlayer = tmp.NumeroCartaInt2Jugador + tmp.NumeroCartaInt3Jugador + 20;
                        System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                    }
                }
                if (tmp.NumeroCartaInt2Jugador < tmp.NumeroCartaInt1Jugador && tmp.NumeroCartaInt2Jugador < tmp.NumeroCartaInt3Jugador) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + tmp.NumeroCartaInt3Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
                if (tmp.NumeroCartaInt3Jugador < tmp.NumeroCartaInt2Jugador && tmp.NumeroCartaInt3Jugador < tmp.NumeroCartaInt1Jugador) {
                    tmp.EnviPlayer = tmp.NumeroCartaInt1Jugador + tmp.NumeroCartaInt2Jugador + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviPlayer + " <<");
                }
            }
        } else {
            //Caso contrario no es posible cantar envido
            System.out.println("No es posible cantar Envido...");
        }
    }
    //Calculo de posibilidad de Envido del Jugador
    public void CalcularEnvidoCPU() {
        metodos tmp = new metodos();
        System.out.println("\nPara el Jugador:");
        //Si tenemos cartas de igual palo, es posible cantar envido
        if (tmp.PaloCarta1CPU.equals(tmp.PaloCarta2CPU) || tmp.PaloCarta1CPU.equals(tmp.PaloCarta3CPU) || tmp.PaloCarta2CPU.equals(tmp.PaloCarta3CPU)) {
            System.out.println("Es posible cantar Envido!");
            //Si la primera carta tiene el mismo palo que la segunda y son distintas de la tercera entoces
            if (tmp.PaloCarta1CPU.equals(tmp.PaloCarta2CPU) && !tmp.PaloCarta1CPU.equals(tmp.PaloCarta3CPU) && !tmp.PaloCarta2CPU.equals(tmp.PaloCarta3CPU)) {
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt2CPU > 9) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU > 9 && tmp.NumeroCartaInt2CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt2CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU > 9 && tmp.NumeroCartaInt2CPU > 9) {
                    tmp.EnviCPU = 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt2Jugador < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + tmp.NumeroCartaInt2CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
            }
            //Si la primera carta tiene el mismo palo que la tercera y son distintas de la segunda entonces
            if (tmp.PaloCarta1CPU.equals(tmp.PaloCarta3CPU) && !tmp.PaloCarta1CPU.equals(tmp.PaloCarta2CPU) && !tmp.PaloCarta3CPU.equals(tmp.PaloCarta2CPU)) {
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt3CPU > 9) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU > 9 && tmp.NumeroCartaInt3CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt3CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU > 9 && tmp.NumeroCartaInt3CPU > 9) {
                    tmp.EnviCPU = 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt3CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + tmp.NumeroCartaInt3CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
            }
            //Si la segunda carta tiene el mismo palo que la tercera y son distintas de la segunda entonces
            if (tmp.PaloCarta2Jugador.equals(tmp.PaloCarta3CPU) && !tmp.PaloCarta2CPU.equals(tmp.PaloCarta1CPU) && !tmp.PaloCarta2CPU.equals(tmp.PaloCarta1CPU)) {
                if (tmp.NumeroCartaInt2CPU < 10 && tmp.NumeroCartaInt3CPU > 9) {
                    tmp.EnviCPU = tmp.NumeroCartaInt2CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt2CPU > 9 && tmp.NumeroCartaInt3CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt3CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt2CPU > 9 && tmp.NumeroCartaInt3CPU > 9) {
                    tmp.EnviCPU = 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt2CPU < 10 && tmp.NumeroCartaInt3CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt2CPU + tmp.NumeroCartaInt3CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
            }
            //Si las 3 cartas tienen la misma pinta entonces
            if (tmp.PaloCarta1CPU.equals(tmp.PaloCarta2CPU) && tmp.PaloCarta1CPU.equals(tmp.PaloCarta3CPU) && tmp.PaloCarta2CPU.equals(tmp.PaloCarta3CPU)) {
                if (tmp.NumeroCartaInt1CPU > 9 && tmp.NumeroCartaInt2CPU < 10 && tmp.NumeroCartaInt3CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt2CPU + tmp.NumeroCartaInt3CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt2CPU > 9 && tmp.NumeroCartaInt3CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + tmp.NumeroCartaInt3CPU+ 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt2CPU < 10 && tmp.NumeroCartaInt3CPU > 9) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + tmp.NumeroCartaInt2CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU > 9 && tmp.NumeroCartaInt2CPU > 9 && tmp.NumeroCartaInt3CPU < 10) {
                    tmp.EnviCPU = tmp.NumeroCartaInt3CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt2CPU > 9 && tmp.NumeroCartaInt3CPU > 9) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU > 9 && tmp.NumeroCartaInt2CPU < 10 && tmp.NumeroCartaInt3CPU > 9) {
                    tmp.EnviCPU = tmp.NumeroCartaInt2CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt1CPU < 10 && tmp.NumeroCartaInt2CPU < 10 && tmp.NumeroCartaInt3CPU < 10) {
                    if (tmp.NumeroCartaInt1CPU < tmp.NumeroCartaInt2CPU && tmp.NumeroCartaInt1CPU < tmp.NumeroCartaInt3CPU) {
                        tmp.EnviCPU = tmp.NumeroCartaInt2CPU + tmp.NumeroCartaInt3CPU + 20;
                        System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                    }
                }
                if (tmp.NumeroCartaInt2CPU < tmp.NumeroCartaInt1CPU && tmp.NumeroCartaInt2CPU< tmp.NumeroCartaInt3CPU) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + tmp.NumeroCartaInt3CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
                if (tmp.NumeroCartaInt3CPU < tmp.NumeroCartaInt2CPU && tmp.NumeroCartaInt3CPU < tmp.NumeroCartaInt1CPU) {
                    tmp.EnviCPU = tmp.NumeroCartaInt1CPU + tmp.NumeroCartaInt2CPU + 20;
                    System.out.println("Valor del Envido >> " + tmp.EnviCPU + " <<");
                }
            }
        } else {
            //Caso contrario no es posible cantar envido
            System.out.println("No es posible cantar Envido...");
        }
    }
}