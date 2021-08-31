//Convertir una cadena a numros ----> funcion atoi() y atof()   atoi "i" integer Entero   -----  atof "f" float decimal
    
#include<iostream>
#include<conio.h>
#include<stdlib.h> //stdlib ser utiliza para cadenas

using namespace std;

int main(){
	
	char cad[] = "123";
	float numero;  // variable para almacenar el valor flotante
	
	numero = atof(cad);        //convierte la cadena a un numero entero
	
	numero+=0.25;
	
	cout<<numero<<endl;

	getch();
	return 0;
}

