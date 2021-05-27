#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[20];
	int longitud = 0;
	
	cout<<" Ingrese palabra: ";
	gets(palabra);
	
	longitud = strlen(palabra);
	
  	cout<<"\n Resultado ";
   cout<<"\n Palabra inversa: ";
		for(int i=longitud;i>=0;i--){
		cout<<palabra[i];
	}
	

	for(int i=0;i<longitud;i++ ){
	      if(palabra[i]=='a'){
	      	 palabra[i]='@';
		  }
	}
	
	
	cout<<"\n Replazar por @: ";
	for(int i=0;i<longitud;i++){
		cout<<palabra[i];
	}

 cout<<"\n Longitud de la palabra: "<<longitud;
	
	
	
	return 0;
	getch();
}
