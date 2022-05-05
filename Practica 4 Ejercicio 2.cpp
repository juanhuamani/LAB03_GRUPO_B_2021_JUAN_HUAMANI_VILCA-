#include <iostream>
using namespace std;


bool buscar(int Numeros[],int num){
	for(int i=0;i<7;i++){
		if (num==Numeros[i]){
			return true;
		}
	}
	return false;
}


int main (){
	int Numeros[7];
	int num;
	
	for(int i=0;i<7;i++){
		cout<<i+1<<" numero = ";cin>>Numeros[i];
	}
	
	cout<<"Numero a buscar : ";cin>>num;
	if(buscar(Numeros,num)==true){
		cout<<"Si se encontro el numero";
	}
	else{
		cout<<"No se encontro el numero";
	}
	return 0;
		
}

