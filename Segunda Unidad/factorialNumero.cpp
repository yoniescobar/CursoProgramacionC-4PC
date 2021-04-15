#include <iostream>
#include <conio.h>

 using namespace std;
 
 int main(){
 	
 	//1. Declarar variables
 	 int numero,factorial=0;
 	 
 	 //2. Ingreso de datos
 	 cout<<"\n Ingrese un numero entero positivo: ";
 	 cin>>numero; //6
 	 
 	 //3. Proceso
 	   for(int i=1;i<=numero;i++){
 	   	   factorial = factorial * i;
		}
 	
 	  //4. salida
 	   cout<<"\n El factorial del numero es: "<<factorial;
 	  
 	return 0;
 	getch();
 }
