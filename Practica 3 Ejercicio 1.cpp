#include <iostream>
using namespace std;
int potencia(int x,int y){
	
	int aux=1;
	for(int i=0;i<y;i++){
		aux=aux*x;
	}
	return aux;
}

int main (){
	int x,y;
	cout<<"Ingresar primero numero : ";cin>>x;
	cout<<"Ingresar segundo numero : ";cin>>y;
	
	cout<<"La potencia es "<<potencia(x,y);	
}

