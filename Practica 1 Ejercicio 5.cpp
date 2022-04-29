#include <iostream>
using namespace std;

int main (){
	
	int num;
	int binario[5];
	
	cout<<"Numero decimal = ";cin>>num;
	
	for (int i=0; i<5 ;i++){
		binario[i]=num%2;
		num=num/2;
	}
	
	cout<<"El numero binario es : "<<endl;
	
	for (int i=4; i>=0 ;i--){
		cout<<binario[i];	
	}
}
