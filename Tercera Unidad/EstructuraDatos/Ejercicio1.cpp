#include <iostream>
#include <conio.h>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
	
}alumno[100];


int main(){
	
	float mayor=0;
	int posMayor=0;
	int n;
	
	cout<<"\n Digite numero de Estudiantes: ";   
	cin>>n;
	
	for(int i=0;i<n;i++){   //Ingresar datos
	     fflush(stdin);
		cout<<"\n Datos del Estudiante "<<i+1<<": ";
		cout<<"\n Nombre: ";         cin.getline(alumno[i].nombre,30,'\n');
		cout<<"\n Edad: ";           cin>>alumno[i].edad;
		cout<<"\n Promedio: ";       cin>>alumno[i].promedio;
		
		if(alumno[i].promedio>mayor){ //calcular el Mayor
		  mayor = alumno[i].promedio;
		  posMayor=i;
		  }			
	
	}
	                        
	
	
	                         //Mostrar Datos del alumnos con promedio mayor
	
	cout<<"--------Dato del Estudiante Mayor Promedio --------";
	cout<<"\n Nombre: "<<alumno[posMayor].nombre<<endl;
	cout<<"\n Edad: "<<alumno[posMayor].edad<<endl;
	cout<<"\n Promedio: "<<alumno[posMayor].promedio<<endl;
	
	
	
	
	
	
	getch();
	return 0;
}
