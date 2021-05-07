#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int num[]={1,2,3,4,5,6,7,8,9,10};
	
     cout<<"\n Imprimir los datos del vector de forma Ascente: ";
     
	for(int i=0;i<10;i++){
	   cout<<num[i]<<"  ";
	}
	
	cout<<"\n Imprimir los datos del vector de forma Descendente ";
	
	for(int i=9;i>=0;i--){
	   cout<<num[i]<<"  ";
	}
	
	getch();
	return 0;
}
