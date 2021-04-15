#include <conio.h>
#include <iostream>

using namespace std;

int main(){
    
    // *************for*******************
    cout<<"\n Ciclo For"<<endl;
	for(int i=1;i<=10;i++){
    	cout<<i<<endl;
	}
	cout<<" suma de pares: "<<endl;
    cout<<" suma de impares: "<<endl<<endl;
   
    
    // *************while*******************
    cout<<"\n Ciclo While"<<endl;
    int i=1;
    while(i<=10){
     cout<<i<<endl;	
     i++;
	}
	cout<<" suma de pares: "<<endl;
    cout<<" suma de impares: "<<endl<<endl;
    
    // *************while*******************
    cout<<"\n Ciclo do while"<<endl;
     i=1;
    do{
    	cout<<i<<endl;
    	i++;
	}while(i<=10);
	cout<<" suma de pares: "<<endl;
    cout<<" suma de impares: "<<endl<<endl;
    
    
    
  return 0;
  getch();	
}
