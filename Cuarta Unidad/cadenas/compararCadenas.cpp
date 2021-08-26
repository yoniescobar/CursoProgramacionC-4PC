//Comparar Cadenas - Funcion strcmp();
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
          
          char password1[] = "pedro123";
          char usuario1[]="peter@gmail.com";
          
          
          char password2[30];
		  char usuario2[30];
		  
		  cout<<"Ingrese su usuario: ";
		  gets(usuario2);
		  cout<<"Ingrese su Password: ";
		  gets(password2);
		  
		  if((strcmp(usuario1,usuario2)==0) && (strcmp(password1,password2)==0)){
		  	cout<<"\n\n----Bienvenido al Sistema CEI";	
		  }else{
		  	cout<<"\n\n ----El usuario o Password es incorrecto vuela ingresar nuevamente!!!!";
		  }
		  
		  
	
	getch();
	return 0;
}

