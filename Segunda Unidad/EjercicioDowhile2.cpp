#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	 int nota;
	 
	 do{
	 	cout<<"\n Ingrese una Nota: ";
	 	cin>>nota;
	 	
	 	if(nota>100){
	 		cout<<"La nota no es valida, vuelva a ingresar una nota valida: ";
		 }
	 	if(nota<0){
	 		cout<<"La nota no es valida, vuelva a ingresar una nota valida: ";
		 }else{
		 	cout<<"\n Nota Valida.. ";
		 }
	 	   // 0 -- 100
	 }while(nota<0 || nota>100);


	return 0;
	getch();
}
