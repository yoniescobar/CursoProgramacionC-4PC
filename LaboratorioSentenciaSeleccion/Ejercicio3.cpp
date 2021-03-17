#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	//1. Declar variables
	  int tipo,cant,costoUnit,subtotal,totpagar;
	  double desc=0,descAdicional=0;
	  char nombre[30];
	//2. Ingrese de datos
	  cout<<"\n Ingrese nombre del cliente: ";
	  cin>>nombre;
	  cout<<"\n Ingrese Tipo de cliente (1) (2) o (3): ";
	  cin>>tipo;
	  cout<<"\n Ingrese cantidad de libros a Comprar:";
	  cin>>cant; //60
	  cout<<"\n Ingrese Costo de libro:";
	  cin>>costoUnit;
	  
	  //3. Procesos
	  subtotal = cant*costoUnit;
	  
	  switch(tipo){
	  	case 1:
	  		desc = subtotal * 0.30;
	  		break;
	  	case 2:
	  		desc = subtotal * 0.20;
	  		break;
	    case 3:
	  		desc = subtotal * 0.10;
	  		break;
	    default:
	    	desc = 0;
	  	     break;	
	  }
	  //Descuento adicional
	  if(cant>100){   
	  	descAdicional = subtotal * 0.10;
	  	
	  }else if (cant>50){
	  	descAdicional = subtotal * 0.05;
	  }
	  	
	  
	           //3000  - (150+120  )
	  
	  totpagar = subtotal - (desc+descAdicional);
	 
	   //salida de datos
	   cout<<"\n\n ---------- Detalle factura ---------";
	   cout<<"\n cliente: "<<nombre;
	   cout<<"\n Subtotal: "<<subtotal;
	   cout<<"\n Descuento Aplicado segun tipo de Cliente: "<<desc;
	   cout<<"\n Descuento Adicional: "<<descAdicional;
	   cout<<"\n total neto a Pagar: "<<totpagar;
	   

	return 0;
	getch();
}
