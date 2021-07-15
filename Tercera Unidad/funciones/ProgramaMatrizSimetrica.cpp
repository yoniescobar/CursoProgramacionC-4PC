#include <iostream>
#include <conio.h>
using namespace std;

void cargarMatriz();
void comprobarMatriz(int m[100][100],int col, int fila);

int matriz[100][100],col,fila;

int main(){
	
	cargarMatriz();
	comprobarMatriz(matriz,col,fila);
	return 0;
	getch();
}

void cargarMatriz(){
	
	cout<<"\n Ingrese numero de filas y columnas de la Matriz: ";
	cin>>col>>fila;
     
   
    for(int i=0;i<fila;i++){ //recorrer filas
    	for(int j=0;j<col;j++){
    		cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
    		cin>>matriz[i][j];
		}
	}
	
}
void comprobarMatriz(int m[100][100],int col, int fila){
	
	int cont=0;
	
	if(fila == col){
		for(int i=0;i<fila;i++){ //recorrer filas
    	   for(int j=0;j<col;j++){//recorre columnas
    		  if(m[i][j]==m[j][i])  //comprobando si los valores son los mismos en filas y columnas
				cont++;	
		}
	 }
	}
	
	 if(cont==fila*col){
	 	cout<<"\n La Matriz es Simetrica";
	 }else{
	 	cout<<"\n La Matriz no es Simetrica";
	 }
	 
	
}

