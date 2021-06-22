#include <iostream>
#include <conio.h>

using namespace std;
//declarando prototipo de funciones
void pedirDatos();
void multiplicar(float x, float y);

float num1,num2; //variables globales

int main(){
	pedirDatos(); //invocando a la funcion
	multiplicar(num1,num2);
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite 2 numeros: ";
	cin>>num1>>num2;
}

void multiplicar(float x, float y){
	
	float multiplicacion = x * y;
	
	cout<<"\n La multiplicacion es : "<<multiplicacion;
}
