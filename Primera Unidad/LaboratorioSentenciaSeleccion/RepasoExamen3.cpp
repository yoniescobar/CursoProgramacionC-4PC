#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
           float monto,descuento,totalPagar; 
           char  tipoC;  
           
           cout<<"\n Ingrese el monto: ";
           cin>>monto;
           cout<<"\n Ingrese el Tipo de Cliente (A-B-C): ";
           cin>>tipoC;
           
           if(tipoC=='A' || tipoC=='a' ){
           	   descuento = monto * 0.10; 
		   }else if(tipoC=='B' || tipoC=='b'){
		   	   descuento = monto * 0.15;
		   }else if(tipoC=='C' || tipoC=='c'){
		   	   descuento = monto * 0.20;
		   }
		   
		   totalPagar = monto - descuento;
		   
		   //Salid
		   cout<<"\n Total a Pagar es: "<<totalPagar;
		   
           
           
           
	
	getch();
	return 0;
}


