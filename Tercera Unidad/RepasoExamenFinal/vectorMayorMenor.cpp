#include<conio.h>
#include<iostream>

using namespace std;

void llenarVector();
int numMayor(int vec[], int tam);
int numMenor(int vec[], int tam);

int vec[1000];
int mayor=0,menor=999999;
int tam;

int main(){
	
	llenarVector();
    
	return 0;
	getch();
}

void llenarVector(){
	cout<<"Digite el numero del Elementos del Vector: ";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Ingresar el varlor  "<<(i+1)<<": ";
		cin>>vec[i];	
	}

	cout<<"\n El mayor es: "<<numMayor(vec,tam)<<endl;
	cout<<"\n El Menor es: "<<numMenor(vec,tam)<<endl;
}
int numMayor(int vec[], int tam){

	
	for(int i=0;i<tam;i++){
		if(vec[i]>mayor){
			mayor= vec[i];
		}
	}
	
	return mayor;
}

int numMenor(int vec[], int tam){

	
	for(int i=0;i<tam;i++){
		if(vec[i]<menor){
			menor= vec[i];
		}
	}
	
	return menor;
}




