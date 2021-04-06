#include <iostream>
#include <conio.h>

/*
 1. Qué es un Algoritmo
 2. El algoritmo debe de cumplir 3 cosas
 3. Qué es una variable
 

*/

using namespace std;

int main(){
	
	int numero;
	
	cout<<"\n Digite un numero entero: ";
	cin>>numero;
	//!= diferente  
	
	if(numero%2!=0){
		cout<<"\n Impar ";
	}else{
		cout<<"\n Par";
	}
	
	
	return 0;
	getch();
	
}

