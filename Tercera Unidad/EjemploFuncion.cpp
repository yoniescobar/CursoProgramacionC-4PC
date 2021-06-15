#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de funcion
float numMayor(int x, int y);
int numMenor(int x, int y);

int main(){
	//Principal 
	 int n1,n2;
	 float mayor;
	 int menor;
	 
	 cout<<"Ingrese Numero 1: ";
	 cin>>n1;
	 cout<<"Ingrese Numero 2: ";
	 cin>>n2;
	 
	 mayor = numMayor(n1,n2);
	 menor = numMenor(n1,n2);
	 
	 cout<<"\n El Mayor de los 2 numeros es: "<<mayor<<endl;
	 cout<<"\n El Menor de los 2 numeros es: "<<menor<<endl;
	 
	getch();
	return 0;
}

float numMayor(int x, int y){ //Realiza la tarea solicitada.
   int numMayor;
   
   if(x>y){
   		numMayor = x;
   }else{
   		numMayo = y;
   }

	return numMayor;	
}

int numMenor(int x, int y){ //Realiza la tarea solicitada.
   int numMenor;
   
   if(x<y){
   	 numMenor = x;
   }else{
   	 numMenor = y;
   }
   
   return numMenor;
   	
}

