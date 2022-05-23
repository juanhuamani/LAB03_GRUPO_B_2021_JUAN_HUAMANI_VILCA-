
#include <iostream>
#include<conio.h>

using namespace std;


int n, *elemento;

void datos(){
	cout<<"Digite numero de elementos del arreglo: ";
	cin>>n;
	
	elemento = new int [n];
	for ( int i=0; i<n ; i++){
		cout<<"Digite numero: ";
		cin>>*(elemento+i); 
	}
}

void insertar( int *elemento, int n){
	int aux;
		
	for ( int i=0; i<n ; i++){
		for ( int j=0 ; j <n-1 ; j++ ){
			if ( *(elemento + j) > *(elemento + j+1 )){
				aux = *(elemento + j );
				*(elemento + j ) =  *(elemento + j +1 );
				*(elemento + j + 1) = aux;
				}
			}
		}
	}
	
void mostrarArreglo( int*elemento , int n ){
	cout<<"MOSTRANDO ARREGLO ORDENADO."<<endl;
	for ( int i = 0; i<n ; i++ ){
		cout<<*(elemento + i )<<" ";
	}
}
		


int main(int argc, char *argv[]) {
	
	datos();
	insertar ( elemento, n );
	mostrarArreglo ( elemento, n );
	delete [] elemento; 
	

	return 0;
}

			
