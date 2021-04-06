#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
	
	  float a,b,aux;   //1. declarar variables
	  
	  cout<<"\nIngrese valor para a: ";   //2. ingreso de datos
	  cin>>a;  //80
	  cout<<"\nIngrese valor para b: ";
	  cin>>b;  //75
	  
	  //3. proceso
       aux=a; //80
       a=b; //75
       b=aux; //80
       
       cout<<"\n Valor a: "<<a;
       cout<<"\n Valor b: "<<b;
	 
	getch();	
	return 0;
}
