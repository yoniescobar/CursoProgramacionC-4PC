#include <iostream>
#include <conio.h>

using namespace std;

int main(){

     int  numDia;
     
     cout<<"\n Ingrese un numero del 1 al 7: ";
     cin>>numDia;  //1
     
     if(numDia==1){
     	cout<<"\n El dia "<<numDia<<" Es Lunes";
	 }else if(numDia==2){
	 	cout<<"\n El dia "<<numDia<<" Es Martes";
	 }else if(numDia==3){
	 	cout<<"\n El dia "<<numDia<<" Es Miercoles";
	 }else if(numDia==4){
	 	cout<<"\n El dia "<<numDia<<" Es Jueves";
	 }else if(numDia==5){
	 	cout<<"\n El dia "<<numDia<<" Es Viernes";
	 }else if(numDia==6){
	 	cout<<"\n El dia "<<numDia<<" Es Sabado";
	 }else if(numDia==7){
	 	cout<<"\n El dia "<<numDia<<" Es Domingo";
	 }else{
	 	cout<<" El numero Ingresado no es valido";
	 }
     

	getch();
	return 0;
	
}
