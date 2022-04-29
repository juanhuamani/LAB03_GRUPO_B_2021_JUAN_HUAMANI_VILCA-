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
	cout<<"Ingresar año : ";cin>>x;
	if(bisiesto(x)==true)
		cout<<"El año es bisiesto ";
	else
		cout<<"El año no es bisiesto ";
}


