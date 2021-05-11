#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char frase[100];
	int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
	int longitud;
	
	 cout<<"Ingrese la frase: ";
	 gets(frase);  //hola
	
	  longitud = strlen(frase); //cuenta la cantidad de carecteres que ingres
	  
	  cout<<"\n Longitud de la cadena: "<<longitud<<endl;
	   
	  for(int i=0;i<longitud;i++){
	  	   switch(frase[i]){
	  	   	    case 'a': vocal_a++; break; //busca las letras a y suma los que encuente
	  	   	    case 'e': vocal_e++; break;
	  	   	    case 'i': vocal_i++; break;
	  	   	    case 'o': vocal_o++; break;
	  	   	    case 'u': vocal_u++; break;
	  	   	    
			 }
			 
			 
	  }
	  
	  cout<<"\n Voles a: "<<vocal_a;
	  cout<<"\n Voles e: "<<vocal_e;
	  cout<<"\n Voles i: "<<vocal_i;
	  cout<<"\n Voles o: "<<vocal_o;
	  cout<<"\n Voles u: "<<vocal_u;
	
	
	return 0;
	getch();
}
