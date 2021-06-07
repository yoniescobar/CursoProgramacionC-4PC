//Mostrar una matriz definida por el usuario con numeros aleatorios

#include <iostream>
#include <conio.h>
#include <time.h> //genera numeros aleatorios
#include <stdlib.h>

using namespace std;

int main(){
	
	int n,numero;
	int vecD1[100];
	
	cout<<"\n Ingrese el Orden de la Matriz Cuadrada: ";
	cin>>n;
	
	int matrizA[n][n];   //definiendo el tamaño de la matriz;
	
	srand(time(NULL)); //generando la semilla
	
	//llenando la matriz
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			numero = 1 + rand()%(100); //genera numeros aleatorio del 1 aal 100
			matrizA[i][j] = numero;
		}
	}
	
	cout<<"\n Mostrando la Matriz de "<<n<<" X "<<n<<endl<<endl;
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"\t "<<matrizA[i][j];
		}
		cout<<"\n";
	}
	
    	//llenar el vecD1 con los valores de la Diagonal 1
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			if(i==j){
				vecD1[i]= matrizA[i][j];
			}
			
		}
	}
	
	 cout<<"\n Mostrando los Datos de la Diagonal 1"<<endl<<endl;
	 
     for(int i=0;i<n;i++){
     	cout<<vecD1[i]<<"  ";
	 }
	 
	

	
	
	return 0;
	getch();
}
