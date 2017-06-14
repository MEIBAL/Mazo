#include <cstdlib>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring> 
#include <stdlib.h>
#include <ctime>
#include "metodos.cpp"

using namespace std; 
int jugar(string carta, string mazo[]);

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
	int cartaJ;
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

 int jugar(string carta, string mazo[]){ 
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
	} 
	if (carta == mazo[39]){//12 copa
		return 7;
	} 
} 



