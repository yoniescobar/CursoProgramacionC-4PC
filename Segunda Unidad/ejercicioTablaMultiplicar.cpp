#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numTabla;
	
	cout<<"\n Ingrese numero de Tabla: ";
	cin>>numTabla;
	
	for(int i=1;i<=10;i++){
		cout<<numTabla<<" x "<<i<<" = "<<(numTabla*i)<<endl;
	}

	return 0;
	getch();
}
