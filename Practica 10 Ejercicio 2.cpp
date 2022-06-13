#include <iostream>
using namespace std;

class Nodo{
public:
	friend class Lista;
	Nodo(int valor);
	~Nodo(){};
private:
	Nodo* sig;
	int valor;
};

class Lista{
	public:
		Lista();
		~Lista(){};
		void insertar_elemento(int valor);
		const void mostrar();
		void insertar_elem_inicio(int valor);
		
		Nodo* head;
};


Nodo::Nodo(int valor){
	this->sig = NULL;
	this->valor = valor;
}

Lista::Lista(){
	head = NULL;
}

void Lista::insertar_elemento(int num){
	Nodo* nuevo_nodo = new Nodo(num);
	Nodo* aux1 = head;
	
	if (head == NULL)
		head = nuevo_nodo;
	else{
		while (aux1->sig != NULL)
			aux1 = aux1->sig;
		aux1->sig = nuevo_nodo;
	}
}


const void Lista::mostrar(){
	Nodo* aux = head;
	
	while (aux != NULL)
	{
		std::cout << aux->valor;
		if (aux->sig != NULL)
			std::cout << "->";
		aux = aux->sig;
	}
	std::cout << "\n";
}

void Lista::insertar_elem_inicio(int num){
	Nodo* nuevo_nodo = new Nodo(num);
	Nodo* aux1 = head;
	
	if (head == NULL)
		head = nuevo_nodo;
	else
	{
		nuevo_nodo->sig = head;
		head = nuevo_nodo;
		while (aux1)
			aux1 = aux1->sig;
	}
}

int main(){
	Lista* mylist = new Lista();
	
	mylist->insertar_elemento(11);
	mylist->insertar_elemento(4);
	mylist->insertar_elemento(6);
	mylist->insertar_elemento(3);
	mylist->insertar_elem_inicio(5);
	
	mylist->mostrar();
}
