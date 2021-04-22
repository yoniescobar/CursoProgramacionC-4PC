#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	int cantAlumnos, nota,promedio,contAprobados=0,contNoAprobados=0,min=100,max=0;
	int suma=0;
	char curso[40],nombre[40];
	
	cout<<"\n Digite Cantidad de Alumnos: ";
	cin>>cantAlumnos; //8
	
      for(int i=1;i<=cantAlumnos;i++){  //Controla Datos de alumnos
      cout<<"\n-----------------------------------------------";
      cout<<"\n Datos del Alumno: "<<i;
      cout<<"\nIngrese Nombre: ";
      cin.ignore();
      gets(nombre);
      cout<<"\nIngrese Curso: ";
      gets(curso);
            suma =0;
      	 for(int j=1;j<=4;j++){ //controla las 4 notas   80 + 90 + 75+ 89 = 334 /4 =85 
      	 	 cout<<"\nUnidad "<<j<<": ";                // 74 + 65 + 89 +100 = 338 /4 = 84
      	 	 cin>>nota;
      	 	 suma = suma+nota;  
		   }
      		promedio = suma/4;
			cout<<"\n Promedio : "<<promedio; 
			if(promedio>=60){
				cout<<"\n Aprobado ";
				contAprobados++;
			}else{
				cout<<"\n No Aprobado ";
				contNoAprobados++;
			}
			    
			if(promedio>max){ //sacar nota mayor
				max = promedio; 
			}
			       
			if(promedio<min){
				min = promedio;//sacar nota menor 
			}	
      	 
	  }
	
	cout<<"\n ------------- Estadistica Final ---------"<<endl;
	cout<<"\n Total de Alumnos: "<<cantAlumnos;
	cout<<"\n Alumnos Aprobados: "<<contAprobados;
	cout<<"\n Alumnos No Aprobados: "<<contNoAprobados;
	cout<<"\n Nota Mayor: "<<max;
	cout<<"\n Nota Menor: "<<min;
	
	getch();
	return 0;
}
