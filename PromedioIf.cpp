#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	 
	  // 1. Declarar variables
	  int n1,n2,n3,n4,prom;

	  //2. Ingreso de datos
	  cout<<"\n Ingrese nota de I unidad: ";
	  cin>>n1; 
	  cout<<"\n Ingrese nota de II unidad: ";
	  cin>>n2; 
	  cout<<"\n Ingrese nota de III unidad: ";
	  cin>>n3; 
	  cout<<"\n Ingrese nota de IV unidad: ";
	  cin>>n4; 
	  
	  //3. proceso
	  prom = (n1+n2+n3+n4)/4;
	  
	  cout<<"\n El promedio es: "<<prom;
	  //evaluar si la persona es promovido
	  
	  if(prom>=60){
	  	cout<<"\n\n Aprobado... Felicidades...";
	  }else{
	  	cout<<"\n\n No Aprobado... Que Mal...";
	  }
	  
	 
	  
	  
	  
	
	return 0;
	getch();
}
