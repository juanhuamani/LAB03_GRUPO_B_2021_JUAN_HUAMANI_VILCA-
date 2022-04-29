#include <iostream>
using namespace std;

int main (){
	
	int n;
	int A[n];
	int min=A[n],aux=0,max=0;
	double media;

	
	cout<<"Total de numeros a introducir : ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i<<" numero : ";cin>>A[i];
	}
	
	
	for(int i=0;i<n;i++){
		if(A[i]>max){
			max=A[i];
		}
		if(A[i]<min){
			min=A[i];
		}
		aux=aux+A[i];
	}
	
	media=aux/n;
	
	cout<<"El numero maximo es : "<<max<<endl;
	cout<<"El numero minimo es : "<<min<<endl;
	cout<<"La media es : "<<media;
	
	
	
}
