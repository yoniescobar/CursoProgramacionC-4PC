#include <conio.h>
#include <iostream>

using namespace std;

int main(){

			int inicio = 2;
			int limite = 100;
			int contador=0;
			
			for(int i=inicio;i<=limite;i++){
				
				for(int j=1;j<=i;j++){
					 
					 if(i%j==0){
					   contador++;	
					 }
				}
				
				if(contador==2){
					cout<<i<<endl;
				}
				contador=0;
			}

	getch();
	return 0;
}
