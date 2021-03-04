#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//1. declaracion de variables
	  int edad;
	  
	  //2. ingresar datos
	  cout<<"\n Ingrese una  Edad: ";
	  cin>>edad; //11
	  
	  //3. proceso  del 18 al 25 esta en rango   ||       
	  if(edad<7){
	  	cout<<"\n No puede participar por tu edad: ";
	  }else if((edad>=7) &&  (edad<=10)){
	  	cout<<"\n Categoria A";
	  }else if((edad>=11) &&  (edad<=14)){
	  	cout<<"\n Categoria B";
	  }else if((edad>=15) && (edad<=19)){
	  	cout<<"\n Categoria C";
	  }else{
	  	cout<<"\n Categoria Libre";
	  }

	getch();
	return 0;
	
}
	

