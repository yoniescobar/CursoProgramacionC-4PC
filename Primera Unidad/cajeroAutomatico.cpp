#include <iostream>
#include <conio.h>


using namespace std;

int main(){
	
	//1. declaracion de variables
 
	  int opcion = 0;
	  float monto,saldo=1000;
	  
	  //2. Ingreso de datos
	  
	  cout<<"\n === Bienvenido a su Cajero 5B ===";
	  cout<<"\n 1. Depositar ";
	  cout<<"\n 2. Retirar ";
	  cout<<"\n 3. Salir";
	  cout<<"\n\n Ingrese una opcion:";
	  cin>>opcion;  //1
	  
	  //3. proceso
	  
	  switch(opcion){
	  	case 1:
	  		cout<<"\n Cuanto desea Depositar Q. ";
	  		cin>>monto; 
	  		 saldo+=monto;  //saldo = saldo + monto;
            cout<<"\n Saldo Disponible Q. "<<saldo;
	  		break;
	    case 2:
			cout<<"\n Cuanto desea Retirar Q. ";
	  		cin>>monto; //1800
	  		
			if(saldo>monto) {
				saldo = saldo - monto;
				cout<<"\n Saldo Disponible Q. "<<saldo;
			}else{
				cout<<"Saldo Insuficiente..";
			} 
			break;
		 case 3:
		     cout<<"\n hasta pronto ...!";
			 break;
	    default : 
		           cout<<"\n Seleciona un opcion valida...";			
	  }
	  
	

	getch();
	return 0;
	
}
