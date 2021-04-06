#include <iostream>
#include <conio.h>
#include <math.h>
#define pi 3.1416 //usar una constante

using namespace std;

int main(){
	
	     //1. declarar variables
	    float volumen,area,radio;
	    
	    //2. ingreso de datos
	    cout<<"\n Ingrese radio de Esfera: ";  
	    cin>>radio;
	    
	    //3. proceso
	    
	    volumen = (4*pi*pow(radio,3))/3; //**volumen
	    area = 4*pi*pow(radio,2);
	    
	    //4. salida
	    cout<<"\n el volumen es : "<<volumen;
	    cout<<"\n el Area es : "<<area;

	getch();
	return 0;
}
