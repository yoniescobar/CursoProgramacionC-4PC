#include <iostream>
#include <conio.h>
#include <math.h> //usar funciones matematicas sqrt, pow, abs...

using namespace std; 

int main(){
	
	   float b,e,res;
	
	   cout<<"\n Ingrese un Base: ";
	   cin>>b;
	   cout<<"\n Ingrese un Exponente: ";
	   cin>>e;
	   
	   
	   res = pow(b,e);
	   
	   cout<<"\n Resultado: "<<res; 
	  
	
	
	getch();	
	return 0;
}
