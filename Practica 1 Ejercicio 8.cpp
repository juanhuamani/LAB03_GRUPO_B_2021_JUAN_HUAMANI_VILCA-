#include <iostream>
using namespace std;

int main (){
	
	int total=0,a=0;
	float num[total];
	float cont=0;
	

	do {
		cout<<"Ingresar numero = ";cin>>num[total];
		cout<<"Quiere seguir continuando ? Si = 1 / No = 0  : ";cin>>a;
		total++;
	}
	while(a!=0);
	
	for (int i=0; i<total ;i++){
		cont=num[i]+cont;
	}
	
	cout<<endl<<"Media de numeros = "<<cont/total;
	
}
