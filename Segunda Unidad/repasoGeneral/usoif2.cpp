#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"\n Ingrese un numero Entero: ";
	cin>>numero; //-8
	
	if(numero>0){
		cout<<numero<<"  es Positivo";
		        
	}else if(numero<0){
		
		cout<<numero<<" es Negativo";
	}else{
		cout<<numero<<" es Neutro";
	}
	
	
	getch();
	return 0;
}



