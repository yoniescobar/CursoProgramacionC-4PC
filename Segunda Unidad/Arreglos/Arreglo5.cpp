#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
      int notas[15],n,mayor=0,menor=100;
      int posMayor=0,posMenor=0;
      
      cout<<"Digite el numero de Notas a Ingresar: ";
      cin>>n; 
      
      for(int i=0;i<n;i++){
      	 cout<<(i+1)<<". Digite Nota: ";
      	 cin>>notas[i];
      	 
		   if(notas[i]>mayor){  //hallar la nota mayor
      	 	   mayor = notas[i];
      	 	    posMayor= i;  //almacena el indice que tiene la nota mayor
		   }
		   
		   if(notas[i]<menor){
		   	   menor = notas[i];
		   	   posMenor=i; //almacena el indice que tiene la nota menor
		   }
  
	  }
      
      cout<<"\n La nota Mayor es: "<<mayor<<" Posicion ["<<(posMayor+1)<<"]"; 
      cout<<"\n La nota Menor es: "<<menor<<" Posicion ["<<(posMenor+1)<<"]";
	
	getch();
	return 0;
}
