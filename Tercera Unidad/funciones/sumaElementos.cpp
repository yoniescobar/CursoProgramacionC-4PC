#include <iostream>
#include <conio.h>
#define tam 5
using namespace std;

int vec[100];

void pedirDatos();
int calcularSuma(int vec[tam]);



int main(){
	   
	     
	   pedirDatos();
	   
	   cout<<"\n La suma de los valores es: "<<calcularSuma(vec);
	 
	
	getch();
	return 0;
}
void pedirDatos(){
	 cout<<"\n Digite el numero de elementos del vector: ";
	 cin>>tam;
	 
	   for(int i=0;i<tam;i++){
	   	 cout<<i+1<<". Digite un numero: ";
	   	 cin>>vec[i];
	   }
	
}
int calcularSuma(int vec[tam]){

	  
	  int suma=0;
	  
	  for(int i=0;i<tam;i++){
	   	 suma = suma + vec[i];
	   }
	   
	  return suma;
	   
}

