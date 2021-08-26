//Copiar el contenido de cadena a otra  funcion rtrcpy();
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	   char nombre[] = "Yoni";
	   char Copynombre[30];
	
	    strcpy(Copynombre,nombre);
	    
	    cout<<Copynombre<<endl;
	
	getch();
	return 0;
}

