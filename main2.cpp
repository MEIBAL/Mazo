#include <cstdlib>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring> 
#include <stdlib.h>
#include <ctime>
#include "metodos.cpp"

using namespace std; 

int main(int argc, char *argv[]) { 
	string nombre; 
	string mazo[40] = {"1 espada","2 espada","3 espada","4 espada","5 espada","6 espada","7 espada","10 espada","11 espada","12 espada",
		"1 oro","2 oro","3 oro","4 oro","5 oro","6 oro","7 oro","10 oro","11 oro","12 oro","1 basto","2 basto","3 basto","4 basto","5 basto",
		"6 basto","7 basto","10 basto","11 basto","12 basto","1 copa","2 copa","3 copa","4 copa","5 copa","6 copa","7 copa","10 copa","11 copa",
		"12 copa"};  
	string mazoBarajado[40];
	string mazoCortado[40];
	string cartasPersona[3];
	string cartasMaquina[3];
	int corte = 0;
	int sinCon = 0; 
	int totalCartas = 40;
	int corta=0;
//	cout<<"Ingrese su nombre: ";
//	cin>>nombre;  
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
	cout<<"\n\n";
	cout<<"Cartas Jugador\n";//ver cartas jugador 
	mostrarCartas(cartasPersona);
	cout<<"Cartas Maquina\n";//ver cartas maquina 
	mostrarCartas(cartasMaquina);
	return 0;
} 

 


