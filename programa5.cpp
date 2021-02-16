#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
	
	  float a,b,c,d,res;
	  
	  cout<<"\nIngrese valor para a: ";
	  cin>>a;
	  cout<<"\nIngrese valor para b: ";
	  cin>>b;
	  cout<<"\nIngrese valor para c: ";
	  cin>>c;
	  cout<<"\nIngrese valor para d: ";
	  cin>>d;
	  
	  res= a + b/(c-d);
	  
	  cout<<"\n La respuesta es: "<<res;
	
	getch();	
	return 0;
}
