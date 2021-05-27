//Llenar  una matriz de 3 x 2  y mostrarlo en la pantalla

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	
	int matrizA[100][100],suma=0;
	int fila,col;
	
	cout<<"\n Ingrese fila de la Matriz: ";
	cin>>fila;
	cout<<"\n Ingrese columna de la Matriz: ";
	cin>>col;

	//llenando la matriz
	cout<<"\n Ingrese los datos para la Matriz de "<<fila<<" X "<<col<<": "<<endl<<endl;
	
	for(int i=0;i<fila;i++){ //recorre las filas;
		for(int j=0;j<col;j++){ //recorre las columnas
		   cout<<"\nIngrese el valor en la Matriz  en Pos["<<i<<"]["<<j<<"]: ";
		   cin>>matrizA[i][j];
		   
		}
	}
	
	//suma de los valores de la matriz
	//pares
	for(int i=0;i<fila;i++){ //recorre las filas;
		for(int j=0;j<col;j++){ //recorre las columnas
		  suma = suma + matrizA[i][j];
		   
		}
	}
	

	//mostrar la matriz A
	cout<<"\n\n Mostrando los valores de la Matriz: "<<endl;
	for(int i=0;i<fila;i++){ //recorre las filas;
		for(int j=0;j<col;j++){ //recorre las columnas
		   cout<<"\t"<<matrizA[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n La suma de los valores de la matriz es: "<<suma;
	
	
	
	return 0;	
	getch();

}
