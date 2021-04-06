#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//1. declaración de variable
	int n;
	
	//2. Ingreso de datos
	cout<<"\n Ingrese un numero entero: ";
	cin>>n;
	
	//3. Proceso
	if(n>0){
		cout<<"\n El numero "<<n<<" es Positivo ";
	}else if(n<0){
		cout<<"\n El numero "<<n<<" es Negativo ";
	}else{
		cout<<"\n El numero "<<n<<" es Neutro ";
	}
	
	
	
	getch();
	return 0;
	
}
