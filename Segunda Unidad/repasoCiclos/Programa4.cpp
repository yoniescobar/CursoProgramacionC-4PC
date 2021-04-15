#include <conio.h>
#include <iostream>
#include <time.h> //generar un numero aleatorio.
#include <stdlib.h> //generar un numero aleatorio.

using namespace std;

int main(){
    int dato,numero,contador=0;
    
    srand(time(NULL)); //genera un numero aleatorio
    dato = 1 + rand()%(100);  //50
    
    do{
    	 cout<<"\n Digite un numero: ";
    	 cin>>numero; //15
    	    
    	 if(numero>dato){
    	 	cout<<"\n Digite un numero Menor..\n";
		 }
		 if(numero<dato){
		 	cout<<"\n Digite un numero Mayor..\n";
		 }
    	 
    	 contador++;
    	    //50!=50
	}while(numero!=dato);
   
    cout<<"\n Felicidades Ganaste!...en el intento "<<contador;
    
  return 0;
  getch();	
}
