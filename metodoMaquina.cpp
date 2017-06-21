#include <iostream>
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
			cout<<"\nRANGO:"<<cartaMelegido<<"."; //imprime el rango de la carta 1 de la maquina
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<"."; //imprime la carta jugada de la maquina
			cartaM[0]=0;
			return true;
			//se le asigna el valor de cero al rango de la carta numero 1, para saber cuando la maquina jugo esa carta y 
			//que no pueda ser utilizada en el futuro
		}else if(cartaJ<cartaM[1]){
			cartaMelegido=cartaM[1];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return true;
		}else if(cartaJ<cartaM[2]){
			cartaMelegido=cartaM[2];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return true;
		}else {					
			if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
				if(cartaM[0]<cartaM[1]&&cartaM[0]<cartaM[2]){
					cartaMelegido=cartaM[0];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
					cartaM[0]=0;
					return false;
				}else if(cartaM[1]<cartaM[0]&&cartaM[1]<cartaM[2]){
					cartaMelegido=cartaM[1];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return false;
				}else {//if(cartaM[2]<cartaM[1]&&cartaM[2]<cartaM[0])
					cartaMelegido=cartaM[2];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return false;
				}
			}else{
				if(cartaM[0]==0){
					if(cartaM[1]<cartaM[2]){
						cartaMelegido=cartaM[1];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return false;
					}else{
						cartaMelegido=cartaM[2]; 
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return false;
					} 
				}else if(cartaM[1]==0){
					if(cartaM[0]<cartaM[2]){
						cartaMelegido=cartaM[0];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return false;
					}else{
						cartaMelegido=cartaM[2];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return false;
					}
				}else { //if(cartaM[2]==0){
					if(cartaM[1]<cartaM[0]){
						cartaMelegido=cartaM[1];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						return false;
					}else{
						cartaMelegido=cartaM[0];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return false;
					}
				} 
			}
		}
		break;
	case 1: //El objetivo de la maquina es empatar, en el caso de que no pueda lograrlo, va a jugar la carta mas baja
		if(cartaJ==cartaM[0]){
			cartaMelegido=cartaM[0];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
			cartaM[0]=0;
			return 2;
		}else if(cartaJ==cartaM[1]){
			cartaMelegido=cartaM[1];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return 2;
		}else if(cartaJ==cartaM[2]){
			cartaMelegido=cartaM[2];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return 2; //empate
		}else {						
			if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
				if(cartaM[0]<=cartaM[1]&&cartaM[0]<=cartaM[2]){
					cartaMelegido=cartaM[0];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
					cartaM[0]=0;
					return 3;
				}else if(cartaM[1]<=cartaM[0]&&cartaM[1]<=cartaM[2]){
					cartaMelegido=cartaM[1];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return 3;
				}else{// if(cartaM[2]>cartaM[1]&&cartaM[2]>cartaM[0]){
					cartaMelegido=cartaM[2];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return 3;
				}
			}else{
				if(cartaM[0]==0){
					if(cartaM[1]>cartaM[2]){
						cartaMelegido=cartaM[1];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return 3;
					}else{
						cartaMelegido=cartaM[2];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return 3;
					}
				} else if(cartaM[1]==0){
					if(cartaM[0]>cartaM[2]){
						cartaMelegido=cartaM[0];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 3;
					}else{
						cartaMelegido=cartaM[2];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;
						return 3;
					}
				}else{//if(cartaM[2]==0){
					if(cartaM[1]>cartaM[0]){
						cartaMelegido=cartaM[1];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
						cartaM[1]=0;
						return 3;
					}else{
						cartaMelegido=cartaM[0];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 3;
					}
				} 
			}
		} 
		return cartaM[0]; 
		break;
	case 2: //El objetivo de la maquina es perder, caso contrario va a ganar
		if(cartaJ>cartaM[0]&&cartaM[0]>0){
			cartaMelegido=cartaM[0];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
			cartaM[0]=0;
			return 3; //pierde
		}else if(cartaJ>cartaM[1]&&cartaM[1]>0){
			cartaMelegido=cartaM[1];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return 3;//pierde
		}else if(cartaJ>cartaM[2]&&cartaM[2]>0){
			cartaMelegido=cartaM[2];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return 3;//pierde
		}else {
			if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
				if(cartaM[0]<cartaM[1]&&cartaM[0]<cartaM[2]){
					cartaMelegido=cartaM[0];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
					cartaM[0]=0;
					return 1;//ganar
				}else if(cartaM[1]<cartaM[0]&&cartaM[1]<cartaM[2]){
					cartaMelegido=cartaM[1];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return 1;//ganar
				}else{// if(cartaM[2]>cartaM[1]&&cartaM[2]>cartaM[0]){
					cartaMelegido=cartaM[2];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return 1; //ganar
				}
			} else { 
				if(cartaM[1]==0){
					if(cartaM[0]<cartaM[2]&&cartaM[0]>0){
						cartaMelegido=cartaM[0];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 1;//ganar
					}else if(cartaM[2]>0){
						cartaMelegido=cartaM[2];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;//ganar
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
							cout<<"\nRANGO"<<cartaMelegido<<".";
							cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
							cartaM[1]=0;
							return 1;//ganar
						}else if(cartaM[0]>0){
							cartaMelegido=cartaM[2];
							cout<<"\nRANGO"<<cartaMelegido<<".";
							cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
							cartaM[0]=0;
							return 1;//ganar
//						}else{cartaMelegido=cartaM[1];
//						cout<<"\nRANGO"<<cartaMelegido<<".";
//						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
//						cartaM[1]=0;}
						}
					}else{
						if(cartaM[0]==0){
							if(cartaM[1]<cartaM[2]&&cartaM[1]>0){
								cartaMelegido=cartaM[1];
								cout<<"\nRANGO"<<cartaMelegido<<".";
								cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
								cartaM[1]=0;
								return 1;//ganar
							}else if(cartaM[2]>0){
								cartaMelegido=cartaM[2];
								cout<<"\ncpu1:"<<cartaMelegido<<"\ncarta elegida:"<<cartasMaquina[2];
								cartaM[2]=0;
								return 1;//ganar
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
	case 3: //idem case 2
		if(cartaJ>cartaM[0]&&cartaM[0]>0){
			cartaMelegido=cartaM[0];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
			cartaM[0]=0;
			return 3; //pierde
		}else if(cartaJ>cartaM[1]&&cartaM[1]>0){
			cartaMelegido=cartaM[1];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
			cartaM[1]=0;
			return 3;//pierde
		}else if(cartaJ>cartaM[2]&&cartaM[2]>0){
			cartaMelegido=cartaM[2];
			cout<<"\nRANGO"<<cartaMelegido<<".";
			cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
			cartaM[2]=0;
			return 3;//pierde
		}else {
			if((cartaM[0]>0)&&(cartaM[1]>0)&&(cartaM[2]>0)){
				if(cartaM[0]<cartaM[1]&&cartaM[0]<cartaM[2]){
					cartaMelegido=cartaM[0];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
					cartaM[0]=0;
					return 1;//ganar
				}else if(cartaM[1]<cartaM[0]&&cartaM[1]<cartaM[2]){
					cartaMelegido=cartaM[1];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
					cartaM[1]=0;
					return 1;//ganar
				}else{// if(cartaM[2]>cartaM[1]&&cartaM[2]>cartaM[0]){
					cartaMelegido=cartaM[2];
					cout<<"\nRANGO"<<cartaMelegido<<".";
					cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
					cartaM[2]=0;
					return 1; //ganar
				}
			} else { 
				if(cartaM[1]==0){
					if(cartaM[0]<cartaM[2]&&cartaM[0]>0){
						cartaMelegido=cartaM[0];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[0]<<".";
						cartaM[0]=0;
						return 1;//ganar
					}else if(cartaM[2]>0){
						cartaMelegido=cartaM[2];
						cout<<"\nRANGO"<<cartaMelegido<<".";
						cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
						cartaM[2]=0;//ganar
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
							cout<<"\nRANGO"<<cartaMelegido<<".";
							cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
							cartaM[1]=0;
							return 1;//ganar
						}else if(cartaM[0]>0){
							cartaMelegido=cartaM[2];
							cout<<"\nRANGO"<<cartaMelegido<<".";
							cout<<"\nCarta elegida:"<<cartasMaquina[2]<<".";
							cartaM[0]=0;
							return 1;//ganar
//						}else{cartaMelegido=cartaM[1];
//						cout<<"\nRANGO"<<cartaMelegido<<".";
//						cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
//						cartaM[1]=0;}
						}
					}else{
						if(cartaM[0]==0){
							if(cartaM[1]<cartaM[2]&&cartaM[1]>0){
								cartaMelegido=cartaM[1];
								cout<<"\nRANGO"<<cartaMelegido<<".";
								cout<<"\nCarta elegida:"<<cartasMaquina[1]<<".";
								cartaM[1]=0;
								return 1;//ganar
							}else if(cartaM[2]>0){
								cartaMelegido=cartaM[2];
								cout<<"\ncpu1:"<<cartaMelegido<<"\ncarta elegida:"<<cartasMaquina[2];
								cartaM[2]=0;
								return 1;//ganar
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
