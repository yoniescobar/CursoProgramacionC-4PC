#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
void cargarMatrizAleatorio();
void mostrarMatrizA(int matrizA[1000][1000],int,int);

int matrizA[1000][1000],fila,col;

int main(){
	cargarMatrizAleatorio();
	mostrarMatrizA(matrizA,fila,col);
	
	getch();
}

void cargarMatrizAleatorio(){
	
	cout<<"\n Ingrese el tamanio filas: ";
	cin>>fila;
	cout<<"\n Ingrese el tamanio columnas: ";
	cin>>col;
	
	srand(time(NULL)); //generar un numero aleatorio
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
		   matrizA[i][j]= 1+ rand()%(100);	
		}
	}	
}
void mostrarMatrizA(int matrizA[1000][1000],int nfila,int nfcol){
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
		   cout<<matrizA[i][j]<<"\t ";	
	     	}
	     	cout<<"\n";
    	}	
  }
	








