#include "iostream"
#include "stdio.h"
using namespace std;


void intercambiar(int *x ,int *y) {
  	int aux=*x;
  	*x=*y;
  	*y=aux;
  	
}

int main(void) {
  	int num1 , num2;
  	cout<<"Antes de intercambiar: ";cin>> num1;
	cout<<"Antes de intercambiar: ";cin>>num2;
 	intercambiar(&num1, &num2);
	cout<<"Despues de intercambiar: "<<num1<<endl;
	cout<<"Despues de intercambiar: "<<num2;
	return 0;
}
