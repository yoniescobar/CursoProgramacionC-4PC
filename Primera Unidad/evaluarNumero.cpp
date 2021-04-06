#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	 int numero;
	 
	 cout<<"\n Ingrese un numero entero: ";
	 cin>>numero;
	 
	 
	 if(numero==0){
	 	cout<<"\n El numero "<<numero<<" Es Neutro";
	 }else if(numero<0){
	 	cout<<"\n El numero "<<numero<<" Es Negativo: ";
	 }else{
	 	cout<<"\n El numero "<<numero<<" Es Positivo: ";
	 }
	 
	
	return 0;
	getch();
}
