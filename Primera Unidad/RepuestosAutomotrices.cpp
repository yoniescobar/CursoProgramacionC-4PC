#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	//1. declarar variables
	float venta,descuento,totalPago;
	
	cout<<"\n==========================================";
	cout<<"\n= .:. REPUESTOS AUTOMOTRICES GONZALEZ .:.=";
	cout<<"\n==========================================";
	
	//2. entrada
	cout<<"\n\n Ingrese el Monto de Venta Q. ";
	cin>>venta;
	
	//3. proceso -- calaculos
	if(venta<500){
		descuento = 0;
	}else if(venta<=1000){
		descuento = venta * 0.05;
	}else if(venta<=7000){
		descuento = venta *0.11;
	}else if(venta<15000){
		descuento = venta * 0.18;
	}else{
		descuento = venta * 0.25;
	}
	
	totalPago = venta-descuento;
	
		//4. salida
	cout<<"\n El descuento es: "<<descuento;
	cout<<"\n El total a pagar es: "<<totalPago;

	getch();
	return 0;
}
