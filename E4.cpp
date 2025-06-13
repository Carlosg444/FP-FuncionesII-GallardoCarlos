#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int D, a, b, c;
	double r1, r2, r11, r21;
	cout<<"Inserte a, b y c: "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	D=pow(b,2)-(4*a*c);
	if (D>0){
		r1=(-b+sqrt(D))/(2.0*a);
		r2=(-b-sqrt(D))/(2.0*a);
		cout<<"C.S.={"<<r1<<", "<<r2<<"}"<<endl;
	}else if (D==0){
		r1=(-b+sqrt(D))/(2.0*a);
		cout<<"C.S.={"<<r1<<"}";
	}else {
		r1=(-b)/(2.0*a);
		r11=(sqrt((4*a*c)-pow(b,2)))/(2.0*a);
		r2=(-b)/(2.0*a);
		r21=(sqrt((4*a*c)-pow(b,2)))/(2.0*a);
		cout<<"C.S.={"<<r1<<"+"<<r11<<"i"<<", "<<r2<<"-"<<r21<<"i"<<"}";
	}
}
