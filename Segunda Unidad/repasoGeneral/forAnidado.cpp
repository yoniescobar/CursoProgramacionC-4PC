#include <conio.h>
#include <iostream>

using namespace std;

int main(){

	   for(int i=1;i<=10;i++){ //for externo
	   		 cout<<"\n Vuelta No. "<<i<<endl;
	   		for(int j=1;j<=6;j++){ //for interno
	   			   cout<<"\t"<<j<<endl;
			   }
	   }



	getch();
	return 0;
}
