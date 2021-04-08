#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	

	int suma=0;
	int num=1,cantPos=0;
	    
	cout<<".:. Ingrese n numeros .:."<<endl<<endl;	 
	
	while(num!=0){		
      cin>>num;
	  suma = suma+num;
	  
	  if(num>0){
	  	cantPos++;
	  } 
	   
	}
	cout<<"\n El total es: "<<suma;
	cout<<"\n Cantidad Positivos: "<<cantPos;

	return 0;
	getch();
}
