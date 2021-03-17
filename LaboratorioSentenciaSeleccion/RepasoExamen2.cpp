#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	    //Desclaracion de Variable
		int nota; 
		//Ingreso de datos
		cout<<"\n Ingrese una nota: ";
	    cin>>nota;
	    
	    //Procesos
	    if(nota>=0 && nota<6){
	    	cout<<"\n F";
		}else if(nota>=6 && nota<7){
			cout<<"\n D";
		}else if(nota>=7 && nota<8){
			cout<<"\n C";
		}else if(nota>=8 && nota<9){
			cout<<"\n B";
		}else if(nota>=9 && nota<=10){
			cout<<"\n A";
		}else{
			cout<<"\n Nota Fuera de Rango";
		}
	    
	    
	    
	    
	
	getch();
	return 0;
}
