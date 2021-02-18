#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	  //1. Declaracion de variables
	  float pies,yardas,pulg,cm,mts;
	  
	  //2. Ingreso de datos
	  cout<<"\n Ingrese numero de Pies: ";
	  cin>>pies;
	  
	  //3. procesos
	  yardas = pies * 3;
	  pulg = pies*12;
	  cm = pulg *2.54;
	  mts = cm/100;
	  
	  //4. Mostrar resultado
	  cout<<"\n\n ================ Resultado de Conversiones ============= ";
	  cout<<"\n Yardas: "<<yardas;
	  cout<<"\n Pulgadas: "<<pulg;
	  cout<<"\n centimetros: "<<cm;
	  cout<<"\n Metros: "<<mts;
	   
	getch();
	return 0;
}
