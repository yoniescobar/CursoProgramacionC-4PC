#include <iostream>
#include <conio.h>

 using namespace std;
 
 int main(){
 	
 	int opcion;
 	
 	do{     
	        system("cls"); 
 	
 		   cout<<"\n M E N U   D E  O P C I O N E S"<<endl;
 		   cout<<" 1. Opcion 1"<<endl;
 		   cout<<" 2. Opcion 2"<<endl;
 		   cout<<" 3. Opcion 3"<<endl;
 		   cout<<" 4. Opcion 4"<<endl;
 		   cout<<" 5. Salir   "<<endl;
 		   
 		   cout<<"\n Ingrese una Opcion: ";
 		   cin>>opcion;
 		   
 		   switch(opcion){
 		   	   case 1: system("cls");        // Para limpiar la pantalla
 		   	   		cout<<"Haz precionado la Opcion 1....";
 		   	   		getch();
 		   	   		break;
 		   	   case 2: system("cls");
 		   	   		cout<<"Haz precionado la Opcion 2....";
 		   	   		getch();
 		   	   		break;
 		   	   case 3: system("cls");
 		   	   		cout<<"Haz precionado la Opcion 3....";
 		   	   		getch();
 		   	   		break;
 		   	   case 4: system("cls");
 		   	   		cout<<"Haz precionado la Opcion 4....";
 		   	   		getch();
 		   	   		break;
 		   	    case 5: system("cls");
 		   	   		cout<<"Hasta Pronto....";
 		   	   		getch();
 		   	   		break;
 		   	   default:
 		   	   	    system("cls");
 		   	   	    cout<<"La Opcion Marcada No es valida...";
 		   	   	    getch();
			}
 		
 		
	 }while(opcion!=5);
 	
 	 	
 	return 0;
 	getch();
 }
