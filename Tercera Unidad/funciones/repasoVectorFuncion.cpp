#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void mostrarPares(int par[],int tam);
void mostrarPares2(int par[],int conteoPares);

int vec[100],tam,j=0;
int par[100],impar[100];
int conteoPares=0,conteoImpares=0;

int main(){
	
	pedirDatos();
    mostrarPares(vec,tam);
    mostrarPares2(par,conteoPares);
    
	return 0;
	getch();
}

void pedirDatos(){

   cout<<"\n Digite el tamanio del Vector: ";
   cin>>tam;
   
       for(int i=0;i<tam;i++){
       	cout<<i+1<<". Digite un numero: ";  
       	cin>>vec[i];
       	
       	if(vec[i]%2==0){
       		conteoPares++;
		   }else{
		   	conteoImpares++;
		   }
	   }
	   
	   par[conteoPares];
	   impar[conteoImpares];
	   

}
void mostrarPares(int vec[],int tam){

	  conteoPares=0;
	  
	   for(int i=0;i<tam;i++){
	   		if(par[i]%2==0){
	   			 par[conteoPares]=vec[i];
	   			 conteoPares++;
			   }else{
			   	 par[conteoImpares]=vec[i];
	   			 conteoImpares++;
			   }
	   }
}
void mostrarPares2(int par[],int conteoPares){
	 
	  conteoPares=0;
	   
	  for(int i=0;i<conteoPares;i++){
	  	 cout<<"\n "<<par[i];
	  }
}


