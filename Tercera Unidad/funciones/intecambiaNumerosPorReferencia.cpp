#include <iostream>
#include <conio.h>

using namespace std;

void intercambiar(int& , int& );

int main(){
	
	   int n1=10, n2=15;
	   
	   cout<<"\n El valor de n1: "<<n1<<endl;
       cout<<"\n El valor de n2: "<<n2<<endl;
	   
	   intercambiar(n1,n2);
	   
	   cout<<"\n\n El nuevo valor n1:  "<<n1<<endl;
	   cout<<"\n El nuevo valor n2:  "<<n2<<endl;
	
	getch();
	return 0;
}

void intercambiar(int& x, int& y){
	               
	int aux;
	
	aux = x;  
	x = y; //15 
	y = aux; //10
	
}

