#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void cargarVector();
void mostrarVector(int numeros[], int n);
void odenarBurbuja(int numeros[], int n);
void odenarInsercion(int numeros[], int n);

int n; //cuantos numeros deseamos ingresar
int numeros[100]; //declarando el tamaño maximo del vector

int main(){
	int opcion=1;
	
	 do{  system("cls");
	 	  cout<<"\n  M E N U  P R I N C I P A L";
	 	  cout<<"\n 1. Cargar Vector Numeros Aleatorio";
	 	  cout<<"\n 2. Mostrar Vector Aleatorio";
	 	  cout<<"\n 3. Ordenar Vector-->Burbuja ";
	 	  cout<<"\n 4. Ordenar Vector-->Insercion ";
	 	  cout<<"\n 5. salir ";
	 	  cout<<"\n\n Ingrese un opcion valida: ";
	 	  cin>>opcion;
	 	  
	 	  switch(opcion){
	 	  	case 1: 
			   system("cls");  
			   cargarVector();  
			   break;
			case 2: 
			   system("cls");  
			   mostrarVector(numeros,n);
			   
			   break;
			case 3: 
			   system("cls");  
			   odenarBurbuja(numeros,n);
			   
			   break;
			case 4: 
			   system("cls");  
			   odenarInsercion(numeros,n);
			   
			   break;

		   default :  
		   system("cls");
		   cout<<"\n La Opcion es Incorrecta... Vuelva intentar";
		   }
	 	  
	 	
	 }while(opcion!=5);
	
	getch();
	return 0;
}
void cargarVector()
{
	cout<<"\n Ingrese cuantos numeros desea Ingresar: ";
	cin>>n;
	
	  srand(time(NULL)); //generamos la semilla del random
	for(int i=0;i<n;i++){
		numeros[i]= 1 + rand()%(100);	
	}
	
	
}

void mostrarVector(int numeros[], int n){
	cout<<"Numeros Generados Aleatoriamente total "<<n<<endl;
	
	for(int i=0;i<n;i++){
		cout<<numeros[i]<<endl;	
	}
	getch();
}

void odenarBurbuja(int numeros[], int n){
 
   
   cout<<"\n\n Ordenamiento de Burbuja- Ascendente.";
   /*
   Aqui va el algoritmo para ordenar de forma burbuja
   */

  getch();	
}

void odenarInsercion(int numeros[], int n){
	cout<<"\n\n Ordenamiento de Insercion- Descendente.";
   /*
   Aqui va el algoritmo para ordenar de forma Insercion
   */

  getch();
	
}
