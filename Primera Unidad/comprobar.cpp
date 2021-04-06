#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	  char letra;
	  
	  cout<<"Ingrese una letra: ";
	  cin>>letra;
	  
	  if(letra =='a'|| letra =='e' || letra =='i' || letra =='u' ){
	  	cout<<"\n Es un vocal minuscula";
	  }else if(letra=='A'|| letra=='E' || letra=='I' || letra=='O' || letra=='U' ){
	  	cout<<"\n Es un vocal Mayuscula";
	  }else{
	  	 cout<<"\n No es una vocal";
	  }
	  
	
	getch();
	return 0;
}

