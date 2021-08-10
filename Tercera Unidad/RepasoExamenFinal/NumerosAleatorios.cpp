#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
void cargarAleatorios();
void mostrarNumeros(int vec[],int tam);
void sumaVector(int vec[],int tam);
int tam,vec[1000];

int main(){
	
    cargarAleatorios();
    mostrarNumeros(vec,tam);
    sumaVector(vec,tam);
	
	return 0;
	getch();
}

void cargarAleatorios(){
	int numero;
	
	cout<<"\n Digite el tamanio del vector: ";
	cin>>tam;
	
	srand(time(NULL)); //generar un numero aleatorio
	for(int i=0;i<tam;i++){
		numero = 1 + rand()%(100);
		vec[i] = numero;
		
	}


}

void mostrarNumeros(int vec[],int tam){
	
	for(int i=0;i<tam;i++){
		
		cout<<i+1<<". ---> "<<vec[i]<<endl;
	}
}
void sumaVector(int vec[],int tam){
	int suma =0;
	
	for(int i=0;i<tam;i++){
		suma = suma + vec[i]; 
	}
	
     cout<<"\n La suma del vector es: "<<suma;
}

