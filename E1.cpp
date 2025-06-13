#include <iostream>
#include <cmath>
using namespace std;
int main (){
	long double pi, r, A;
	pi=M_PI;
	cout<<"Inserte el radio del circulo"<<endl;
	cin>>r;
	A=pi*pow(r,2);
	cout<<"El area es: "<<A<<endl;
}
