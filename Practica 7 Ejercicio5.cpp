#include <iostream>
#include <sstream>

using namespace std;

class Numero{
	protected:
		int numero;
	public:
		Numero(){};
		Numero(int x){numero=x;};
		void setOperador(int x){numero=x;};
		int getOperador(){return numero;};
};

class Factorial:public Numero{
	private:
		int factorial;
	public:
		Factorial(int x){factorial=1;numero=x;};
		void hallar_factorial();
};


void Factorial::hallar_factorial(){
	for(int i=0;i<numero;i++){
		factorial=factorial*(numero-i);
	}
	cout<<"Factorial : "<<factorial;
}

int main(){
	int a;
	cout<<"Numero para hacer factorial : ";cin>>a;
	Factorial fac(a);
	fac.hallar_factorial();
}
