#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int monedas=100;
int main (){
	while (true){
		string R;
		int num1, num2, num3, rpta;
		srand(time(0));
		num1=rand()%5+1;
		num2=rand()%5+1;
		num3=rand()%5+1;
		cout<<"Cuanto desea apostar (1-10 monedas)?"<<endl;
		cin>>rpta;
		if (rpta<=10){
			cout<<"---------"<<endl;
			cout<<num1<<" | "<<num2<<" | "<<num3<<endl;
			cout<<"---------"<<endl;
			monedas=monedas-rpta;
			if (num1==num2 & num2==num3){
				rpta=rpta*10;
				monedas=monedas+rpta;
			}else if (num1==num2||num2==num3||num1==num3){
				rpta=rpta*2;
				monedas=monedas+rpta;
			}else if ((num3-1==num2 & num2-1==num1)||(num3+1==num2 & num2+1==num1)){
				rpta=rpta*5;
				monedas=monedas+rpta;
			}
			
		}else {
			cout<<"Debe estar entre 1-10 moneda"<<endl;
		}
		cout<<"Numero de monedas actuales: "<<monedas<<endl;
		cout<<"Desea continuar apostando?"<<endl;
		cin>>R;
		if(R=="no"||R=="No"){
			break;
		}
		if (monedas==0){
			break;
		}
	}
}


