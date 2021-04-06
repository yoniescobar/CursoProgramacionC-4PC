#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	//1. declarar variables
	 int n1,n2,mayor;
	 
	 //2. Ingreso de datos
	 
	 cout<<"\n Ingrese valor 1: ";
	 cin>>n1;  //8
	 cout<<"\n Ingrese valor 2: ";
	 cin>>n2;  //85
	 
	 //3. procesos  

      if(n1==n2){
      	cout<<"\n los numeros son iguales: ";
	  }else if(n1>n2){
	  	cout<<"\n El numero mayor es n1 "<<n1;
	  }else{
	  	cout<<"\n El numero mayor es n2 "<<n2;
	  }
	 


	return 0;
	getch();
}
