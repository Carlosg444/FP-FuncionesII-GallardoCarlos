#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	int n, max;
	cout<<"Cuantos numeros aleatorios te genero?"<<endl;
	cin>>n;
	cout<<"Cual quieres que sea el numero maximo?"<<endl;
	cin>>max;
	for (int i=1; i<=n;i++){
		int numeroMagico=rand()%(max+1);
		cout<< numeroMagico<<",";
	}
}
