#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    
       int cantidad;
       int suma=0;
       
       cout<<"\n Cuantos numeros desea visualizar: ";
       cin>>cantidad;  //6
                       
       for( int x=1; x<=cantidad;x++){
       	  cout<<"\n"<<x;
	      suma=suma + x;
	                        
	   }
	 cout<<"\n\n la suma es: "<<suma; 
	getch();
	return 0;
}
