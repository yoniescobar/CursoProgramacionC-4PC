//Algoritmo  de Ordenamiento por Insercion

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
		int numeros[]={54,12,11,8,100};
	    int i,pos,aux;
	   //------- Ordenamiento de Insercion----- 
	    for(i=0;i<5;i++){
	    	pos = i; //saber la posicion
	    	aux = numeros[i]; //saber el valor que hay en esa posicion
	    	                    //numeroIz
	    	while((pos>0)&&(numeros[pos-1]>aux)){
	    		numeros[pos]=numeros[pos-1];
	    		pos--;
			}
	    	numeros[pos]=aux;
		}
	    
	    //------Mostrar los Datos
	    cout<<"\n Orden Ascendente: ";
	     for(i=0;i<5;i++){
		 	cout<<numeros[i]<<"  ";
		 }
		 
		  //------Mostrar los Datos
	    cout<<"\n Orden Descendente: ";
	     for(i=4;i>=0;i--){
		 	cout<<numeros[i]<<"  ";
		 }
	
	
	
	getch();
	return 0;
}
