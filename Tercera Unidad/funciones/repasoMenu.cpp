#include <iostream>
#include <conio.h>
using namespace std;
//prototipo de funciones
void ingresarDatos();
void sumarDatos(int x, int y);
void restarDatos(int x, int y);


int num1,num2;

int main(){

      int opcion = 1;
	  
	  do{
	  	   system("cls");
	  	  cout<<"\n M E N U   P R I N C I P A L\n"<<endl;
	  	  cout<<"1. Ingresar Datos: "<<endl;
	  	  cout<<"2. sumar Datos "<<endl;
	  	  cout<<"3. Restar Datos "<<endl;
	  	  cout<<"0. salir"<<endl;
	  	 
		  cout<<"\n Ingrese una Opcion: ";
	  	  cin>>opcion;
	  	  
	  	  switch(opcion){
	  	  	 case 1: system("cls");
	  	  		    ingresarDatos();
	  	  		break;
	  	     case 2: system("cls");
	  	     	    sumarDatos(num1,num2);
	  	     	break;
	  	     case 3: system("cls");
	  	     	    restarDatos(num1,num2);
	  	     	break;	
	  	     	
	  	     case 0:  system("cls");
	  	         cout<<"\n Hasta pronto ....!!";
	  	         getch();
	  	        break; 
	  	        
			  default:   system("cls");
	  	    	 cout<<"\n Opcion no valida...";
	  	    	 getch();
			}
	  	
	  }while(opcion!=0);	
	
	getch();
	return 0; 
}

void ingresarDatos(){
	cout<<"\n Digite 2 numeros: ";
	cin>>num1>>num2;
	getch();
}
void sumarDatos(int x, int y){
	int suma = x + y;
	cout<<"la sumatoria es: "<<suma;
	getch();
}

void restarDatos(int x, int y){
	int resta = x - y;
	cout<<"la resta es: "<<resta;
	getch();
}

