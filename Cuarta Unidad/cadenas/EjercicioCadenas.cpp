// Pedir al usuario una cadena de carecteres, alamacenarla en un arreglo y copiar su contenido
// hacia otro arreglo
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase[30],frase2[30];
	
	cout<<"\n Digite un frase: ";
	cin.getline(frase,30,'\n');
	
	strcpy(frase2,frase); //Estoy guardando la frase que digito el usuario a la frase 2
	
	cout<<frase2;
	  
	
	getch();
	return 0;
}

