// funcion de concatenar 
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase1[] = "Guatemala es ";
	char frase2[]= " el Pais de la Eterna Primavera";
	char frase3[50];
	
	strcpy(frase3,frase1); // frase3 = "Guatemal es "
	
	strcat(frase3,frase2); // frase3 = "Guatemal es el Pais de la Eterna Primavera "
	
	cout<<frase3<<endl;
	

	  
	
	getch();
	return 0;
}

