#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int  numDia;
     
     cout<<"\n Ingrese un numero del 1 al 7: ";
     cin>>numDia; //7
	 
	 switch(numDia){
	 	case 1:
	 	    cout<<"\n El dia "<<numDia<< " es Lunes ";
			break;
		case 2:
	 	    cout<<"\n El dia "<<numDia<< " es Martes ";
			break;
		case 3:
	 	    cout<<"\n El dia "<<numDia<< " es  Miercoles ";
			break;
		case 4:
	 	    cout<<"\n El dia "<<numDia<< " es  Jueves ";
			break;
		case 5:
	 	    cout<<"\n El dia "<<numDia<< " es  Viernes";
			break;
		case 6:
	 	    cout<<"\n El dia "<<numDia<< " es  Sabado ";
			break;
		case 7:
	 	    cout<<"\n El dia "<<numDia<< " es  Domingo ";
			break;
		default: 
			cout<<"\n El numero ingresado no es valido"; 
			cout<<"\n debe ingresar un numero entre 1 al 7";
		 break;

	 }  
     
     
	
	getch();
	return 0;
	
}
