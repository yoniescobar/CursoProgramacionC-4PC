#include <iostream>
#include <conio.h>
using namespace std;

struct alumnos{
	char nombre[50];
	char apellido[50];
	int edad;
	float estatura;
	char grado[50];
} A1, A2;


int main(){
	
	cout<<"\n .:. Datos del Alumno 1 .:."<<endl;
	cout<<"Nombres: ";
	cin.getline(A1.nombre,50,'\n');
	cout<<"Apellidos: ";
	cin.getline(A1.apellido,50,'\n');
	cout<<"Edad: ";
	cin>>A1.edad;
	cout<<"Estatura: ";
	cin>>A1.estatura;
	cout<<"Grado: ";
	cin.ignore();   //<-------Limpiamos el Buffer de tal manera que el programa pueda continuar
	cin.getline(A1.grado,50,'\n');
	
	
	cout<<"\n .:. Datos del Alumno 2 .:."<<endl;
	cout<<"Nombres: ";
	cin.getline(A2.nombre,50,'\n');
	cout<<"Apellidos: ";
	cin.getline(A2.apellido,50,'\n');
	cout<<"Edad: ";
	cin>>A2.edad;
	cout<<"Estatura: ";
	cin>>A2.estatura;
	cout<<"Grado: ";
	cin.ignore();   //<-------Limpiamos el Buffer de tal manera que el programa pueda continuar
	cin.getline(A2.grado,50,'\n');
	
	
		
	return 0;


}
