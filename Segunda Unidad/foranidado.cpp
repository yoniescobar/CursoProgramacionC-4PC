#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
		int cantAlumnos,b1,b2,b3,b4,promedio;
		int contAprobados=0,contNoAprobados=0,min=100,max=0;
		char nombre[40],curso[40];
		
		
	      cout<<"\n Digite Cantidad de Alumnos: ";
	      cin>>cantAlumnos;
	      
	      for(int i=1;i<=cantAlumnos;i++){ //for externo
	      cout<<"==============================================";
	      cout<<"\n Datos del Alumno: "<<i;
	      cout<<"\n Ingrese Nombre: ";
		  cin>>nombre;
		  cout<<" Ingrese Curso: ";
		  cin>>curso; 
		  	  
	      	 for(int j=1;j<=1;j++){ //for interno
	      	 	 cout<<"\n\t B1: ";
	      	 	 cin>>b1;
	      	 	 cout<<"\t B2: ";
	      	 	 cin>>b2;
	      	 	 cout<<"\t B3: ";
	      	 	 cin>>b3;
	      	 	 cout<<"\t B4: ";
	      	 	 cin>>b4;
	      	 	 promedio = (b1+b2+b3+b4)/4;
	      	 	 cout<<"\n Promedio: "<<promedio;
	      	 	 if(promedio>=60){ //saber aprobados y no aprobados
	      	 	 	cout<<"\n Aprobado"<<endl;
	      	 	 	contAprobados++; //3
					}else{
					cout<<"\n No Aprobado"<<endl;
					contNoAprobados++;	//2
					}
					   
					if(promedio>max) //saber el prom mayor
					{
						max = promedio; //90
					}
					if(promedio<min) //saber el prom mayor
					{
						min = promedio;
					}
					
			   }
		  }
	
	cout<<"\n ========= Resultados =============";
	cout<<"\n Total de Alumnos: "<<cantAlumnos;
	cout<<"\n Aprobados: "<<contAprobados;
	cout<<"\n No Aprobados: "<<contNoAprobados;
	cout<<"\n Promedio Mayor: "<<max;
	cout<<"\n Promedio Meno: "<<min;
	
	
	
	
	return 0;
	getch();
}
