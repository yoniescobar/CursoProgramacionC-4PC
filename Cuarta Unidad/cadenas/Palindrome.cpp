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
	  gets(cadena1);  //oso
	  
	  strcpy(cadena2,cadena1);
	  strrev(cadena2); //oso
	                 
	  if(strcmp(cadena1,cadena2)==0){
	  	cout<<"\n\nLa cadena ingresada es Palindrome ";
	  }else{
	  		cout<<"\n\nLa cadena ingresada NOO es Palindrome ";
	  }
	  
	  
	
	getch();
	return 0;
}

