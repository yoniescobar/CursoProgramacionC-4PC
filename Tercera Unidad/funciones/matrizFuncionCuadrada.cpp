#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int matriz[100][100], int n, int m);
void sumarD1(int matriz[100][100], int n, int m);
void sumarD2(int matriz[100][100], int n, int m);

int matriz[100][100],n,m;

int main(){
	
    pedirDatos();
	mostrarMatriz(matriz,n,m);
	sumarD1(matriz,n,m);
	sumarD2(matriz,n,m);
	return 0;
	getch();
}

void pedirDatos(){
	cout<<"Digite tamanio de matriz Cuadrado: ";
	cin>>n;
	m =n;
	
	cout<<endl;
	
	for(int i=0;i<n;i++){ //recorre las filas
		for(int j=0;j<n;j++){ //recorre las columnas
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j]; //llenando los datos en las posiciones
		}
	}
	
		
}

void mostrarMatriz(int matriz[100][100], int n, int m){
	
		for(int i=0;i<n;i++){ //recorre las filas
		for(int j=0;j<n;j++){ //recorre las columnas
			
			cout<<matriz[i][j]<<"  "; 
		}
		cout<<endl;
	}
	
	
}

void sumarD1(int matriz[100][100], int n, int m){
	 
	 int suma=0;
	  
		for(int i=0;i<n;i++){ //recorre las filas
		for(int j=0;j<n;j++){ //recorre las columnas
		     if(i==j){
		     	suma=suma + matriz[i][j];
			 }
		}
	}
	
	cout<<"\n La suma de la Diagonal 1 es: "<<suma;
}

void sumarD2(int matriz[100][100], int n, int m){
	
	 int suma=0;
	  
		for(int i=0;i<n;i++){ //recorre las filas
		for(int j=0;j<n;j++){ //recorre las columnas
		     if(i+j==n-1){
		     	suma=suma + matriz[i][j];
			 }
		}
	}
	
	cout<<"\n La suma de la Diagonal 2 es: "<<suma;
}


