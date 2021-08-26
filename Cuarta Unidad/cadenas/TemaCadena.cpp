//cadenas
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	  char frase1[30] = "Camaron que se duerme";
	  char frase2[ ] = "se lo lleva la corriente";
	  char letra[1]={'A'};
	  char nombre[30];

     cout<<"\n Digite su nombre completo: ";
     cin.getline(nombre,30,'\n');                   //leer cadena de nombre o sea cuando es char  gets(nombre);   
	 
	 cout<<endl;
	 cout<<nombre<<endl;
	   
	
	
	getch();
	return 0;
}

