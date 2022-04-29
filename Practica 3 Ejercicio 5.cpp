#include <iostream>
using namespace std;
void entero(int x){
	if(x>0 && x<100){
		cout<<"Es un numero comprendido entre 1 y 100"<<endl;
	}
	else{
		cout<<"No es un numero comprendido entre 1 y 100"<<endl;
	}
	
}

void par(int x){
	if(x%2==0){
		cout<<"Es un numero par"<<endl;
	}
	else{
		cout<<"No es un numero par"<<endl;
	}
	
}

int suma(int x){
	int aux;
	for(int i=0;i<=x;i++){
		aux=i+aux;
	}
	return aux;
	
}

int main (){
	double x;
	cout<<"Ingresar numero : ";cin>>x;
	
	
	entero(x);
	par(x);
	cout<<"La suma total desde 0 hasta el numero es = "<<suma(x);
		
}

