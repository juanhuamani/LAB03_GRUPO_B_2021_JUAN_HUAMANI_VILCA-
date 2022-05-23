#include <iostream>
#include <sstream>
#include <stdlib.h>   
#include <time.h>

using namespace std;

class Matrices{
	private:
    	int A[3][3];
    
	public:
    	Matrices();
    	~Matrices(){};
    	void rellenar();
    	void mostrar();
    	bool buscar(int);
    	

   	
};

Matrices::Matrices(){}

void Matrices::rellenar()
{	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			A[i][j]=rand() % 9 +1;
		}
	}
}

void Matrices::mostrar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"[ "<<i<<"  ] [ "<<j<<"  ] = "<<A[i][j]<<endl;
		}
	}
}

bool Matrices::buscar(int x){
	int aux;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(A[i][j]==x){
				return true;
			}
		}
	}
	return false;
}




int main()
{
	srand (time(NULL));
	int opc;
	Matrices matris;
	
	
	do{
		cout<<endl<<endl;
		cout<<"---------Menu--------"<<endl;
		cout<<"1 . Rellenar con numeros aleatorios "<<endl;
		cout<<"2 . Mostrar la matriz "<<endl;
		cout<<"3 . Buscar un numero "<<endl;
		cout<<"4 . Salir "<<endl;
		cout<<"Opcion a elegir :  ";cin>>opc;
		
		switch(opc){
			case 1:
				matris.rellenar();
				break;
			case 2:
				matris.mostrar();
				break;
			case 3:
				int busc;
				cout<<"Numero a buscar : ";cin>>busc;
				if(matris.buscar(busc)){
					cout<<"------NUMERO ENCONTRADO------ "<<endl;
				}
				else
					cout<<"------NUMERO NO ENCONTRADO------ "<<endl;
				break;
				
		}
	}
	while(opc!=4);
	
    
    return 0;
}

