#include <conio.h>
#include <iostream>
using namespace std;

void areaRectangulo();
void areaTriangulo();
void areaCirculo();

 int base,altura,radio;
 float area;

int main(){
	
	   int opcion=1;	

	  do{    system("cls");
	         cout<<"\n 	M E N U  P R I N C I P A L"<<endl;
			 cout<<"\n 1. Calcular Area Rectangulo"<<endl;
			 cout<<"\n 2. Calcular Area Triangulo"<<endl;
			 cout<<"\n 3. Calcular Area Circulo"<<endl;
			 cout<<"\n 4. Salir"<<endl;
			 
			 cout<<"\n Ingrese una Opcion Valida: "<<endl;
			 cin>>opcion;
			 
			 switch(opcion){
			 	case 1: areaRectangulo(); break;
			 	//case 2: areaTriangulo(); break;
			 	//case 3: areaCirculo(); break;
			 	
			 	default: system("cls");
			 		cout<<"\n Opcion No Valida";	
			 }	  	  
	  	
	  }while(opcion!=4);
	
	
	getch();
	return 0;
}
void areaRectangulo(){
	system("cls");
	cout<<"\n Calculo de Area Rectangulo"<<endl;
	cout<<"\n Ingrese la Base: ";
	cin>>base;
	cout<<"\n Ingrese la Atura: ";
	cin>>altura;
	area = base*altura;
	cout<<"\n Area del Rectangulo es: "<<area;
	getch();
}

