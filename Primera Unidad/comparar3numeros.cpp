#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int n1,n2,n3,mayor,menor;
	
	cout<<"\n Ingrese 3 numero enteros: ";
	cin>>n1>>n2>>n3;
	
	 //calcular el mayor
	 if((n1>n2) && (n1>n3)){
	 	mayor = n1;
	 }else if((n2>n1)&& (n2>n3)){
	 	mayor = n2;
	 }else{
	 	mayor = n3;
	 }
	 
	 //calcular el menor     y  &&    o  ||
	 if((n1<n2) && (n1<n3)){
	 	menor = n1;
	 }else if((n2<n1)&& (n2<n3)){
	 	menor = n2;
	 }else{
	 	menor = n3;
	 }
	 
	 
	 cout<<"\n El mayor de los 3 numeros es: "<<mayor;
	 cout<<"\n El menor de los 3 numeros es: "<<menor;
	 
	
	
	
	return 0;
	getch();
}
