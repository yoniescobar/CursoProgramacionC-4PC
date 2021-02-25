#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//1. declaración de variable
	int n1;
	
	//2. ingreso de datos
	cout<<"\n Ingrese un numero Entero: ";
	cin>>n1;
	
	//3. proceso
	   
	   if(n1%2==0){
	   	cout<<"\n El numero "<<n1<<" Es par";
	   }else{
	   	 cout<<"\n El numero "<<n1<<" Es Impar";
	   }
	
	
	getch();
	return 0;
	
}
