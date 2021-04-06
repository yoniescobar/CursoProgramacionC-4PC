#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	 
	  //1. Declaración de Variables
	 int ancho,largo;
	 float costMetro,cantMetrosCuad,costo,costoTotal;
	 
	 //2. Ingreso de datos
	 cout<<"\n Ingrese el Ancho del Terreno: ";
	 cin>>ancho;
	 cout<<"\n Ingrese el Largo del Terreno: ";
	 cin>>largo;
	 cout<<"\n Ingrese el Costo del Terreno Q. ";
	 cin>>costo;
	 
	 //3. Proceso
	 cantMetrosCuad = ancho * largo;
	 costoTotal = cantMetrosCuad *costo;
	 
	 //4. Salida de datos
	 cout<<"\n costo del Terreno es Q. "<<costoTotal; 
	 
	
	return 0;
	getch();
}

