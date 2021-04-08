#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	/*  ciclo while
	int x=1;
	     
	while(x<=10){
		cout<<x<<",";  
		x++;
	}  
	*/
	
	/* ciclo do while
	int j=11;
	
	do{
		 cout<<j<<endl; 
		 j++; 
		
	}while(j<=10);
	*/
	   //        11<=10     10+1 = 11
	for(int i=0; i<=10;i+=2){
		cout<<i<<endl; //1 2 3  4 5 6 7  8 9 10
	}
	
	return 0;
	getch();
}
