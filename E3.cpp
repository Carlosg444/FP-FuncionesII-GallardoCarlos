#include <iostream>
#include <cmath>
using namespace std;
int main (){
double C1, C2;
string i;
cout<<"Inserte el primer cateto: "<<endl;
cin>>C1;
cout<<"Inserte el segundo cateto: "<<endl;
cin>>C2;
cout<<"La hipotenusa es "<<sqrt(pow(C1,2)+pow(C2,2))<<endl;
}
