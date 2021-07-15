#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int matriz[100][100], int nfilas, int ncol);

int matriz[100][100],nfilas,ncol;

int main(){
	
    pedirDatos();
	mostrarMatriz(matriz,nfilas,ncol);
	return 0;
	getch();
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de Columnas: ";
	cin>>ncol;
	cout<<endl;
	
	for(int i=0;i<nfilas;i++){ //recorre las filas
		for(int j=0;j<ncol;j++){ //recorre las columnas
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j]; //llenando los datos en las posiciones
		}
	}
	
		
}

void mostrarMatriz(int matriz[100][100], int nfilas, int ncol){
	int suma =0;
	cout<<"\n Mostrar Resultado de la Matriz"<<endl<<endl;
	
	for(int i=0;i<nfilas;i++){ //recorre las filas
		for(int j=0;j<ncol;j++){ //recorre las columnas
		     cout<<matriz[i][j]<< "  ";
		     suma = suma + matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n La suma total es: "<<suma;
	
}

