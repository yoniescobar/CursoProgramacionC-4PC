#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	//1. Declarar variables
	int cantidad,categoria;
	float precioU,subtotal,precioTotal,descuento;
	
	//2. Ingreso de datos
	cout<<"\n Ingrese cantidad de Producto: ";
	cin>>cantidad;
	cout<<"\n Ingrese Costo unitario de Producto: ";
	cin>>precioU;
	cout<<"\n Ingrese Categoria (1)  (2) o (3): ";
	cin>>categoria;
	
	//procesos
	subtotal = cantidad * precioU;
	
	if(categoria ==1){
       descuento = subtotal * 0.10;
	}
	
	if(categoria ==2){
       descuento = subtotal * 0.05;
	}
	
	if(categoria ==3){
       descuento = subtotal * 0.30;
	}
	
	precioTotal = subtotal - descuento;
	
	cout<<"\n Total a Pagar es: "<<precioTotal;
	
	
	
	return 0;
	getch();
}
