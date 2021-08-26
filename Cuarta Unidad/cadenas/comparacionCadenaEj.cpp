//Ejercicio. Comparar Cadenas - Funcion strcmp();
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
          
          char cadena1[30];
          char cadena2[30];
          
          cout<<"\n Ingrese Cadena 1: ";
          gets(cadena1);
           cout<<"\n Ingrese Cadena 2: ";
          gets(cadena2);
          
          if(strcmp(cadena1,cadena2)==0){
          	cout<<"\n\nAmbas cadenas son Iguales";
          	
		  }else if(strcmp(cadena1,cadena2)>0){
		  	cout<<"La cadena 1: "<<cadena1<<" Es mayor a cadena 2: "<<cadena2;
		  
		  }else{
		  	
		  	cout<<"La cadena 2: "<<cadena2<<" Es mayor a cadena 1: "<<cadena1;
		  }
          
      
	
	getch();
	return 0;
}

