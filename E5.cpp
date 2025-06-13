#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(int a, int b, int c, double &r1, double &r2, double &r11, double &r21, bool &esReal) {
    int D=pow(b, 2)-4*a*c;
   
    if (D>0) {
        esReal=true;
        r1=(-b+sqrt(D))/(2.0*a);
        r2=(-b-sqrt(D))/(2.0*a);
    } else if (D==0) {
        esReal=true;
        r1=r2=-b/(2.0*a);
    } else {
        esReal=false;
        r1=-b/(2.0*a);
		r11=(sqrt((4*a*c)-pow(b,2)))/(2.0*a);
		r2=-b/(2.0*a);
		r21=(sqrt((4*a*c)-pow(b,2)))/(2.0*a);
    }
}

int main() {
    int a, b, c;
    double r1, r2, r11=0, r21=0;
    bool esReal;

    cout<<"Inserte a, b y c: "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
    calcularRaices(a, b, c, r1, r2, r11, r21, esReal);

    if (esReal) {
        if (r1==r2)
            cout<<"C.S.={"<<r1<<"}"<<endl;
        else
            cout <<"C.S.= {"<<r1<<", "<<r2<<"}"<<endl;
    } else {
        cout <<"C.S.={"<<r1<<" + "<<r11<<"i, "<<r2<<" - "<<r21<<"i}"<< endl;
    }
}
