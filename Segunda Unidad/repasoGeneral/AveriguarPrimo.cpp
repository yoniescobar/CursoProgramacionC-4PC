#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int numero;
	int contador=0;
	
	
	cout<<"\n Ingrese un numero: ";
	cin>>numero;
	     
	for(int i=1;i<=numero;i++){
		  if(numero%i==0){
		  	 contador++;
		  }
		  
	}

	
	if(contador==2){
		cout<<"\n El numero "<<numero<<" Es primo";
	}else{
			cout<<"\n El numero "<<numero<<" No Es primo";
	}
	
	
	getch();
	return 0;
}
