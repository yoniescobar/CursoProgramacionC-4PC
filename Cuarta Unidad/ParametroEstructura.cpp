//Paso de parametros de tipo estructura

#include <iostream>
#include <conio.h>
using namespace std;

//definiendo una estructura de tipo Persona
struct Persona{
	char nombre[30];
	int edad;
}p1;

void pedirDatos();
void mostrarDatos(Persona p ); //int, float char nobmre, double precio  Persona p

int main(){
	pedirDatos();
	mostrarDatos(p1);
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"\n Ingrese su Nombre: ";  
	cin.getline(p1.nombre,30,'\n');
	cout<<"\n Digite Edad: ";
	cin>>p1.edad;
}

void mostrarDatos(Persona p){
	cout<<"\n\n LOS DATOS INGRESADOS SON:\n ";
	cout<<"\n Nombre: "<<p.nombre;
	cout<<"\n Edad: "<<p.edad;
	
}
