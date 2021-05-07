#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int numeros[]={12,23,33,41,52};
	int suma=0;

	for(int i=0;i<5;i++){
	   suma = suma + numeros[i];	   
	}
	
	cout<<"\n la suma es: "<<suma;
	
	
	
	getch();
	return 0;
}
