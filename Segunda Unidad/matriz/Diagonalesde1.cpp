#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n,matriz[100][100];
	
	//algoritmo para llenar la primera diagonal con 1
	
		for(int i=0;i<n;i++){ //recorre las filas
	 	  for(int j=0;j<n;j++){//recorre las columnas
	 	   
			if(i==j){
				matriz[i][j]=1;
		 	}else{
				matriz[i][j]=0;
			}
		 }
		 
	 cout<<"\n Mostrar los valores de la Matriz: "<<endl;
	 
	 for(int i=0;i<n;i++){ //recorre las filas
	 	for(int j=0;j<n;j++){//recorre las columnas
	 	      cout<<"\t"<<matriz[i][j]<<"  ";
		 }
		 cout<<"\n";
	 }
	return 0;
	getch();
}
