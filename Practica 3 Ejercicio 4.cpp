#include <iostream>
using namespace std;
bool primo(int x){
	
	bool aux;
	if(x!=0 && x!=1){
		for(int i=2;i<=x;i++){
			if(x%i==0){
				if(x==i){
					aux = true;
				}
				else{
					aux=false;
					return aux;
				}
			}
		}
	}
	else{
		aux=false;
	}
	return aux;
}
int main (){
	int x;
	cout<<"Ingresar limite de los numeros primos  : ";cin>>x;
	for(int i=1;i<=x;i++){
		if(primo(i)==true){
			cout<<i<<endl;
		}
	}
}

int main (){
	int x;
	cout<<"Ingresar limite de los numeros primos  : ";cin>>x;
	for(int i=1;i<=x;i++){
		if(primo(i)==true){
			cout<<i<<endl;
		}
	}
		
}

