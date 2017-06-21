#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring> 
#include <ctime>
#include "metodos.cpp" 
#include "juego.cpp"
#include "metodoMaquina.cpp"
using namespace std;  
	
int main(int argc, char *argv[]) { 
	string nombre; 
	string mazo[40] = {"1 espada","2 espada","3 espada","4 espada","5 espada","6 espada","7 espada","10 espada","11 espada","12 espada",
		"1 oro","2 oro","3 oro","4 oro","5 oro","6 oro","7 oro","10 oro","11 oro","12 oro",
		"1 basto","2 basto","3 basto","4 basto","5 basto","6 basto","7 basto","10 basto","11 basto","12 basto",
		"1 copa","2 copa","3 copa","4 copa","5 copa","6 copa","7 copa","10 copa","11 copa","12 copa"};  
	//declaracion de mazo de 40 cartas de tipo string
	string mazoBarajado[40];//array del mazo ya barajado, esta creado para que no deje de existir el mazo principal que luego es utilizado
	string mazoCortado[40];//array del mazo luego de ser cortado
	string cartasPersona[3];//cartas que tiene el usuario en la mano
	string cartasMaquina[3];//cartas que tiene la maquina en la mano
	int corte = 0; //sirve para la eleccion del corte
	int sinCon = 0; //sirve para la eleccion del corte luego de "golpear" el mazo, y ahi elegir con o sin la primer carta
	int totalCartas = 40; //sirve para saber el total de las cartas, para luego comparar
	int corta=0; //sirve para tomar el valor de la vble corte asi la misma no se modifica, por si luego debe ser usada
	int elegir = 0; // sirve para elegir el movimiento del usuario
	int cartaJ; // rangos de los valores de la carta del jugador
	int cartaM[3]; // rangos de los valores de la carta de la maquina
	int cartaMelegido=0;//aqui se guarda la carta que la maquina selecciona para luego mostrarla
	int contador = 0;//condicion de salida del do while principal
	int contador1 = 0;//contador para saber cuando el jugador jugo la carta 1, asi no la puede volver a usar
	int contador2 = 0;//contador para saber cuando el jugador jugo la carta 2, asi no la puede volver a usar
	int contador3 = 0;//contador para saber cuando el jugador jugo la carta 3, asi no la puede volver a usar
	bool contadorTruco =false;
	bool trucoMaquina = false;//la maquina canta truco
	bool trucoQuerido = false; // respuesta usuario
	bool aceptarTruco = false; //la maquina acepta o no el truco
	int respJugada = false;
	bool ganar1mano = false; //su esta en falso, la maquina gano la mano
	bool ganar2mano = false;//su esta en falso, la maquina gano la mano
	bool ganar3mano = false;//su esta en falso, la maquina gano la mano
	bool empate1mano = false;//si empata la primer mano se pone true, 
	bool empate2mano = false;//si los 3 son true, el usuario gana las 3 manos ya que el usuario es "mano"
	bool empate3mano = false;
	int temporalMaquina = 0;
	int temporalTrucoM = 0;
	int temporalEnvidoM = 0;
	int temporalUsuario = 0;
	int temporalTrucoU = 0;
	int temporalEnvidoU = 0;
	int puntajeMaquina = 0;
	int puntajeUsuario = 0;
	
	int ManoJugador[3];
	int ManoMaquina[3];
	int ValorCartaM[3];
	int ValorCartaJ[3];
	int PosMemoryM[3];
	int PosMemoryJ[3];
	int EnviPlayer = 0;
	int EnviCPU = 0;
	
	
	
	cout<<"Ingrese su nombre: ";
	cin>>nombre; 
	do { //do while donde se cuenta el puntaje
		system("CLS");
		srand(time(NULL)); 
	//------------------------------------------------------------------------------BARAJAR
		barajar(mazo, mazoBarajado); 
	//------------------------------------------------------------------------------FIN BARAJAR
		mostrar(mazo);
		mostrar(mazoBarajado); 
	//------------------------------------------------------------------------------CORTAR
		cout<<"\nIngrese la cantidad de cartas (entre 1 y 40) que va a tomar para cortar.\nSi ingresa '0'(cero), sera como golpear el mazo.\n";
		cin>>corte;  
		cortar(corte, sinCon, totalCartas, corta, mazoBarajado,mazoCortado,cartasPersona,cartasMaquina);
	//------------------------------------------------------------------------------FIN CORTE
		cout<<"\n\n"; //salto de linea
		cout<<"Cartas Jugador\n";//ver cartas jugador 
		mostrarCartas(cartasPersona);//llamado metodo mostrar
		cout<<"Cartas Maquina\n";//ver cartas maquina 
		mostrarCartas(cartasMaquina); //llamado metodo mostrar
	//------------------------------------------------------------------------------Rangos
		rangoMaquina(cartaM, cartasMaquina, mazo); //se calculan los rangos de las cartas
	//------------------------------------------------------------------------------Fin Rangos
	//------------------------------------------------------------------------------Metodos de los Jugadores
	//------------------------------------------------------------------------------Rango Maquina y Player
	RangoJugadores(ManoMaquina, ManoJugador, cartasMaquina, cartasPersona, mazo);
	//------------------------------------------------------------------------------PuntoCarta Maquina y Player	
	PuntoJugadores(ValorCartaM, ValorCartaJ, cartasMaquina, cartasPersona, mazo);
	//------------------------------------------------------------------------------Posicion de Memoria Maquina y Player
	PosInMemory(PosMemoryM, PosMemoryJ, cartasMaquina, cartasPersona, mazo);
	//------------------------------------------------------------------------------Envido Maquina y Player
	EnviCPU = LogicaEnvidoM(PosMemoryM, ValorCartaM, EnviCPU);
	EnviPlayer = LogicaEnvidoJ(PosMemoryJ, ValorCartaJ, EnviPlayer);
	//------------------------------------------------------------------------------Fin Metodos Jugadores
	//------------------------------------------------------------------------------		
		do{ //do while principal, donde el usuario puede elegir distintas opciones
			cout<<"\nElija:\n1)Jugar carta 1.\n2)Jugar carta 2.\n3)Jugar carta 3.\n4)Envido.\n5)Real Envido.\n6)Falta Envido.\n7)Truco.\n8)Me voy.\n";
			cin>>elegir; // variable que recibe lo que el usuario elige
			switch(elegir){ 
			case 1: 
				if (contador1 == 0){ 
					cartaJ= rangos(cartasPersona[0], mazo);				
					cout<<"\n"<<cartasPersona[0]<<"\n";//muestra la carta 1 del jugador 
 
					if (contadorTruco == false){
						trucoMaquina = logicaTruco(cartaM,cartasMaquina); //llama al metodo donde la maquina puede o no cantar truco
					} else if (trucoMaquina == true){ 
						contadorTruco = true;
						cout<<"TRUCO"; // muestra msj de TRUCO!! en la consola 
						trucoQuerido = respuestaTrucoUsuario();//metodo para que el usuario responda si acepta o no
						if (trucoQuerido == false){
							temporalTrucoM = 2;
							return 0;
						} else {
							temporalTrucoM = 0;
							//FALTA COMPARACION A LA HORA DE JUGAR EL TRUCO
						}
					} else {
						respJugada = juegaMaquina(cartaJ,cartaM,cartasMaquina, cartaMelegido);
						switch(respJugada){
							case1:
								cout<<"\nLa maquina gano.\n";
								//la maquina gana
								if (contador == 0){
									ganar1mano = false;
								}else if (contador == 1){
									ganar2mano = false;
								} else {
									ganar3mano = false;
								}
								break;
							case2:
								cout<<"\nEmpate.\n";
								//la maquina empata
								if (contador == 0){
									empate1mano = false;
								}else if (contador == 1){
									empate2mano = false;
								} else {
									empate3mano = false;
								}
								break;
							case3:
								cout<<"\nEl usuario gano.\n";
								//la maquina pierde
								if (contador == 0){
									ganar1mano = true; // gana usuario
								}else if (contador == 1){
									ganar2mano = true;
								} else {
									ganar3mano = true;
								}
								break;
						}
					}
					contador++;
					contador1 ++;
				} else { 
	//				default: 
					cout<<"\nCarta 1 ya solicitada";// muestra un msj en la consola
				}
				break;
			case 2: 
				if (contador2 == 0){ 
					cartaJ= rangos(cartasPersona[1], mazo); 				
					cout<<"\n"<<cartasPersona[1]<<"\n";//muestra la carta 2 del jugador 
					if (contadorTruco == false){
						trucoMaquina = logicaTruco(cartaM,cartasMaquina); //llama al metodo donde la maquina puede o no cantar truco
					} else if (trucoMaquina == true){ 
						contadorTruco = true;
						cout<<"TRUCO"; // muestra msj de TRUCO!! en la consola 
						trucoQuerido = respuestaTrucoUsuario();//metodo para que el usuario responda si acepta o no
						if (trucoQuerido == false){
							temporalTrucoM = 2;
							return 0;
						} else {
							temporalTrucoM = 0;
							//FALTA COMPARACION A LA HORA DE JUGAR EL TRUCO
						}
					} else {
						respJugada = juegaMaquina(cartaJ,cartaM,cartasMaquina, cartaMelegido);
						respJugada = respJugada + 3;
						switch(respJugada){
							case4:
								cout<<"\nLa maquina gano.\n";
							//la maquina gana
							if (contador == 0){
								ganar1mano = false;
							}else if (contador == 1){
								ganar2mano = false;
							} else {
								ganar3mano = false;
							}
							break;
							case5:
								cout<<"\nEmpate.\n";
							//la maquina empata
							if (contador == 0){
								empate1mano = false;
							}else if (contador == 1){
								empate2mano = false;
							} else {
								empate3mano = false;
							}
							break;
							case6:
								cout<<"\nEl usuario gano.\n";
							//la maquina pierde
							if (contador == 0){
								ganar1mano = true;
							}else if (contador == 1){
								ganar2mano = true;
							} else {
								ganar3mano = true;
							}
							break;
						}
					}
					contador++;
					contador1 ++;
				} else { 
	//				default: 
					cout<<"\nCarta 2 ya solicitada";// muestra un msj en la consola
				}
				break;
			case 3:
				if (contador3 == 0){ 
					cartaJ= rangos(cartasPersona[2], mazo);					
					cout<<"\n"<<cartasPersona[2]<<"\n";//muestra la carta 3 del jugador 
					trucoMaquina = logicaTruco(cartaM,cartasMaquina); //llama al metodo donde la maquina puede o no cantar truco
					if (trucoMaquina == true){ 
						cout<<"TRUCO"; // muestra msj de TRUCO!! en la consola 
						trucoQuerido = respuestaTrucoUsuario();//metodo para que el usuario responda si acepta o no
						if (trucoQuerido == false){
							return 0;
						}
					} else {
						respJugada = juegaMaquina(cartaJ,cartaM,cartasMaquina, cartaMelegido);
						respJugada = respJugada + 6;
						switch(respJugada){
							case7:
								cout<<"\nLa maquina gano.\n";
							//la maquina gana
							if (contador == 0){
								ganar1mano = false;
							}else if (contador == 1){
								ganar2mano = false;
							} else {
								ganar3mano = false;
							}
							break;
							case8:
								cout<<"\nEmpate.\n";
							//la maquina empata
							if (contador == 0){
								empate1mano = false;
							}else if (contador == 1){
								empate2mano = false;
							} else {
								empate3mano = false;
							}
							break;
							case9:
								cout<<"\nEl usuario gano.\n";
							//la maquina pierde
							if (contador == 0){
								ganar1mano = true;
							}else if (contador == 1){
								ganar2mano = true;
							} else {
								ganar3mano = true;
							}
							break;
						}
					}
					contador++;
					contador1 ++;
				} else { 
	//				default: 
					cout<<"\nCarta 3 ya solicitada";// muestra un msj en la consola
				} 
				break;
			case 4:
				contador++;
				if(EnviPlayer == 0){
					cout<<"\nNo tiene las cartas necesarias para cantar Envido\nQue hara?\n";
					//Aqui aplicaria un switch
				}else{
					cout<<"\nSu puntaje de envido es: \n";
					cout<<">> "<<EnviPlayer<<" <<\n";
					cout<<"Cuantos puntos tengo?\n";
					//Aqui aplicaria un switch
				}	
				cout<<"------------------------------------------------------------";
				if(EnviCPU == 0){
					cout<<"\nLa Maquina no tiene las cartas necesarias para cantar Envido\n\n";
					//Aqui aplicaria un switch
				}else{
					cout<<"\nEl puntaje de envido de la maquina es: \n";
					cout<<">> "<<EnviCPU<<" <<\n";
					cout<<"Que hara?\n";
					//Aqui aplicaria un switch				
				}
				//Metodo en contruccion = La CPU responde
				//Metodo en contruccion para que responda la CPU
				break;
			case 5: 
				contador++;
				break;
			case 6: 
				contador++;
				break;
			case 7:
				aceptarTruco = aceptaTrucoMaquina(cartaM, cartasMaquina);
				if (aceptarTruco == false) {
					return 0;
				} else {
					cout<<"QUIERO";
				}
				contador++;
				break;
			case 8: 
				return 0;
				break;
	//		default:   
			}  
			
		}while(contador != 3);//fin do-while (condicion de salida) 
		if (contador == 3){	//condicion para saber quien gano la partida que se esta jugando
			puntajeMaquina = puntajeMaquina + temporalMaquina + temporalEnvidoM + temporalTrucoM;
			puntajeUsuario = puntajeUsuario + temporalUsuario + temporalEnvidoU + temporalTrucoU;
		}
		if (puntajeMaquina >= 12){
			puntajeMaquina = 12;
		}
		if (puntajeUsuario >= 12){
			puntajeUsuario = 12;
		}
	}while(puntajeMaquina != 12 || puntajeUsuario != 12);
	if (puntajeMaquina == 12 || puntajeUsuario == 12){	//condicion para saber quien gano el juego
		if (puntajeMaquina<puntajeUsuario){
			cout<<"Gano la maquina";
		} else {
			cout<<"Gano "<<nombre<<".";
		}
	}
	return 0;
}  
 


