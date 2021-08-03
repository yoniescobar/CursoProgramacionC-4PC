#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion{
	char direccion[35];
	char departamento[31];
	char municipio[30];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[1000];


int main(){
	
	 int n,posMayor=0,salarioMayor=0;
	  
	 cout<<"\n Cuantos Empleados desea Ingresar: ";
	 cin>>n;
	 
	 cout<<"\n\n Ingrese la Infomracion \n";
	 
	   for(int i=0;i<n;i++){
	   		fflush(stdin); //Vaciar el buffer para seguir ingresando datos.
	   		cout<<i+1<<" - Ingrese Nombre: ";
	   		cin.getline(empleados[i].nombre,20,'\n');
	   		cout<<i+1<<" - Ingrese su Direccion: ";
	   		cin.getline(empleados[i].dir_empleado.direccion,35,'\n');
	   		cout<<i+1<<" - Ingrese su Departamento: ";
	   		cin.getline(empleados[i].dir_empleado.departamento,31,'\n');
	   		cout<<i+1<<" - Ingrese su Municipio: ";
	   		cin.getline(empleados[i].dir_empleado.municipio,30,'\n');
	   		cout<<i+1<<" - Ingrese Salario: ";
	   		cin>>empleados[i].salario;
 		    cout<<endl<<endl;
    
	   }
	   
	   cout<<"\n\n Mostrando la Informacion de Empleados\n";
	
	    for(int i=0;i<n;i++){
	    	cout<<"\n Datos del Empleado No. "<<i+1<<endl;
			cout<<" Nombre: "<<empleados[i].nombre<<endl;
			cout<<" Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
			cout<<" Departamento: "<<empleados[i].dir_empleado.departamento<<endl;
			cout<<" Municipio: "<<empleados[i].dir_empleado.municipio<<endl;
			cout<<" Salario: "<<empleados[i].salario<<endl;	
				
			if(empleados[i].salario>salarioMayor){
				salarioMayor = empleados[i].salario;
 		    	posMayor=i;
			 }	
	    	
		}
	
		 cout<<"\n\n---------------- Empleado con el Mayor Salario ---------\n";
		 
			cout<<" Nombre: "<<empleados[posMayor].nombre<<endl;
			cout<<" Direccion: "<<empleados[posMayor].dir_empleado.direccion<<endl;
			cout<<" Departamento: "<<empleados[posMayor].dir_empleado.departamento<<endl;
			cout<<" Municipio: "<<empleados[posMayor].dir_empleado.municipio<<endl;
			cout<<" Salario: "<<empleados[posMayor].salario<<endl;	
	return 0;
}
