#include <iostream>
#include <time.h>
#include <stdlib.h>    

using namespace std;

class Arreglo{
	private:
		int A[5]={0,0,0,0,0};
	public:
		Arreglo();
		~Arreglo(){};
		void agregar_elemento(int,int);
		void eliminar_elemento(int);
		void mostrar();
};

Arreglo::Arreglo(){}

void Arreglo::agregar_elemento(int x,int y){
	A[x]=y;
}

void Arreglo::eliminar_elemento(int x){
	A[x]=0;
}

void Arreglo::mostrar(){
	for(int i=0;i<5;i++){
		cout<<"A [ "<<i<<"  ] = "<<A[i]<<endl;
	}
}

int main()
{
	Arreglo arg;
	int i=0,aux,x=0;
	do{
	
		cout<<endl;
		cout<<"1 . Agregar elemento "<<endl;
		cout<<"2 . Eliminar elemnto "<<endl;
		cout<<"3 . Mostrar "<<endl;
		cout<<"4 . Salir "<<endl;
		cout<<"Opcion a elegir : ";
		cin>>aux;
		cout<<endl<<endl;
		
		switch (aux){
			case 1:
				if(i<5){
					cout<<"Numero a agregar : ";cin>>x;
					arg.agregar_elemento(i,x);
					i++;
					break;
				}
				else{
					cout<<"--------El arreglo esta lleno ------------"<<endl;
					break;
				}
				
			case 2:
				if(i>0){
					if (x<5){
						cout<<"Posicion a eliminar : ";cin>>x;
						arg.eliminar_elemento(x);
						i--;
						break;
					}
					else{
						cout<<"ERROR"<<endl;
					}
				}
				else{
					cout<<"-------El arreglo esta vacio --------"<<endl;
				}
				
			case 3:
				arg.mostrar();
				break;
				
		}
	
	}
		
	while(aux!=4);
	return 0;
}
