#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n,matriz[100][100],sumaD1=0,sumaD2=0;
	
	cout<<"\n Ingrese el tamanio de la Matriz cuadrada: ";
	cin>>n;  //3
    

	 //llenamos la Matriz
	 
	 for(int i=0;i<n;i++){ //recorre las filas
	 	for(int j=0;j<n;j++){//recorre las columnas
	 	  cout<<"\n Valor en la posicion ["<<i<<"]["<<j<<"]: ";
	 	  cin>>matriz[i][j];
		 }
	 }
	
	 cout<<"\n Mostrar los valores de la Matriz: "<<endl;
	 for(int i=0;i<n;i++){ //recorre las filas
	 	for(int j=0;j<n;j++){//recorre las columnas
	 	      cout<<"\t"<<matriz[i][j]<<"  ";
		 }
		 cout<<"\n";
	 }
	
     //***** algoritmo para sumar la primera Diagonal ********//
	  for(int i=0;i<n;i++){ //recorre las filas
	 	for(int j=0;j<n;j++){//recorre las columnas
	 	     
	 	    if(i==j){
	 	    	sumaD1=sumaD1 + matriz[i][j];
			 }
		 }
		
	 }
	
	//***** algoritmo para sumar la Segunda Diagonal ********//
	  for(int i=0;i<n;i++){ //recorre las filas
	 	for(int j=0;j<n;j++){//recorre las columnas
	 	     
	 	    if(i+j==n-1){
	 	    	sumaD2 = sumaD2 + matriz[i][j];
			 }
		 }
		
	 }
	
	cout<<"\n Suma de la Primera Diagonal: "<<sumaD1;
	cout<<"\n Suma de la Segunda Diagonal: "<<sumaD2;
	return 0;
	getch();
}
