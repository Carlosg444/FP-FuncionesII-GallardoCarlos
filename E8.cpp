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
			if (num1==num2==num3){
				monedas=monedas*10;
			}else if (num1==num2||num2==num3||num1==num3){
				monedas=monedas*2;
			}else if (num3-1==num2 & num2-1==num1){
				monedas=monedas*5;
			}else{
				monedas=monedas-rpta;
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


