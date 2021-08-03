#include <iostream>
#include <conio.h>

using namespace std;

struct coleccion_CD{
	 char titulo[30]; 
	 char artista[25];
	 int numCanciones;
	 float precio;
};


int main(){
	
	  struct coleccion_CD CD1,CD2,CD3;


	cout<<"\n Datos del Primer Disco: "<<endl;
	
	cout<<"Titulo de Disco 1:";
	cin.getline(CD1.titulo,30,'\n');
	cout<<"Nombre del Artista 1:";
	cin.getline(CD1.artista,25,'\n');
	cout<<"Numero de Canciones 1:";
	cin>>CD1.numCanciones;
	cout<<"Precio 1:";
	cin>>CD1.precio;
	
	
	cout<<"\n\n************ Datos del Segundo Disco: *************"<<endl;
	
	cout<<"Titulo de Disco 2:";
	cin.ignore();   //<-------Limpiamos el Buffer de tal manera que el programa pueda continuar fflush(stdin);
	cin.getline(CD2.titulo,30,'\n');
	cout<<"Nombre del Artista 2:";
	cin.getline(CD2.artista,25,'\n');
	cout<<"Numero de Canciones 2:";
	cin>>CD2.numCanciones;
	cout<<"Precio 2:";
	cin>>CD2.precio;
	
	
	
	
	
	return 0;


}


