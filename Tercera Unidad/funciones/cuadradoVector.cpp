#include <iostream>
#include <conio.h>
using namespace std;

void calcularCuadrado(int vec[],int);
void mostrarDatos(int vec[],int);
void sumaValores(int vec[], int);

int main(){
	 const int TAM = 5;
	 
	 int vec[TAM]= {1,2,3,4,5};
	 
	 calcularCuadrado(vec,TAM);
	 mostrarDatos(vec,TAM);
	 sumaValores(vec, TAM);
	 
	getch();
	return 0;
}
void calcularCuadrado(int vec[],int tam){
	
	for(int i=0;i<tam;i++ ){
		vec[i]= vec[i] * vec[i];
	}
	
}
void mostrarDatos(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<"  ";
	}
}
void sumaValores(int vec[], int tam){
	int suma=0;
	
	for(int i=0;i<tam;i++){
		suma = suma + vec[i];
	}
	
	cout<<"\n la suma de los valores del vector es: "<<suma;
}




