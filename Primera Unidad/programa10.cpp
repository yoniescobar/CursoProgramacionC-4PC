#include <iostream>
#include <conio.h>
#include <math.h> //usar funciones matematicas sqrt, pow, abs...

using namespace std; 

int main(){
	
	  float a,b,c;
	  
	  cout<<"\n Ingrese el valor del cateto a: ";
	  cin>>a;
	  cout<<"\n Ingrese el valor del cateto b: ";
	  cin>>b;
	  
	  //proceso
	  
	  c = sqrt(pow(a,2)+pow(b,2));
	  
	  //salida
	  cout.precision(2);
	  cout<<"\n El valor de la Hipotenusa es: "<<c;
	  
	  
	
	getch();	
	return 0;
}
