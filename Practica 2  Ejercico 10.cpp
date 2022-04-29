#include <iostream>
#include <string.h>
using namespace std;

int main (){
	
	char J[10], aux;
	
	cout<<"Palabra : ";cin>>J;
	
	for(int i=0 ;i <strlen(J)/2 ;i++ ){
		aux=J[i];
		J[i]=J[strlen(J)-1-i];
		J[strlen(J)-1-i]=aux;
	}
	
	for(int i=0 ; i <strlen(J) ;i++){
		cout<<J[i];
	}
			
		
}

