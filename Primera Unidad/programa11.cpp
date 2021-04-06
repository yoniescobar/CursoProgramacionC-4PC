//res = sqrt(x)/(pow(y,2)-1)
#include <iostream>
#include <conio.h>
#include <math.h> //usar funciones matematicas sqrt, pow, abs...

using namespace std; 

int main(){
	
	  float x,y,res;
	  
	  cout<<"\n Ingrese valor de x: ";
	  cin>>x;
	  cout<<"\n Ingrese valor de y: ";
	  cin>>y;
	  
	  res = sqrt(x)/(pow(y,2)-1);
	  
	  cout.precision(3);
	  cout<<"\n El resultado es: "<<res;
	  
	
	getch();	
	return 0;
}
