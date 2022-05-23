
#include<iostream>
using namespace std;

float suma(float x, float y) {
	return x + y;
}
float resta(float x, float y) {
	return x - y;
}
float multiplica(float x, float y) {
	return x * y;
}
float divide(float x, float y) {
	return x / y;
}

float operar(float x, float y, float (*f)(float, float)){
	
	
	return f(x, y);  
}
	
int main(int argc, char *argv[]) {
	float a, b, c;
		
	do{
			
		cout<<"Digite numero: ";
		cin>>a;
		cout<<"Digite numero: ";
		cin>>b;
		cout<<"Operaciones:\n";
			
		c = operar(a, b, suma);
		cout<<"Suma: "<<c<<endl;
			
		c = operar(a, b, resta);
		cout<<"Resta: "<<c<<endl;
			
		c = operar(a, b, multiplica);
		cout<<"Multiplica: "<<c<<endl;
			
		c = operar(a, b, divide);
		cout<<"Divide: "<<c<<endl<<endl;
			
			
	} while(true);
	
		
		return 0;
	}
