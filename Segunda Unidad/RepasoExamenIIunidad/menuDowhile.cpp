#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
		int opcion;
		bool repetir = true;
		
		do{  
			cout<<"\n .:. M E N U   P R I N C I P A L .:."<<endl;
			cout<<"1. Opcion 1"<<endl;
			cout<<"2. Opcion 2"<<endl;
			cout<<"3. Opcion 3"<<endl;
			cout<<"4. Opcion 4"<<endl;
			cout<<"0. Salir"<<endl;
			
			cout<<"\n Ingrese una Opcion: ";
			cin>>opcion;
				
		     switch(opcion){
		     	case 1:
		     		cout<<"\n Bienvenidos a la Opcion 1"<<endl;
		     		getch();
		     		break;
		        
				case 2:
		     		cout<<"\n Bienvenidos a la Opcion 2"<<endl;
		     		getch();
		     		break;
		     		
			   case 3:
		     		cout<<"\n Bienvenidos a la Opcion 3"<<endl;
		     		getch();
		     		break;
		     		
		       case 4:
		     		cout<<"\n Bienvenidos a la Opcion 4"<<endl;
		     		getch();
		     		break;
		        
				case 0: 
				     cout<<"\n Haz marcado la opcion de Salir: "<<endl;
				     repetir = false;
				     getch();
				     break;
		     		
		       default: 
		             cout<<"\n ha Elejido una opcion Incorrecta...! intente nuevamente..";
		             getch();
		     	
			 }
			
			
		}while(repetir);



	return 0;
	getch();
}
