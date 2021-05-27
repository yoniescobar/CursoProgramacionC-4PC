#include <conio.h>
#include <iostream>


using namespace std;

int main(){
	
	char vec1[5] = {'a','b','c','d','e'};
	char vec2[5] = {'f','g','h','i','j'};
	char vec3[10];
	
	//algoritmo de intercambio, la j recorre las posiciones de los vec1 y v2
	
	int j=0;
	
	for(int i=0;i<5;i++){
	    vec3[j]	= vec1[i];
	    j++;
	    vec3[j] = vec2[i];
		 j++; 
	}
	
	
	for(int i=0;i<10;i++){
		cout<<vec3[i]<<" ";
	}
	
	return 0;
	getch();
}
