#include<iostream>
#include<conio.h>
#include<string.h> // Cadenas

using namespace std;

int main(){
	
	char nombreCliente[50];
	int tipoCliente,cantidadLibros;
    float costoUnitario,subtotal,descuento,desAdicional,totalPagar;
		
	cout<<"\n Ingrese Nombre del Cliente: ";
	gets(nombreCliente); 
	cout<<"\n Tipo Cliente (1- 2 -3): ";
	cin>>tipoCliente;
	cout<<"\n Cantidad de Libros: ";
	cin>>cantidadLibros;
	cout<<"\n Costo  del Libro: ";
	cin>>costoUnitario;
	
    subtotal = cantidadLibros  * costoUnitario;
    
    if(tipoCliente==1){
    	descuento = subtotal * 0.30;
	}else if(tipoCliente==2){
		descuento = subtotal * 0.20;
	}else if(tipoCliente==3){
		descuento = subtotal * 0.10;
	}
	
	//Descuento Adicional
	     
	if(cantidadLibros>100){
		desAdicional = subtotal * 0.10; 
	}else if(cantidadLibros>50){
		desAdicional = subtotal * 0.05; 
	}
	
	
	
	totalPagar = subtotal - (descuento+desAdicional);
	
	cout<<"\n -------- Detalle de Factura --------";
	cout<<"\n Cliente: "<<nombreCliente;
	cout<<"\n Subtotal: "<<subtotal;
	cout<<"\n Descuento: "<<descuento;
	cout<<"\n Descuento Adicional: "<<desAdicional;
	cout<<"\n Total a Pagar: "<<totalPagar;
	
	
    
	
	
	
		
	getch();
	return 0;
}
