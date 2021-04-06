#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//1. declaracion de variables
	  int edad;
	  
	  //2. ingresar datos
	  cout<<"\n Ingrese una  Edad: ";
	  cin>>edad; //11
	  
	  //3. proceso  del 18 al 25 esta en rango
	  if((edad>=18) &&  (edad<=25)){
	  	cout<<"\n Esta en el rango de [18-25]";
	  }else{
	  	cout<<"\n Su edad no esta en el rango establecido";
	  }

	getch();
	return 0;
	
}
	
	
	
