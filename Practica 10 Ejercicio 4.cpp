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
		int tam_lista();
		void insertar_elem_libre(int valor, int pos);
		void eliminar_ultimo_elem();
		bool vacio();
		Nodo* head;
		int num_nodes;
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


int Lista::tam_lista()
{
	Nodo* aux1 = head;
	int tam = 0;
	while (aux1 != NULL)
	{
		tam++;
		aux1 = aux1->sig;
	}
	return tam;
}

void Lista::insertar_elem_libre(int valor, int pos){
	if (pos > tam_lista() || pos < 0)
		throw std::logic_error("Posicion fuera del rango o negativo!");
	
	Nodo* nuevo_nodo = new Nodo(valor);
	Nodo* aux1;
	if (pos == 0)
	{
		nuevo_nodo->sig = head;
		head = nuevo_nodo;
	}
	else
	{
		aux1 = head;
		
		for (int i = 1; aux1 != NULL; i++)
		{
			if (i == pos)
			{
				nuevo_nodo->sig = aux1->sig;
				aux1->sig = nuevo_nodo;
				break;
			}
			aux1 = aux1->sig;
		}
	}
}


bool Lista::vacio(){
	if (head == NULL)
		return true;
	return false;
}

void Lista::eliminar_ultimo_elem(){
	if (vacio())
		throw std::logic_error("Lista Vacia!");
	
	Nodo* aux1 = head;
	Nodo* aux2 = aux1->sig;
	
	while (aux1 != NULL)
	{
		if (aux1->sig == NULL)
		{
			if (aux1 == head)
				head = head->sig;
			else
				aux2->sig = aux1->sig;
			delete aux1;
			break;
		}
		aux2 = aux1;
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
	
	cout<<"\nInsertando 5 en la posicion 2 \n";
	mylist->insertar_elem_libre(5, 2);
	mylist->mostrar();
	
	cout<<"\nEliminando el ultimo elemento \n";
	mylist->eliminar_ultimo_elem();
	mylist->mostrar();
	
}
