//La llamada por referencia copia la dirección del argumento en el parámetro.

#include <iostream>
#include <conio.h>

using namespace std;

void valNuevo(int&, int&);

int main(){
		
	  int num1,num2;
	  
	  cout<<"Digite 2 numeros: ";
	  cin>>num1>>num2;  //4 5
	  
	  valNuevo(num1,num2);

	  cout<<"\n El nuevo valor del Primer numero es: "<<num1<<endl;
	  cout<<"\n El nuevo valor del Segundo numero es: "<<num2<<endl;
	getch();
	return 0;
}

void valNuevo(int& xnum1, int& ynum2){
	
	cout<<"\n El valor del primer numero es: "<<xnum1;
	cout<<"\n El valor del Segundo numero es: "<<ynum2;
	
	xnum1=7;
	ynum2=8;
	
}
