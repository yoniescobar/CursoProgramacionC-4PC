#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//1. declaración de variable
	 char letra;
	 
	 cout<<"\n Ingrese un letra: ";
	 cin>>letra; 
	 
	 switch(letra){
	 	case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
		case 'u': cout<<"\n La vocal "<<letra<< " es minuscula "<<endl; break;
		case 'A':
	    case 'E':
	    case 'I':
	    case 'O':
		case 'U': cout<<"\n La vocal "<<letra<< " es Mayuscula "<<endl; break;
	    default: cout<<"\n Esta letra : "<<letra<<" No es vocal ";
	 	break;
	 	
	 }
	 
	 
	 
	
	getch();
	return 0;
	
}
