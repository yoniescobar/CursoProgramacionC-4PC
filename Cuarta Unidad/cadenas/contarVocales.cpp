//contar las vocales a, e, i ,o , u  de una frase.
    
#include<iostream>
#include<conio.h>
#include<string.h> 

using namespace std;

int main(){
	
     char frase[50];
     int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
     
     cout<<"Digite una frase: ";
     gets(frase);   //Guatemala es mi Pais 
     
     strlwr(frase); //estoy pasando toda la frase a minuscula
     
     for(int i=0;i<50;i++){   
     	switch(frase[i]){
     		case 'a': vocal_a++; break;
     		case 'e': vocal_e++; break;
     		case 'i': vocal_i++; break;
     		case 'o': vocal_o++; break;
     		case 'u': vocal_u++; break;
		 }
	 }
     
     cout<<" Vocal a: "<<vocal_a<<endl;
     cout<<" Vocal e: "<<vocal_e<<endl;
     cout<<" Vocal i: "<<vocal_i<<endl;
     cout<<" Vocal o: "<<vocal_o<<endl;
     cout<<" Vocal u: "<<vocal_u<<endl;

	getch();
	return 0;
}

