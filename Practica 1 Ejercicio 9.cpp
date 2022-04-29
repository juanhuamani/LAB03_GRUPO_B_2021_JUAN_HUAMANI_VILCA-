#include <iostream>
using namespace std;

int main (){
	
	
	int num[10];
	int cont=0;
	
	for (int i=0; i<10 ;i++){

		cout<<"Ingresar "<<i+1<<" elemento : ";
		cin>>num[i];
	}
	
	for (int i=0; i<10 ;i++){
		if(num[i]<0)
			cont=num[i]+cont;	
	}
	cout<<"Suma de numeros negativos : "<<cont;
}

