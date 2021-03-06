#include <cstdlib>//sirve para convertir un entero a cadena de caracteres
#include <iostream>
#include <vector>//es para operar con arreglos unidimencionales de datos
#include <stdio.h>//contiene las definiciones de los macros,las constantes y las declaraciones de funciones
#include <cstring> //sirve para trabajar con secuencia de caracteres
#include <stdlib.h>//es para gestion de memoria dinamica,control de proceso y otras
#include <ctime>//contiene funciones para manipular y formatear la fecha y hora del sistema
/*
archivo donde:
se baraja el mazo ya creado
se puede mostrar, tanto los mazos, como las cartas de los jugadores
se puede cortar(de varias formas)
y por ultimo se reparten las cartas de acuerdo a la forma en que se corto
*/
using namespace std; 

string barajar(string mazo[], string mazos[]);
string mostrar(string mazo[]);
string mostrarCartas(string cartas[]);
string repartirCon(string cartasPersona[],string cartasMaquina[], string mazoBarajado[]); 
string repartirSin(string mazoBarajado[], string mazoCortado[],string cartasMaquina[],string cartasPersona[]);
string repartir(string cartasPersona[], string cartasMaquina[], string mazoCortado[]);
string cortar(int corte, int sinCon, int totalCartas, int corta, string mazoBarajado[], string mazoCortado[], string cartasPersona[]
	,string cartasMaquina[]);  
 
int numJug = -2;
int numMaq = -1; 

string barajar(string mazo[], string mazos[]){ 
	int index = 0; 
	bool usado[40];   
	for (int i=0; i < 40; i++){
		usado[i]=false;
	} 
	for (int i=0; i < 40; i++){
		do{
			index = (rand() % 40);
		}while (usado[index]);
		mazos[i] = mazo[index];
		usado[index]=true;
	} 
	return "";
}

string mostrar(string mazo[]){ 
	cout<<"\n";
	for(int i = 0; i<40; i++){
		cout<<mazo[i]<<"\n";  
	}
	cout<<"\n_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n";
	return "a";
} 
string mostrarCartas(string cartas[]){
	for(int f = 0; f<3; f++){
		cout<<cartas[f]<<"\n";  
	} 
	cout<<"_________________________________________________________________________________________\n";
	return "";
}
string cortar(int corte, int sinCon, int totalCartas, int corta, string mazoBarajado[], string mazoCortado[], string cartasPersona[], 
string cartasMaquina[]){ 
	if (corte == 0){
		cout<<"Elija:\n1)Con la primer carta.\n2)Sin la primer carta.\n";
		cin>>sinCon;
		switch(sinCon){
			case 1: cout << "\nUsted ha seleccionado la opcion de usar la primer carta";
//------------------------------------------------------------------------------REPARTIR
				for(int i=0; i<3; i++){ 
					cartasPersona[i] = mazoBarajado[i];//
					cartasMaquina[i] = mazoBarajado[i+3]; 
				} 
//------------------------------------------------------------------------------FIN REPARTIR
				break;
			case 2: cout << "\nUsted ha seleccionado la opcion de No usar la primer carta"; 
//------------------------------------------------------------------------------REPARTIR
 				string auxiliar; 
				int cont = 1;
				auxiliar = mazoBarajado[0]; 
				for(int l = 0; l <40; l++){  
					if (l == 39){
						mazoCortado[l] = auxiliar;
					} 
					if (l>=0 && l <39) {
						mazoCortado[l] = mazoBarajado[cont];
					}
					cont ++;
				} 
				for(int i=0; i<3; i++){ 
					cartasPersona[i] = mazoCortado[i];//
					cartasMaquina[i] = mazoCortado[i+3]; 
				} 
//------------------------------------------------------------------------------FIN REPARTIR 
				break;
//			default: cout << "Usted ha ingresado una opción incorrecta";
		} 
	} 
	if (corte > 0 && corte <40){
		corta = corte;
		int cont = 0; 
		for(int k = 0; k<40; k++){
			if (k <totalCartas-corte){
				mazoCortado[k] = mazoBarajado[corta];
				corta++;
			} else { 
				mazoCortado[k] = mazoBarajado[cont];
				cont++;
			} 
		}
//------------------------------------------------------------------------------REPARTIR 
		for(int i=0; i<3; i++){
			numJug = numJug +2;
			numMaq = numMaq +2;
			cartasPersona[i] = mazoCortado[numJug];//
			cartasMaquina[i] = mazoCortado[numMaq];
		} 
//------------------------------------------------------------------------------FIN REPARTIR
		//mostrar(mazoCortado);
	} 
	if (corte >= 40) {
		cout<<"La baraja solo contiene 40 cartas";
		return 0;
	}
	return "a";
}
string repartirCon(string cartasPersona[],string cartasMaquina[], string mazoBarajado[]){//reparte cuando golpeas el mazo y elegis repartir la primer carta(se reparten 3 a cada uno)
	for(int i=0; i<3; i++){ 
		cartasPersona[i] = mazoBarajado[i];//
		cartasMaquina[i] = mazoBarajado[i+3]; 
	} 
	return "a";
}

string repartirSin(string mazoBarajado[], string mazoCortado[],string cartasMaquina[],string cartasPersona[]){
	//reparte cuando golpeas el mazo y elegis no repartir la primer carta(se reparten 3 a cada uno)
	string auxiliar; 
	int cont = 1;
	auxiliar = mazoBarajado[0]; 
	for(int l = 0; l <40; l++){  
		if (l == 39){
			mazoCortado[l] = auxiliar;
		} 
		if (l>=0 && l <39) {
			mazoCortado[l] = mazoBarajado[cont];
		}
		cont ++;
	} 
	for(int i=0; i<3; i++){ 
		cartasPersona[i] = mazoCortado[i]; 
		cartasMaquina[i] = mazoCortado[i+3]; 
	} 
	return "a";
}
string repartir(string cartasPersona[], string cartasMaquina[], string mazoCortado[]){
	for(int i=0; i<3; i++){
		numJug = numJug +2;
		numMaq = numMaq +2;
		cartasPersona[i] = mazoCortado[numJug];//
		cartasMaquina[i] = mazoCortado[numMaq];
	} 
	return "a";
}
