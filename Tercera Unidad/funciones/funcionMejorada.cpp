#include <conio.h>
#include <iostream>

using namespace std;

void ingresarDatos();
void sumar(int x, int y);
void restar(int x, int y);

int n1,n2;

int main(){
	
	
	ingresarDatos();
	sumar(n1,n2);
	restar(n1,n2);
	
	
	return 0;
}

void ingresarDatos(){
	cout<<"\n Valor numero 1: ";
	cin>>n1;
	cout<<"\n Valor numero 2: ";
	cin>>n2;
	
	getch();
}

void sumar(int x, int y){
	int resultado;
	 resultado = n1 + n2;
	cout<<"\n La suma es: "<<resultado;
	
}

void restar(int x, int y){
	int resultado;
	 resultado = n1 - n2;
	cout<<"\n La Restar es: "<<resultado;
	
}


