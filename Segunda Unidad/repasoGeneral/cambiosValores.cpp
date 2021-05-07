#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int a,b,aux=0;
	
	cout<<"\n Ingrese valor para a: ";
	cin>>a;
	cout<<"\n Ingrese valor para b: ";
	cin>>b;
	
	
	//proceso
	  aux = a;
	    a = b;
	    b = aux;
	    
    //salida
    
    cout<<"\n El valor de a: "<<a;
    cout<<"\n El valor de b: "<<b;
	
	
	
	
	
	getch();
	return 0;
	
}
