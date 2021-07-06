#include <iostream>
#include <conio.h>

using namespace std;

void cuboPorValor(int x);
void cuboPorReferencia(int &x );

int main(){
	
    int n=3;
    
    cout<<"\n El valor original de la variable n es "<<n<<endl;
    cuboPorValor(n);
    cout<<"\n El valor de la variable n despues de acceder a la funcion cuboPorValor es "<<n<<endl;
	cuboPorReferencia(n);
	cout<<"\n El valor de la variable n despues de acceder a la funcion cuboPorReferebcua es "<<n<<endl;
	
	getch();
	return 0;
}

void cuboPorValor(int x){
	x = x*x*x;
	cout<<"x * x * x "<<x<<endl;
}
void cuboPorReferencia(int &x ){
	x = x *x*x;
	cout<<"x * x * x "<<x<<endl;
	
	
}

