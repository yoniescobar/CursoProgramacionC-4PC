// Invertir una cadena -- funcion strrev()
//if(strcmp(cadena1,cadena2)==0)


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	  char cadena1[30];
	  char cadena2[30];
	  
	  cout<<"\n Ingrese una cadena de texto: ";
	  gets(cadena1);  //reconocer
	  
	  strcpy(cadena2,cadena1); //reconocer
	  
	  strrev(cadena2); //leer la palabra al reves
	                 
	  if(strcmp(cadena1,cadena2)==0){
	  	cout<<"\n Es Palindromo ";
	  }else{
	  		cout<<"\n  NO es Palindromo ";
	  }
	  
	  
	
	getch();
	return 0;
}

