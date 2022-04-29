#include <iostream>
using namespace std;

int main (){
	
	int n1,n2;
	cout<<"Primer numero = ";cin>>n1;
	cout<<"Segundo numero = ";cin>>n2;
	
	if (n1>=n2){
		if (n1%n2==0){
			cout<<"Si es divisor";
		}
		else{
			cout<<"No es divisor";
		}
	}
	else{
		cout<<"Error - primer numero no es mayor que el segundo";
	}
}
