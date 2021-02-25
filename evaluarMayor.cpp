#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//1. declaración de variable
	int n1,n2;
	
	//2. Ingreso de datos
	cout<<"\n Ingrese un numero 1: ";
	cin>>n1;
	cout<<"\n Ingrese un numero 2: ";
	cin>>n2;
	
	//proceso
	if(n1>n2){
		cout<<"\n El numero mayor es==>: "<<n1;
	}else if(n2>n1){
		cout<<"\n El numero mayor es ***: "<<n2;
	}else{
		cout<<"\n Ambos numeros son iguales : "<<n2;
	}
	
	
	getch();
	return 0;
	
}
