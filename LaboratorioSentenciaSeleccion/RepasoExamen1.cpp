#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	     float sueldo,horasTrabajadas,totalSueldo;
	     
	     cout<<"\n Ingrese horas Trabajadas: ";
	     cin>>horasTrabajadas; //10
	     
	          //10<40
	     if(horasTrabajadas<40){
	     	totalSueldo = horasTrabajadas *20;
		 }else{
		 	totalSueldo = horasTrabajadas * 25;
		 }
		 
		 cout<<"\n Tu sueldo es: "<<totalSueldo;
	
	
	
	
	getch();
	return 0;
}
