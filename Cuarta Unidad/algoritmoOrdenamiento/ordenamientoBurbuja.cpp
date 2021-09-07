//Metodo de Ordenamiento de Burbuja

#include<iostream>
#include<conio.h>
#include<time.h>
#include<sdlib.h>

using namespace std;

int main(){                                         //aux=
		int numeros[]={4,1,2,3,5};     //{ 1 ,2  ,3 ,4  , 5};
		int i,j,aux;
		
		for(i=0;i<5;i++){ // recorre el vector
		  for(j=0;j<5;j++){
		 	if(numeros[j]>numeros[j+1]){
		     	aux = numeros[j];
		     	numeros[j]= numeros[j+1];
		     	numeros[j+1] = aux;
			 }
		  }     
		}
		
		
		cout<<"\n Ordenar Numeros de Forma Ascendente"<<endl;
		for(i=0;i<5;i++){
			cout<<numeros[i]<<endl;
		}
		
		cout<<"\n Ordenar Numeros de Forma Descendente"<<endl;
		for(i=4;i>=0;i--){
			cout<<numeros[i]<<endl;
		}
		
	getch();
	return 0;
}
