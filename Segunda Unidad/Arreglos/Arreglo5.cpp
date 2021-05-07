#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
      int notas[2500],n,mayor=0,menor=100;
      
      cout<<"Digite el numero de Notas a Ingresar: ";
      cin>>n;
      
      for(int i=0;i<n;i++){
      	 cout<<(i+1)<<". Digite Nota: ";
      	 cin>>notas[i];
      	 
		   if(notas[i]>mayor){  //hallar la nota mayor
      	 	   mayor = notas[i];
		   }
		   
		   if(notas[i]<menor){
		   	   menor = notas[i];
		   }
  
	  }
      
      cout<<"\n La nota Mayor es: "<<mayor; 
      cout<<"\n La nota Menor es: "<<menor;
	
	getch();
	return 0;
}
