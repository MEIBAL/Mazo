#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int juegaMaquina(int cartaJ,int cartaM[],string cartasMaquina[],int cartaMelegido); 
bool aceptaTrucoMaquina(int cartaM[], string cartasMaquina[]);

int juegaMaquina(int cartaJ,int cartaM[],string cartasMaquina[],int cartaMelegido){ 
	int index; // toma el valor del random  
	index = (rand() % 4); //asignacion de un numero aleatorio a la vble index
	cout<<"----"<<index<<"----\n"; //mostramos el valor del a vble index
	switch(index){ //inicio switch
	case 0: //la maquiena apunta a ganar en caso de que no pueda a perder
		if(cartaJ<cartaM[0]){
			cartaMelegido=cartaM[0]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<"."; //imprime la carta jugada de la maquina
			cartaM[0]=0;//se le asigna el valor de cero al rango de la carta numero 1, para saber cuando la maquina jugo esa carta y 
			//que no pueda ser utilizada en el futuro
			return 1; //Se retorna 1 cuando la maquina gana 			
		}else if(cartaJ<cartaM[1]){
			cartaMelegido=cartaM[1]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return 1; //Se retorna 1 cuando la maquina gana
		}else if(cartaJ<cartaM[2]){
			cartaMelegido=cartaM[2]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return 1; //Se retorna 1 cuando la maquina gana
		}else {	//la maquina juega la menor carta
			if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
				if(cartaM[0]<cartaM[1]&&cartaM[0]<cartaM[2]){
					cartaMelegido=cartaM[0]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
					cartaM[0]=0;
					return 3; //retorna 3 porque la maquina pierde
				}else if(cartaM[1]<cartaM[0]&&cartaM[1]<cartaM[2]){
					cartaMelegido=cartaM[1]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return 3; //retorna 3 porque la maquina pierde
				}else {//if(cartaM[2]<cartaM[1]&&cartaM[2]<cartaM[0])
					cartaMelegido=cartaM[2]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return 3; //retorna 3 porque la maquina pierde
				}
			}else{ //si una carta ya se jugo, no puede volver a jugar. 
				if(cartaM[0]==0){ //si una carta ya tiene asignado el valor 0("cero"), ya se uso
					if(cartaM[1]<cartaM[2]){
						cartaMelegido=cartaM[1]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return 3; //retorna 3 porque la maquina pierde
					}else{
						cartaMelegido=cartaM[2];  
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return 3; //retorna 3 porque la maquina pierde
					} 
				}else if(cartaM[1]==0){
					if(cartaM[0]<cartaM[2]){
						cartaMelegido=cartaM[0]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 3; //retorna 3 porque la maquina pierde
					}else{
						cartaMelegido=cartaM[2]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return 3; //retorna 3 porque la maquina pierde
					}
				}else { //if(cartaM[2]==0){
					if(cartaM[1]<cartaM[0]){
						cartaMelegido=cartaM[1]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return 3; //retorna 3 porque la maquina pierde
					}else{
						cartaMelegido=cartaM[0]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 3; //retorna 3 porque la maquina pierde
					}
				} 
			}
		}
		break;
	case 1: //El objetivo de la maquina es empatar, en el caso de que no pueda lograrlo, va a jugar la carta mas baja
		if(cartaJ==cartaM[0]){
			cartaMelegido=cartaM[0]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
			cartaM[0]=0;
			return 2; //retorna 2 porque empata
		}else if(cartaJ==cartaM[1]){
			cartaMelegido=cartaM[1]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return 2; //retorna 2 porque empata
		}else if(cartaJ==cartaM[2]){
			cartaMelegido=cartaM[2]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return 2; //retorna 2 porque empata
		}else { //juega carta mas baja
			if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
				if(cartaM[0]<=cartaM[1]&&cartaM[0]<=cartaM[2]){
					cartaMelegido=cartaM[0]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
					cartaM[0]=0;
					return 3; //retorna 3 porque la maquina pierde
				}else if(cartaM[1]<=cartaM[0]&&cartaM[1]<=cartaM[2]){
					cartaMelegido=cartaM[1]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return 3; //retorna 3 porque la maquina pierde
				}else{// if(cartaM[2]>cartaM[1]&&cartaM[2]>cartaM[0]){
					cartaMelegido=cartaM[2]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return 3; //retorna 3 porque la maquina pierde
				}
			}else{
				if(cartaM[0]==0){
					if(cartaM[1]>cartaM[2]){
						cartaMelegido=cartaM[1]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return 3; //retorna 3 porque la maquina pierde
					}else{
						cartaMelegido=cartaM[2]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return 3; //retorna 3 porque la maquina pierde
					}
				} else if(cartaM[1]==0){
					if(cartaM[0]>cartaM[2]){
						cartaMelegido=cartaM[0]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 3; //retorna 3 porque la maquina pierde
					}else{
						cartaMelegido=cartaM[2]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return 3; //retorna 3 porque la maquina pierde
					}
				}else{//if(cartaM[2]==0){
					if(cartaM[1]>cartaM[0]){
						cartaMelegido=cartaM[1]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return 3; //retorna 3 porque la maquina pierde
					}else{
						cartaMelegido=cartaM[0]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 3; //retorna 3 porque la maquina pierde
					}
				} 
				if(cartaJ<cartaM[0]){
					cartaMelegido=cartaM[0]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<"."; //imprime la carta jugada de la maquina
					cartaM[0]=0; 
					return 1; //Se retorna 1 cuando la maquina gana 			
				}else if(cartaJ<cartaM[1]){
					cartaMelegido=cartaM[1]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return 1; //Se retorna 1 cuando la maquina gana
				}else {//if(cartaJ<cartaM[2]){
					cartaMelegido=cartaM[2]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return 1; //Se retorna 1 cuando la maquina gana
				}
			}
		}  
		break;
	case 2: //El objetivo de la maquina es perder, caso contrario va a ganar (jugando la menor)
		if(cartaJ>cartaM[0]&&cartaM[0]>0){
			cartaMelegido=cartaM[0]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
			cartaM[0]=0;
			return 3; //retorna 3 y la maquina pierde
		}else if(cartaJ>cartaM[1]&&cartaM[1]>0){
			cartaMelegido=cartaM[1]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return 3; //retorna 3 y la maquina pierde
		}else if(cartaJ>cartaM[2]&&cartaM[2]>0){
			cartaMelegido=cartaM[2]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return 3; //retorna 3 y la maquina pierde
		}else { 
			if (cartaM[0] != cartaM[1] && cartaM[1] != cartaM[2] && cartaM[2] != cartaJ){
				if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
					if(cartaM[0]<cartaM[1]&&cartaM[0]<cartaM[2]){
						cartaMelegido=cartaM[0]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 1; //Se retorna 1 cuando la maquina gana
					}else if(cartaM[1]<cartaM[0]&&cartaM[1]<cartaM[2]){
						cartaMelegido=cartaM[1]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return 1; //Se retorna 1 cuando la maquina gana
					}else{// if(cartaM[2]>cartaM[1]&&cartaM[2]>cartaM[0]){
						cartaMelegido=cartaM[2]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return 1; //Se retorna 1 cuando la maquina gana
					}
				} else { 
					if(cartaM[1]==0){
						if(cartaM[0]<cartaM[2]&&cartaM[0]>0){
							cartaMelegido=cartaM[0]; 
							cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
							cartaM[0]=0;
							return 1; //Se retorna 1 cuando la maquina gana
						}else if(cartaM[2]>0){
							cartaMelegido=cartaM[2]; 
							cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
							cartaM[2]=0;
							return 1; //Se retorna 1 cuando la maquina gana
	//					}else{
	//						cartaMelegido=cartaM[0];							
	//						cout<<"\nRANGO"<<cartaMelegido<<".";
	//						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
	//						cartaM[0]=0;
						}
					}else {
						if(cartaM[2]==0){
							if(cartaM[1]<cartaM[0]&&cartaM[1]>0){
								cartaMelegido=cartaM[1]; 
								cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
								cartaM[1]=0;
								return 1; //Se retorna 1 cuando la maquina gana
							}else if(cartaM[0]>0){
								cartaMelegido=cartaM[2]; 
								cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
								cartaM[0]=0;
								return 1; //Se retorna 1 cuando la maquina gana
	//						}else{cartaMelegido=cartaM[1];
	//						cout<<"\nRANGO"<<cartaMelegido<<".";
	//						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
	//						cartaM[1]=0;}
							}
						}else{
							if(cartaM[0]==0){
								if(cartaM[1]<cartaM[2]&&cartaM[1]>0){
									cartaMelegido=cartaM[1]; 
									cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
									cartaM[1]=0;
									return 1; //Se retorna 1 cuando la maquina gana
								}else if(cartaM[2]>0){
									cartaMelegido=cartaM[2];
									cout<<"\ncarta elegida:"<<cartasMaquina[2];
									cartaM[2]=0;
									return 1; //Se retorna 1 cuando la maquina gana
	//								}else{
	//									cartaMelegido=cartaM[1];
	//									cout<<"\ncpu"<<cartaMelegido<<"\ncarta elegida:"<<cartasMaquina[1];
	//									cartaM[1]=0;
								}
								
							}
						}
					}
				}
			} else {
				cout<<"\nEmpate";
				return 2; //retorna 2 porque empata
			}
		}
		break; 
	case 3: //idem case 2 (quiere perder, sino juega la menor y va a ganar)
		if(cartaJ>cartaM[0]&&cartaM[0]>0){
			cartaMelegido=cartaM[0]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
			cartaM[0]=0;
			return 3; //retorna 3 y la maquina pierde
		}else if(cartaJ>cartaM[1]&&cartaM[1]>0){
			cartaMelegido=cartaM[1]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return 3; //retorna 3 y la maquina pierde
		}else if(cartaJ>cartaM[2]&&cartaM[2]>0){
			cartaMelegido=cartaM[2]; 
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return 3; //retorna 3 y la maquina pierde
		}else {
			if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
				if(cartaM[0]<cartaM[1]&&cartaM[0]<cartaM[2]){
					cartaMelegido=cartaM[0]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
					cartaM[0]=0;
					return 1; //Se retorna 1 cuando la maquina gana
				}else if(cartaM[1]<cartaM[0]&&cartaM[1]<cartaM[2]){
					cartaMelegido=cartaM[1]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return 1; //Se retorna 1 cuando la maquina gana
				}else{// if(cartaM[2]>cartaM[1]&&cartaM[2]>cartaM[0]){
					cartaMelegido=cartaM[2]; 
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return 1; //Se retorna 1 cuando la maquina gana
				}
			} else { 
				if(cartaM[1]==0){
					if(cartaM[0]<cartaM[2]&&cartaM[0]>0){
						cartaMelegido=cartaM[0]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 1; //Se retorna 1 cuando la maquina gana
					}else if(cartaM[2]>0){
						cartaMelegido=cartaM[2]; 
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						return 1; //Se retorna 1 cuando la maquina gana
//					}else{
//						cartaMelegido=cartaM[0];							
//						cout<<"\nRANGO"<<cartaMelegido<<".";
//						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
//						cartaM[0]=0;
					}
				}else {
					if(cartaM[2]==0){
						if(cartaM[1]<cartaM[0]&&cartaM[1]>0){
							cartaMelegido=cartaM[1]; 
							cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
							cartaM[1]=0;
							return 1; //Se retorna 1 cuando la maquina gana
						}else if(cartaM[0]>0){
							cartaMelegido=cartaM[2]; 
							cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
							cartaM[0]=0;
							return 1; //Se retorna 1 cuando la maquina gana
//						}else{cartaMelegido=cartaM[1];
//						cout<<"\nRANGO"<<cartaMelegido<<".";
//						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
//						cartaM[1]=0;}
						}
					}else{
						if(cartaM[0]==0){
							if(cartaM[1]<cartaM[2]&&cartaM[1]>0){
								cartaMelegido=cartaM[1];
								return 1; //Se retorna 1 cuando la maquina gana
								cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
								cartaM[1]=0;
								return 1; //Se retorna 1 cuando la maquina gana
							}else if(cartaM[2]>0){
								return 1; //Se retorna 1 cuando la maquina gana
								cout<<"\ncpu1:"<<cartaMelegido<<"\ncarta elegida:"<<cartasMaquina[2];
								cartaM[2]=0;
								return 1; //Se retorna 1 cuando la maquina gana
//								}else{
//									cartaMelegido=cartaM[1];
//									cout<<"\ncpu"<<cartaMelegido<<"\ncarta elegida:"<<cartasMaquina[1];
//									cartaM[1]=0;
							}
							
						}
					}
				}
			}
		} 
		break; 
	} 
}

bool aceptaTrucoMaquina(int cartaM[], string cartasMaquina[]){ 
	srand(time(NULL)); 
	int index = 0;
	index = (rand() % 8);
	
	switch( index ){
	case 0: 
		if(cartaM[0] && cartaM[1] >=8|| cartaM [0] && cartaM[2] >=8|| cartaM[1] && cartaM[2] >= 8){
			cout <<"INGRESE AL CASO 0"; 
			return true;
		}
		else{
			return false;
		}
		break; 
	case 1: 
		if(cartaM[0] >= 9 || cartaM[1] >= 9 || cartaM[2] >= 9){
			cout <<"INGRESE AL CASO 1"; 
			return true;
		}
		else{
			return false;
		} 
		break;
	case 2: 
		if(cartaM [0] >= 10 || cartaM[1] >= 10 || cartaM[2] >= 10){
			cout << "INGRESE AL CASO 2";
			return true;
		}
		else{
			return false;
		} 
		break; 
	case 3: 
		if(cartaM [0] >= 10 || cartaM[1] >= 10 || cartaM[2] >= 10){ 
			cout << "INGRESE AL CASO 3";
			return true;
		}
		else{
			return false;
		}
		break;
	case 4: 
		cout << "INGRESE AL CASO 4";
		return false;
		break;
		
	case 5: 
		cout << "INGRESE AL CASO 5";
		return false;
		break;
	case 6: 
		cout << "INGRESE AL CASO 6";
		return false;
		break;
	case 7: 
		cout << "INGRESE AL CASO 7";
		return false;
		break;
	}	
}
int LogicaEnvidoM(int PosMemoryM[],int ValorCartaM[], int EnviCPU){
	//Caso que 2 de las cartas tengan la misma pinta y la otra no
	//Cuando decimos "...es igual a..." nos referimos a la pinta/palo de la carta
	// Carta 1 es igual a Carta 2 y son distintas de Carta 3
	if(PosMemoryM[0] == PosMemoryM[1] && PosMemoryM[0] != PosMemoryM[2] && PosMemoryM[1] != PosMemoryM[2]){
		if(ValorCartaM[0] != 0 && ValorCartaM[1] != 0){
			EnviCPU = ValorCartaM[0] + ValorCartaM[1] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] != 0 && ValorCartaM[1] == 0){
			EnviCPU = ValorCartaM[0] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] == 0 && ValorCartaM[1] != 0){
			EnviCPU = ValorCartaM[1] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] == 0 && ValorCartaM[1] == 0){
			EnviCPU = 20;
			return EnviCPU;
		}
	}
	//Carta 1 es igual a Carta 3 y son distintas de Carta 2
	if(PosMemoryM[0] == PosMemoryM[2] && PosMemoryM[0] != PosMemoryM[1] && PosMemoryM[2] != PosMemoryM[1]){
		if(ValorCartaM[0] != 0 && ValorCartaM[2] != 0){
			EnviCPU = ValorCartaM[0] + ValorCartaM[2] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] != 0 && ValorCartaM[2] == 0){
			EnviCPU = ValorCartaM[0] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] == 0 && ValorCartaM[2] != 0){
			EnviCPU = ValorCartaM[2] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] == 0 && ValorCartaM[2] == 0){
			EnviCPU = 20;
			return EnviCPU;
		}
	}
	//Carta 2 es igual a Carta 3 y son distintas de Carta 1
	if(PosMemoryM[1] == PosMemoryM[2] && PosMemoryM[1] != PosMemoryM[0] && PosMemoryM[2] != PosMemoryM[0]){
		if(ValorCartaM[1] != 0 && ValorCartaM[2] != 0){
			EnviCPU = ValorCartaM[1] + ValorCartaM[2] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[1] != 0 && ValorCartaM[2] == 0){
			EnviCPU = ValorCartaM[1] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[1] == 0 && ValorCartaM[2] != 0){
			EnviCPU = ValorCartaM[2] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[1] == 0 && ValorCartaM[2] == 0){
			EnviCPU = 20;
			return EnviCPU;
		}
	}
	//Caso en el que las 3 cartas tengan la misma pinta
	//Cuando decimos "carta igual a 0" nos referimos a que sean Sota(10) Caballo(11) o Rey(12)
	//Si Carta 1, Carta 2 y Carta 3 son iguales
	if(PosMemoryM[0] == PosMemoryM[1] && PosMemoryM[0] == PosMemoryM[2] && PosMemoryM[1] == PosMemoryM[2]){
		//Contemplacion con 1 carta igual a 0	
		if(ValorCartaM[0] != 0 && ValorCartaM[1] != 0 && ValorCartaM[2] == 0){
			EnviCPU = ValorCartaM[0] + ValorCartaM[1] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] != 0 && ValorCartaM[1] == 0 && ValorCartaM[2] != 0){
			EnviCPU = ValorCartaM[0] + ValorCartaM[2] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] == 0 && ValorCartaM[1] != 0 && ValorCartaM[2] != 0){
			EnviCPU = ValorCartaM[1] + ValorCartaM[2] + 20;
			return EnviCPU;
		}
		//Contempleacion con 2 cartas iguales a 0
		if(ValorCartaM[0] != 0 && ValorCartaM[1] == 0 && ValorCartaM[2] == 0){
			EnviCPU = ValorCartaM[0] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] == 0 && ValorCartaM[1] != 0 && ValorCartaM[2] == 0){
			EnviCPU = ValorCartaM[1] + 20;
			return EnviCPU;
		}
		if(ValorCartaM[0] == 0 && ValorCartaM[1] == 0 && ValorCartaM[2] != 0){
			EnviCPU = ValorCartaM[2] + 20;
			return EnviCPU;
		}
		//Contemplacion con 3 cartas iguales a 0
		if(ValorCartaM[0] == 0 && ValorCartaM[1] == 0 && ValorCartaM[2] == 0){
			EnviCPU = 20;
			return EnviCPU;
		}
		//Cntemplacion con 3 cartas distintas de 0, se obviara la menor
		if(ValorCartaM[0] != 0 && ValorCartaM[1] != 0 && ValorCartaM[2] != 0){
			if(ValorCartaM[0] < ValorCartaM[1] && ValorCartaM[0] < ValorCartaM[2]){
				EnviCPU = ValorCartaM[1] + ValorCartaM[2] + 20;
				return EnviCPU;
			}
			if(ValorCartaM[1] < ValorCartaM[0] && ValorCartaM[1] < ValorCartaM[2]){
				EnviCPU = ValorCartaM[0] + ValorCartaM[2] + 20;
				return EnviCPU;
			}
			if(ValorCartaM[2] < ValorCartaM[1] && ValorCartaM[2] < ValorCartaM[0]){
				EnviCPU = ValorCartaM[0] + ValorCartaM[1] + 20;
				return EnviCPU;
			}
		}
	}
	//Caso en que ninguna de las cartas tenga la misma pinta
	if(PosMemoryM[0] != PosMemoryM[1] && PosMemoryM[0] != PosMemoryM[2] && PosMemoryM[1] != PosMemoryM[2]){
		return 0;
	}
}
