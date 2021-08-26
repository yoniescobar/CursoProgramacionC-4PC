// funcion de concatenar    Saludos  Yoni Escobar Bienvenid@ a c++
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char saludo[] =   " Saludos ";
	char bienvenido[]= " Bienvenido a C++ ";  
	char nombre[30];
	
    cout<<"\n Ingrese Nombre Completo: ";
    gets(nombre);
    
    strcat(saludo,nombre); //"Saludos Yoni Escobar"
    strcat(saludo,bienvenido); //"Saludos Yoni Escobar  Bienvenido a C++"
     
	cout<<saludo;

	  
	
	getch();
	return 0;
}

