#include <iostream>
#include <conio.h>


using namespace std;

//prototipo de funciones
void ingreasarDatos();
void funcionPotencia(int base,int exponente);

int base, exponente; //variable global

int main(){
	   
	  
	  //1. ingresar datos
	   
	  ingreasarDatos();
	  //2.  
	  funcionPotencia(base,exponente);
	getch();
	return 0;
}
void ingreasarDatos(){
	  
	 cout<<"Ingrese Base: ";
	 cin>>base;
	 cout<<"Ingrese Exponente:";
	 cin>>exponente;
	
}


void funcionPotencia(int base,int exponente){
	int resultado=1; //variable local
	
	for(int i=1;i<=exponente;i++){
		resultado = resultado * base;
	}
	
		cout<<"\nEl resultado de la base "<<base<<" y el exponente "<<exponente<<" es: "<<resultado;
  
     
}
