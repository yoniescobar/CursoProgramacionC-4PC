#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	//1. Declar variables
	float ancho,largo,costomtCuad,desc,subtotal;
	float totmtsCuad,precioTotal;
	
	//2. Ingreso de datos
	cout<<"Ingrese Largo del Terreno: ";
	cin>>largo;  
	cout<<"Ingrese Ancho del Terreno: ";
	cin>>ancho; 
	cout<<"Ingrese Precio por metro Cuadrado: ";
	cin>>costomtCuad; 
	
	//3. Proceso -- calculos
	  totmtsCuad = largo * ancho;
	  subtotal   =  totmtsCuad * costomtCuad;
	
	  if(totmtsCuad>1000){
	  	desc = subtotal * 0.25;
	  }else if(totmtsCuad>500){
	  	desc = subtotal * 0.17;
	  }else if(totmtsCuad>400){
	  	desc = subtotal * 0.10;
	  }else{
	  	desc = 0;
	  }
	  
	  precioTotal = subtotal - desc;
	  
	  //4. salida
	  cout<<"\n\n   ------ Resultados -------";
	  cout<<"\n Total de metros cuadrados: "<<totmtsCuad;
	  cout<<"\n Costo por metro cuadrado: "<<costomtCuad;
	  cout<<"\n Costo de Terreno sin Descuento: "<<subtotal;
	  cout<<"\n Descuento: "<<desc;
	  cout<<"\n Total a Pagar: "<< precioTotal;
	  

	
	
	return 0;
	getch();
}


