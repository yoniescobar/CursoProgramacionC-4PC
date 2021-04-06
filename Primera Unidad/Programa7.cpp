#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
	
	  float n1,n2,n3,n4,prom;
	  
	  cout<<"\n Ingrese n1: ";
	  cin>>n1;
	  cout<<"\n Ingrese n2: ";
	  cin>>n2;
	  cout<<"\n Ingrese n3: ";
	  cin>>n3;
	  cout<<"\n Ingrese n4: ";
	  cin>>n4;
	  
	  //proceso
	  prom = (n1+n2+n3+n4)/4;
	  
	  //salida
	  cout.precision(2);
	  cout<<"\n El promedio final es: "<<prom;
	  
	
	getch();	
	return 0;
}
