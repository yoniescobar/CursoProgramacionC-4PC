//Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir si son iguales o no


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	  char palabra1[20],palabra2[20];
	  
	  cout<<"Ingrese una palabra: ";
	  gets(palabra1);
	  cout<<"Ingrese otra palabra: ";
	  cin.getline(palabra2,20,'\n');
	  
	    strupr(palabra1); //convertir las palabras ingresadas por el usuario a MAYUSCULAS	
	   strupr(palabra2);
	
	  if(strcmp(palabra1,palabra2)==0){
	  	cout<<"\n Ambas palabras son Iguales";
	  }else{
	  	cout<<"\n Las palabras son distintas!!";
	  }
	
	
	getch();
	return 0;
}

