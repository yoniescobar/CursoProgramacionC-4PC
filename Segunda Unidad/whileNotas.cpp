#include <iostream>
#include <conio.h>

 using namespace std;
 
 int main(){
 	
 	//1. declarar variables
 	int nota,opcion=1;
	 
	
	 while(opcion!=0){
	 	cout<<"\n Ingrese una Nota: ";  //2. ingreso
	 	cin>>nota;
	 	
	 	if(nota>=0 && nota<=100){
	 		cout<<"\n la Nota es Valida: ";
	 		cout<<"\n ¿Desea continuar presione  1. continuar   0. salir: ";
	 		cin>>opcion; //1
		 }else{
		 	cout<<"\n la Nota No es Valida: ";
	 		cout<<"\n ¿Desea continuar presione  1. continuar   0. salir: ";
	 		cin>>opcion; //0
	 		cout<<"\n Gracias por utilizar mi Software ";
		 }
	 	
	 } 
 	
 	
 	return 0;
 	getch();
 }
