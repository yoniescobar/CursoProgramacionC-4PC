#include <math.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	float n,suma=0;
	int i=1;
	
	cout<<"\n Ingrese un numero entero: ";
	cin>>n;
	
	
	
	while(i<=n){
	    suma = suma + (1/pow(i,3));
	    i++;
	}
		
	
	cout<<" el valor de la suma es: "<<suma;
	
	return 0;
	getch();
}
