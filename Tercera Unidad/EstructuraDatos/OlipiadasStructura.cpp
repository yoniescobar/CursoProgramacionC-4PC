#include <conio.h>
#include <iostream>
using namespace std;
struct atleta{
	char nombre[30];
	char pais[20];
	int numero_medallas;
	
}atletas[1000];


int main(){
	
	 int nAtletas,mayor=0,pos=0;
	  
	 cout<<"\n Digite el numero de Atletas: ";
	 cin>>nAtletas;
	 
	 	 for(int i=0;i<nAtletas;i++){
	 	 	 fflush(stdin); //Vaciar el buffer para seguir ingresando datos.
	 	 	 cout<<"\n Atleta No. "<<i+1<<endl;
	 	 	 cout<<"Nombre del Atleta: ";          cin.getline(atletas[i].nombre,30,'\n');
	 	 	 cout<<"Digite el Pais: ";             cin.getline(atletas[i].pais,20,'\n');
	 	 	 cout<<"Digite numero de Medallas: ";   cin>>atletas[i].numero_medallas;
	 	 	 
	 	 	 if(atletas[i].numero_medallas>mayor){
	 	 	 	 mayor = atletas[i].numero_medallas;
	 	 	 	 pos = i;
			   }
	 	 	 
		  }
	
	
	    cout<<"\n--------- El Atleta con el Mayor numero de Medallas ------------ "<<endl;
	    cout<<"Nombre: "<<atletas[pos].nombre<<endl;
		cout<<"Pais: "<<atletas[pos].pais<<endl;
		cout<<"Numero de Medallas: "<<atletas[pos].numero_medallas<<endl;
		
	getch();
	return 0;
}
