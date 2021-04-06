#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	//1. declarar variables
	 float a,b,c,r1,r2;
	 
	 //2. Ingreso de datos
	 cout<<"\n Ingrese el valor para a: ";
	 cin>>a;
	 cout<<"\n Ingrese el valor para b: ";
	 cin>>b;
	 cout<<"\n Ingrese el valor para c: ";
	 cin>>c;
	 
	 //3. Proceso
	 r1 = (-b+sqrt(pow(b,2)-(4*a*c))) / (2*a); 
     r2 = (-b-sqrt(pow(b,2)-(4*a*c))) / (2*a);
	
	//4. salida
	 cout<<"\n Respuesta para r1: "<<r1;
	 cout<<"\n Respuesta para r2: "<<r2;
	 
	
	getch();
	return 0;
}
