#include <iostream>
using namespace std;

int main (){
	
	int aux;
	for(int i=2;i<100;i++){
		if(i%2==0){
			aux=aux+i;
		}
	}
	cout<<"Suma de pares : "<<aux;
	
}
