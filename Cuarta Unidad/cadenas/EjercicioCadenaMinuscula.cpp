//Solicitar su nombre al usuario en mayuscula, si su nombre inicia con A, convertir su nombre a minuscula
//y mostrarlo caso contrario no convertilo


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	   char nombre[20];
	   cout<<"\n Ingrese su nombre en MAYUSCULA: ";
	   gets(nombre); //AMALIA
	   
	   if(strncmp(nombre,"A",1)==0){
	   	 //amalia
	   	 strlwr(nombre);
	   	 cout<<"\n"<<nombre<<endl;
	   }else{
	   	  cout<<"\nTu nombre no comienza con la letra A"<<endl;
	   }
	
	
	
	
	getch();
	return 0;
}

