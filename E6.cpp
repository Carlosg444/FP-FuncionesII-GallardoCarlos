#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
	string R;
	int Yo, Programa;
	Yo=0;
	Programa=0;
	while (true){
		cout<<"Piedra, papel o tijeras?"<<endl;
		cin>>R;
		srand(time(0));
		int numeroAleatorio= rand()%3+1;
		switch (numeroAleatorio){
			case 1:
				cout<<"Piedra"<<endl;
				if(R=="Papel"||R=="papel"){
					Yo++;
				}else if(R=="Tijeras"||R=="tijeras"){
					Programa++;
				}
				break;
			case 2:
				cout<<"Papel"<<endl;
				if(R=="Piedra"||R=="piedra"){
					Programa++;
				}else if(R=="Tijeras"||R=="tijeras"){
					Yo++;
				}
				break;
			case 3:
				cout<<"Tijeras"<<endl;
				if(R=="Piedra"||R=="piedra"){
					Yo++;
				}else if(R=="Papel"||R=="papel"){
					Programa++;
				}
				break;
		}
		cout<<"-----CONTADOR-----"<<endl;
		cout<<"Tu= "<<Yo<<" - "<<"Programa= "<<Programa<<endl;
		if (Yo==2){
			cout<<"Ganaste"<<endl;
			break;
		}
		if (Programa==2){
			cout<<"Perdiste"<<endl;
			break;
		}	
	}
}
