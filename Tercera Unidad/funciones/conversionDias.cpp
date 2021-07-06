#include <conio.h>
#include <iostream>
using namespace std;

void conversion(int dias,int&,int&,int&);

int main(){
	
	int dias=0,horas=0,min=0,seg=0;
		
	cout<<"\n Ingrese cantidad de dias: ";
	cin>>dias;
	conversion(dias,horas,min,seg);
	
	cout<<"\n Resultados de Conversion de dias: "<<dias;
	cout<<"\n Horas: "<<horas;
    cout<<"\n Minutos: "<<min;
    cout<<"\n Segundo: "<<seg;
	
	
	
	getch();
	return 0;
}
void conversion(int dias,int& horas,int& min,int& seg){
	
	horas = dias*24;
	min = horas * 60;
	seg = min*60;
	
}

