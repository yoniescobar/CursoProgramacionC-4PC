//Pasar una palabra a minuscula ---> función strlwr()


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	  char palabra[]="QUETZALTENANGO";
	  
	  strlwr(palabra); //esta funcion covierte a minuscula un texto--quetzaltenango
	  
	  cout<<palabra<<endl;
	
	
	
	
	getch();
	return 0;
}

