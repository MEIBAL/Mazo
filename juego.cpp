#include <cstdlib>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring> 
//#include <stdlib.h>
#include <ctime>
using namespace std;

/*
archivo:
*donde se asignan los rango
*donde se asignan los puntos de rango
*donde se guardan los rangos de la maquina y del usuario en un array para ser usado en el futuro
*se crean booleanos, el primero que dice cuando cartar truco a la maquina y
el segundo es para que el usuario pueda responder si quiere el truco o no
*/

int rangos(string carta, string mazo[]);
int puntoRango(string carta, string mazo[]); 
string rangoMaquina(int cartaM[], string cartasMaquina[], string mazo[]); 
bool logicaTruco(int cartaM[], string cartasMaquina[]);
bool respuestaTrucoUsuario(); 
bool CantaEnvido(int EnviCPU);

string RangoJugadores(int ManoMaquina[], int ManoJugador[], string cartasMaquina[], string cartasPersona[], string mazo[]);
string PuntoJugadores(int ValorCartaM[], int ValorCartaJ[], string cartasMaquina[], string cartasPersona[], string mazo[]);
string PoInMemory(int PosMemoryM[], int PosMemoryJ[], string cartasMaquina[], string cartasPersona[], string mazo[]);
int Envido(int EnviPlayer, int EnviCPU);
int LogicaEnvidoM(int PosMemoryM[], int ValorCartaM[], int EnviCPU);
int LogicaEnvidoJ(int PosMemoryJ[], int ValorCartaJ[], int EnviPlayer);

int rangos(string carta, string mazo[]){ 
	if (carta == mazo[0]){//1 espada
		return 14;
	}
	if (carta == mazo[1]){//2 espada
		return 9;
	}
	if (carta == mazo[2]){//3 espada
		return 10;
	}
	if (carta == mazo[3]){//4 espada
		return 1;
	}
	if (carta == mazo[4]){//5 espada
		return 2;
	}
	if (carta == mazo[5]){//6 espada
		return 3;
	}
	if (carta == mazo[6]){//7 espada
		return 12;
	}
	if (carta == mazo[7]){//10 espada
		return 5;
	}
	if (carta == mazo[8]){//11 espada
		return 6;
	}
	if (carta == mazo[9]){//12 espada
		return 7;
	} 
	if (carta == mazo[10]){//1 oro
		return 8;
	}
	if (carta == mazo[11]){//2 oro
		return 9;
	}
	if (carta == mazo[12]){//3 oro
		return 10;
	}
	if (carta == mazo[13]){//4 oro
		return 1;
	}
	if (carta == mazo[14]){//5 oro
		return 2;
	}
	if (carta == mazo[15]){//6 oro
		return 3;
	}
	if (carta == mazo[16]){//7 oro
		return 11;
	}
	if (carta == mazo[17]){//10 oro
		return 5;
	}
	if (carta == mazo[18]){//11 oro
		return 6;
	}
	if (carta == mazo[19]){//12 oro
		return 7;
	} 
	if (carta == mazo[20]){ //1 basto
		return 13;
	} 
	if (carta == mazo[21]){//2 basto
		return 9;
	} 
	if (carta == mazo[22]){//3 basto
		return 10;
	} 
	if (carta == mazo[23]){//4 basto
		return 1;
	} 
	if (carta == mazo[24]){//5 basto
		return 2;
	} 
	if (carta == mazo[25]){ //6 basto
		return 3;
	} 
	if (carta == mazo[26]){//7 basto
		return 4;
	} 
	if (carta == mazo[27]){//10 basto
		return 5;
	} 
	if (carta == mazo[28]){//11 basto
		return 6;
	} 
	if (carta == mazo[29]){//12 basto
		return 7;
	} 
	if (carta == mazo[30]){ //1 copa
		return 8;
	} 
	if (carta == mazo[31]){//2 copa
		return 9;
	} 
	if (carta == mazo[32]){//3 copa
		return 10;
	} 
	if (carta == mazo[33]){//4 copa
		return 1;
	} 
	if (carta == mazo[34]){//5 copa
		return 2;
	} 
	if (carta == mazo[35]){ //6 copa
		return 3;
	} 
	if (carta == mazo[36]){//7 copa
		return 4;
	} 
	if (carta == mazo[37]){//10 copa
		return 5;
	} 
	if (carta == mazo[38]){//11 copa
		return 6;
	} else { //12 copa
//	if (carta == mazo[39]){//12 copa
		return 7;
	} 
}  

int puntoRango(string carta, string mazo[]){ 
	
	if (carta == mazo[0]){//1 espada
		return 1;
	}
	if (carta == mazo[1]){//2 espada
		return 2;
	}
	if (carta == mazo[2]){//3 espada
		return 3;
	}
	if (carta == mazo[3]){//4 espada
		return 4;
	}
	if (carta == mazo[4]){//5 espada
		return 5;
	}
	if (carta == mazo[5]){//6 espada
		return 6;
	}
	if (carta == mazo[6]){//7 espada
		return 7;
	}
	if (carta == mazo[7]){//10 espada
		return 0;
	}
	if (carta == mazo[8]){//11 espada
		return 0;
	}
	if (carta == mazo[9]){//12 espada
		return 0;
	} 
	if (carta == mazo[10]){//1 oro
		return 1;
	}
	if (carta == mazo[11]){//2 oro
		return 2;
	}
	if (carta == mazo[12]){//3 oro
		return 3;
	}
	if (carta == mazo[13]){//4 oro
		return 4;
	}
	if (carta == mazo[14]){//5 oro
		return 5;
	}
	if (carta == mazo[15]){//6 oro
		return 6;
	}
	if (carta == mazo[16]){//7 oro
		return 7;
	}
	if (carta == mazo[17]){//10 oro
		return 0;
	}
	if (carta == mazo[18]){//11 oro
		return 0;
	}
	if (carta == mazo[19]){//12 oro
		return 0;
	} 
	if (carta == mazo[20]){ //1 basto
		return 1;
	} 
	if (carta == mazo[21]){//2 basto
		return 2;
	} 
	if (carta == mazo[22]){//3 basto
		return 3;
	} 
	if (carta == mazo[23]){//4 basto
		return 4;
	} 
	if (carta == mazo[24]){//5 basto
		return 5;
	} 
	if (carta == mazo[25]){ //6 basto
		return 6;
	} 
	if (carta == mazo[26]){//7 basto
		return 7;
	} 
	if (carta == mazo[27]){//10 basto
		return 0;
	} 
	if (carta == mazo[28]){//11 basto
		return 0;
	} 
	if (carta == mazo[29]){//12 basto
		return 0;
	} 
	if (carta == mazo[30]){ //1 copa
		return 1;
	} 
	if (carta == mazo[31]){//2 copa
		return 2;
	} 
	if (carta == mazo[32]){//3 copa
		return 3;
	} 
	if (carta == mazo[33]){//4 copa
		return 4;
	} 
	if (carta == mazo[34]){//5 copa
		return 5;
	} 
	if (carta == mazo[35]){ //6 copa
		return 6;
	} 
	if (carta == mazo[36]){//7 copa
		return 7;
	} 
	if (carta == mazo[37]){//10 copa
		return 0;
	} 
	if (carta == mazo[38]){//11 copa
		return 0;
	} else { //12 copa
//	if (carta == mazo[39]){//12 copa
		return 0;
	} 
}  
int ValorPuntaje(string carta, string mazo[]){ 
	if (carta == mazo[0]){//1 espada
		return 1;
	}
	if (carta == mazo[1]){//2 espada
		return 1;
	}
	if (carta == mazo[2]){//3 espada
		return 1;
	}
	if (carta == mazo[3]){//4 espada
		return 1;
	}
	if (carta == mazo[4]){//5 espada
		return 1;
	}
	if (carta == mazo[5]){//6 espada
		return 1;
	}
	if (carta == mazo[6]){//7 espada
		return 1;
	}
	if (carta == mazo[7]){//10 espada
		return 1;
	}
	if (carta == mazo[8]){//11 espada
		return 1;
	}
	if (carta == mazo[9]){//12 espada
		return 1;
	} 
	if (carta == mazo[10]){//1 oro
		return 2;
	}
	if (carta == mazo[11]){//2 oro
		return 2;
	}
	if (carta == mazo[12]){//3 oro
		return 2;
	}
	if (carta == mazo[13]){//4 oro
		return 2;
	}
	if (carta == mazo[14]){//5 oro
		return 2;
	}
	if (carta == mazo[15]){//6 oro
		return 2;
	}
	if (carta == mazo[16]){//7 oro
		return 2;
	}
	if (carta == mazo[17]){//10 oro
		return 2;
	}
	if (carta == mazo[18]){//11 oro
		return 2;
	}
	if (carta == mazo[19]){//12 oro
		return 2;
	} 
	if (carta == mazo[20]){ //1 basto
		return 3;
	} 
	if (carta == mazo[21]){//2 basto
		return 3;
	} 
	if (carta == mazo[22]){//3 basto
		return 3;
	} 
	if (carta == mazo[23]){//4 basto
		return 3;
	} 
	if (carta == mazo[24]){//5 basto
		return 3;
	} 
	if (carta == mazo[25]){ //6 basto
		return 3;
	} 
	if (carta == mazo[26]){//7 basto
		return 3;
	} 
	if (carta == mazo[27]){//10 basto
		return 3;
	} 
	if (carta == mazo[28]){//11 basto
		return 3;
	} 
	if (carta == mazo[29]){//12 basto
		return 3;
	} 
	if (carta == mazo[30]){ //1 copa
		return 4;
	} 
	if (carta == mazo[31]){//2 copa
		return 4;
	} 
	if (carta == mazo[32]){//3 copa
		return 4;
	} 
	if (carta == mazo[33]){//4 copa
		return 4;
	} 
	if (carta == mazo[34]){//5 copa
		return 4;
	} 
	if (carta == mazo[35]){ //6 copa
		return 4;
	} 
	if (carta == mazo[36]){//7 copa
		return 4;
	} 
	if (carta == mazo[37]){//10 copa
		return 4;
	} 
	if (carta == mazo[38]){//11 copa
		return 4;
	} else { //12 copa
//	if (carta == mazo[39]){//12 copa
		return 4;
	} 
}  
string rangoMaquina(int cartaM[], string cartasMaquina[], string mazo[]){
	for(int i = 0; i<3; i++){
		cartaM[i] = rangos(cartasMaquina[i], mazo);
	}   
	return "a";
}

 
bool logicaTruco(int cartaM[], string cartasMaquina[]){
	//metodo para que la maquina pueda decidir si cantar truco o no	
	srand(time(NULL)); 
	int index = 0;	
	index = (rand() % 5); 
	switch(index){ 
		case 0: 
			if(cartaM[0] >= 9 && cartaM [1] >= 9 || cartaM[0] >= 9 && cartaM [2] >= 9 ||
			cartaM[1] >= 9 && cartaM [2] >= 9 || cartaM[0] >= 9 && cartaM[1] >= 9 && cartaM [2] >= 9){ 
				return true; 		
			} else{
				return false;
			}
			break;
		case 1: 
			if(cartaM[0] >= 9 && cartaM [1] >= 9 || cartaM[0] >= 9 && cartaM [2] >= 9 || cartaM[1] >= 9 && cartaM [2] >= 9  ){ 
				return true;
			} else {
				return false;
			}
			break;
		case 2: 
			if(cartaM[0] >= 11 || cartaM [1] >= 11 || cartaM[2] >= 11 ||
			cartaM[0] >= 11 || cartaM [1] >= 11 || cartaM[2] >= 11 ||
			cartaM[0] >= 11 || cartaM [1] >= 11 || cartaM[2] >= 11 ){  
				return true;
			}
			else {
				return false;
				}
			 
			break;
		case 3:
			if(cartaM[0] >= 11 || cartaM [1] >= 11 || cartaM[2] >= 11){  
				return true;
			}else {
				return false;
			}  
			break;
			
//		case 4: 
//			cout << " NO QUIERO"; 
//			cout << "CASO 5"; 
//			return "a"; 
//			break;
//			
		case 4:
			cout <<" CASO 5"; 
			return true;
			break;	
		} 
	return 0;
}
/////////////////////////////////Sin terminar
bool CantaEnvido(int EnviCPU){
	srand(time(NULL)); 
	int index = 0;
	index = (rand() % 3);
	
	switch( index ){
	case 0: 
		if(EnviCPU > 25){
			cout <<"INGRESE AL CASO 0"; 
			return true;
		}
		else{
			return false;
		}
		break; 
	case 1: 
		if(EnviCPU > 27){
			cout <<"INGRESE AL CASO 1"; 
			return true;
		}
		else{
			return false;
		} 
		break;
	case 2: 
		if(EnviCPU > 30){
			cout << "INGRESE AL CASO 2";
			return true;
		}
		else{
			return false;
		} 
		break; 
	case 3: 
			cout << "INGRESE AL CASO 3";
			return true;
		break;
	}	
}
/////////////////////////////////////Sin terminar
//metodo donde al usuario le muestran un menu donde puede decidir si quiere el truco o no
bool respuestaTrucoUsuario(){
	int a; 
	cout<<"\nElija:\n1)Quiero.\n2)No Quiero\n";
	cin>>a;
	switch(a){
		case 1: 
			cout<<"Quiero\n";
			return true;
			break;
		case 2: 
			return false;
			break;
//	default:
	}
}
//metodo donde la maquina puede decidir si acepta el truco o no, dependiendo de un random y de varias condiciones

string RangoJugadores(int ManoMaquina[], int ManoJugador[], string cartasMaquina[], string cartasPersona[], string mazo[]){
	for(int i = 0 ; i < 3 ; i++){
		ManoMaquina[i] = rangos(cartasMaquina[i], mazo);
		ManoJugador[i] = rangos(cartasPersona[i], mazo);
	}   
	return "a";
}
string PuntoJugadores(int ValorCartaM[], int ValorCartaJ[], string cartasMaquina[], string cartasPersona[], string mazo[]){
	for(int i = 0 ; i < 3 ; i++){
		ValorCartaM[i] = puntoRango(cartasMaquina[i], mazo);
		ValorCartaJ[i] = puntoRango(cartasPersona[i], mazo);
	}
	return "a";
}
string PosInMemory(int PosMemoryM[], int PosMemoryJ[], string cartasMaquina[], string cartasPersona[], string mazo[]){
	for(int i = 0 ; i < 3 ; i++){
		PosMemoryM[i] = ValorPuntaje(cartasMaquina[i], mazo); 
		PosMemoryJ[i] = ValorPuntaje(cartasPersona[i], mazo); 
	}
	return "a";
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
//------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------
int LogicaEnvidoJ(int PosMemoryJ[],int ValorCartaJ[], int EnviPlayer){
	//Caso que 2 de las cartas tengan la misma pinta y la otra no
	//Cuando decimos "...es igual a..." nos referimos a la pinta/palo de la carta
	// Carta 1 es igual a Carta 2 y son distintas de Carta 3
	if(PosMemoryJ[0] == PosMemoryJ[1] && PosMemoryJ[0] != PosMemoryJ[2] && PosMemoryJ[1] != PosMemoryJ[2]){
		if(ValorCartaJ[0] != 0 && ValorCartaJ[1] != 0){
			EnviPlayer = ValorCartaJ[0] + ValorCartaJ[1] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] != 0 && ValorCartaJ[1] == 0){
			EnviPlayer = ValorCartaJ[0] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] == 0 && ValorCartaJ[1] != 0){
			EnviPlayer = ValorCartaJ[1] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] == 0 && ValorCartaJ[1] == 0){
			EnviPlayer = 20;
			return EnviPlayer;
		}
	}
	//Carta 1 es igual a Carta 3 y son distintas de Carta 2
	if(PosMemoryJ[0] == PosMemoryJ[2] && PosMemoryJ[0] != PosMemoryJ[1] && PosMemoryJ[2] != PosMemoryJ[1]){
		if(ValorCartaJ[0] != 0 && ValorCartaJ[2] != 0){
			EnviPlayer = ValorCartaJ[0] + ValorCartaJ[2] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] != 0 && ValorCartaJ[2] == 0){
			EnviPlayer = ValorCartaJ[0] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] == 0 && ValorCartaJ[2] != 0){
			EnviPlayer = ValorCartaJ[2] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] == 0 && ValorCartaJ[2] == 0){
			EnviPlayer = 20;
			return EnviPlayer;
		}
	}
	//Carta 2 es igual a Carta 3 y son distintas de Carta 1
	if(PosMemoryJ[1] == PosMemoryJ[2] && PosMemoryJ[1] != PosMemoryJ[0] && PosMemoryJ[2] != PosMemoryJ[0]){
		if(ValorCartaJ[1] != 0 && ValorCartaJ[2] != 0){
			EnviPlayer = ValorCartaJ[1] + ValorCartaJ[2] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[1] != 0 && ValorCartaJ[2] == 0){
			EnviPlayer = ValorCartaJ[1] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[1] == 0 && ValorCartaJ[2] != 0){
			EnviPlayer = ValorCartaJ[2] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[1] == 0 && ValorCartaJ[2] == 0){
			EnviPlayer = 20;
			return EnviPlayer;
		}
	}
	//Caso en el que las 3 cartas tengan la misma pinta
	//Cuando decimos "carta igual a 0" nos referimos a que sean Sota(10) Caballo(11) o Rey(12)
	//Si Carta 1, Carta 2 y Carta 3 son iguales
	if(PosMemoryJ[0] == PosMemoryJ[1] && PosMemoryJ[0] == PosMemoryJ[2] && PosMemoryJ[1] == PosMemoryJ[2]){
		//Contemplacion con 1 carta igual a 0	
		if(ValorCartaJ[0] != 0 && ValorCartaJ[1] != 0 && ValorCartaJ[2] == 0){
			EnviPlayer = ValorCartaJ[0] + ValorCartaJ[1] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] != 0 && ValorCartaJ[1] == 0 && ValorCartaJ[2] != 0){
			EnviPlayer = ValorCartaJ[0] + ValorCartaJ[2] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] == 0 && ValorCartaJ[1] != 0 && ValorCartaJ[2] != 0){
			EnviPlayer = ValorCartaJ[1] + ValorCartaJ[2] + 20;
			return EnviPlayer;
		}
		//Contempleacion con 2 cartas iguales a 0
		if(ValorCartaJ[0] != 0 && ValorCartaJ[1] == 0 && ValorCartaJ[2] == 0){
			EnviPlayer = ValorCartaJ[0] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] == 0 && ValorCartaJ[1] != 0 && ValorCartaJ[2] == 0){
			EnviPlayer = ValorCartaJ[1] + 20;
			return EnviPlayer;
		}
		if(ValorCartaJ[0] == 0 && ValorCartaJ[1] == 0 && ValorCartaJ[2] != 0){
			EnviPlayer = ValorCartaJ[2] + 20;
			return EnviPlayer;
		}
		//Contemplacion con 3 cartas iguales a 0
		if(ValorCartaJ[0] == 0 && ValorCartaJ[1] == 0 && ValorCartaJ[2] == 0){
			EnviPlayer = 20;
			return EnviPlayer;
		}
		//Cntemplacion con 3 cartas distintas de 0, se obviara la menor
		if(ValorCartaJ[0] != 0 && ValorCartaJ[1] != 0 && ValorCartaJ[2] != 0){
			if(ValorCartaJ[0] < ValorCartaJ[1] && ValorCartaJ[0] < ValorCartaJ[2]){
				EnviPlayer = ValorCartaJ[1] + ValorCartaJ[2] + 20;
				return EnviPlayer;
			}
			if(ValorCartaJ[1] < ValorCartaJ[0] && ValorCartaJ[1] < ValorCartaJ[2]){
				EnviPlayer = ValorCartaJ[0] + ValorCartaJ[2] + 20;
				return EnviPlayer;
			}
			if(ValorCartaJ[2] < ValorCartaJ[1] && ValorCartaJ[2] < ValorCartaJ[0]){
				EnviPlayer = ValorCartaJ[0] + ValorCartaJ[1] + 20;
				return EnviPlayer;
			}
		}
	}
	//Caso en que ninguna de las cartas tenga la misma pinta
	if(PosMemoryJ[0] != PosMemoryJ[1] && PosMemoryJ[0] != PosMemoryJ[2] && PosMemoryJ[1] != PosMemoryJ[2]){
		return 0;
	}
}


