#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
	string rpta, jugador1, jugador2;
	int S1, S2, J1, J2, dado1, dado2;
	J1=0;
	J2=0;

	srand(time(0));
	cout<<"Inserte el apodo del primer jugador: "<<endl;
	cin>>jugador1;
	cout<<"Inserte el apodo del segundo jugador: "<<endl;
	cin>>jugador2;
	while (true){
		cout<<jugador1<<" desea lanzar el dado?"<<endl;
		cin>>rpta;
		if (rpta=="Si"||rpta=="si"){
			dado1=rand()%6+1;
			cout<<"Salio: "<<dado1<<endl;	
		}
		cout<<jugador2<<" desea lanzar el dado?"<<endl;
		cin>>rpta;
		if (rpta=="Si"||rpta=="si"){
			 dado2=rand()%6+1;
			cout<<"Salio: "<<dado2<<endl;	
		}
		if (dado1>dado2){
			cout<<jugador1<<": gano la ronda"<<endl;
			J1++;
		}else if (dado2>dado1){
			cout<<jugador2<<": gano la ronda"<<endl;
			J2++;
		}else{
			cout<<"Empate"<<endl;
		}
		cout<<"-----CONTADOR-----"<<endl;
		cout<<jugador1<<"= "<<J1<<" - "<<jugador2<<"= "<<J2<<endl;
		cout<<"------------------"<<endl;
		if(J1==3){
			cout<<"El ganador es: "<<jugador1<<endl;
			break;
		}else if (J2==3){
			cout<<"El ganador es: "<<jugador2<<endl;
			break;
		}
	}
}
