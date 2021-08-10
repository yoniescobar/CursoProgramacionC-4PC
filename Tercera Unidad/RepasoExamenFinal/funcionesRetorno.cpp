#include <iostream>
#include <conio.h>

using namespace std;

void ingresarDatos();
int calcularAreaTriangulo(int b, int h);

int  b, h, areaT;

int main(){
	
	ingresarDatos();
	
	return 0;
	getch();
}
void ingresarDatos(){
	cout<<"\n Ingrese Base del Triangulo: ";
	cin>>b;
	cout<<"\n Ingrese Altura del Triangulo: ";
	cin>>h;
	calcularAreaTriangulo(b,h);
	
    cout<<"\n El area del Triangulo es: "<<calcularAreaTriangulo(b,h);
}
int calcularAreaTriangulo(int b, int h){
	
	int area = (b*h)/2;
	
	return area;
}
