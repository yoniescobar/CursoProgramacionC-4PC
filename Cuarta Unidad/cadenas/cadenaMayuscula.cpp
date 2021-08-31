//Pasar una palabra a MAYUSCULA ---> función strupr()


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	  char palabra[]="guatemala";
	  
	  strupr(palabra); //esta funcion covierte a mayuscula un texto--GUATEMALA
	  
	  cout<<palabra<<endl;
	
	
	
	
	getch();
	return 0;
}

