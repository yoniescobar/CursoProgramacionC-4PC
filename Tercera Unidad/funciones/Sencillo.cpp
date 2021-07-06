#include <iostream>
#include <conio.h>

using namespace std;

void cambio(int valor,int&,int&,int&,int&,int&,int&);

int main(){

	int valor,cien,cincuenta,veinte,diez,cinco,uno;
	
	cout<<"\n Digite la Cantidad de Billetes: ";
	cin>>valor;
	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	 
	cout<<"\n Cantidad de Billetes a Entregar como Cambio: "<<endl;
	cout<<"\n Cien: "<<cien<<endl; 
	cout<<"\n Cincuenta: "<<cincuenta<<endl; 
	cout<<"\n Veinte: "<<veinte<<endl; 
	cout<<"\n Diez: "<<diez<<endl; 
	cout<<"\n Cinco: "<<cinco<<endl; 
	cout<<"\n Uno: "<<uno<<endl;  
	   
   
   getch();
   return 0;
}

void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = valor/100;
	valor %=100;
	cincuenta = valor/50;
	valor %=50;
	veinte = valor/20;
	valor %=20;
	diez = valor/10;
	valor %=10;
	cinco = valor/5;
	valor %=5;
	uno = valor%5;
	
}
