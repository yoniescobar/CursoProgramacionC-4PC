#include <conio.h>
#include <iostream>

using namespace std;

int main(){
   
    int opcion=-1;
    int numero,suma=0,contador=0,media;
    
    cout<<"\n Ingrese un numero : ";
    cin>>numero; 
          
    while(numero!=opcion){
    	contador++; 
    	suma = suma + numero;
    	cout<<"\n Ingrese un numero : ";
        cin>>numero; //-1
	}
	
	if(contador>0){
		media=suma/contador;
		cout<<"\n El promedio es: "<<media; 
	}else{
		cout<<"No hay numeros ingresados validos..";
	}
   

  return 0;
  getch();	
}
