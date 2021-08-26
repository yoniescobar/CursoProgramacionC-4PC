//que muestre la cadena si tiene 10 o mas, cosa contraria que no muestre nada en pantalla
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	 char password[30];
	 int longitud=0;
	 
	 cout<<"\n Digite un Password: ";
	 gets(password);
	 
	 
	  longitud = strlen(password);
	  
	  if(longitud>=10){
	  	cout<<"\n Password valido ";
	  }else{
	  	cout<<"Usa 8 caracteres como minimo para la contraseña";
	  }

	
	
	getch();
	return 0;
}

