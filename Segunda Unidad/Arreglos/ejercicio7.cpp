#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	char vec1[5] = {'a','b','c','d','e'};
	char vec2[5] = {'f','g','h','i','j'};
	char vec3[10];
	
	
	//ciclo 1  recupera los valores del vec1
	for(int i=0;i<5;i++){
		vec3[i] = vec1[i];
	}
	
	//ciclo 2 recupera los valores del vec2
	 for(int i=5;i<10;i++){
	 	 vec3[i] = vec2[i-5];
	 }
	 
	 //mostramos el vector vec3
	 for(int i=0;i<10;i++){
	 	cout<<vec3[i]<<" ";
	 }
	
	return 0;
	getch();
}
