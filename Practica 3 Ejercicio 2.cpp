#include <iostream>
using namespace std;
bool bisiesto(int x){
	
	if(x%4==0 & x%100!=0){
		return true;
	}
	if(x%4==0 & x%100==0 & x%400==0){
		return true;
	}
	return false;
}

int main (){
	int x;
	cout<<"Ingresar a�o : ";cin>>x;
	if(bisiesto(x)==true)
		cout<<"El a�o es bisiesto ";
	else
		cout<<"El a�o no es bisiesto ";
}


