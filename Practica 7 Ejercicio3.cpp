#include <iostream>
#include <sstream>

using namespace std;

class ProductoBancario{
	protected:
    	string cliente;
    	double saldo;
    	int numProductos;
    
	public:
		ProductoBancario(){};
    	void imprimir();
    	~ProductoBancario(){};
    
   	
};

class Cuenta: public ProductoBancario{
	public :
		Cuenta();
		void imprimir();
		~Cuenta(){};
};

class Prestamo : public ProductoBancario{
	protected:
		Prestamo();
		void imprimir();
		~Prestamo(){};
};

class Cuenta_joven : private Cuenta{
	protected:
		Cuenta_joven();
		void imprimir();
		~Cuenta_joven(){};
};

class Hipoteca : public Prestamo{
	protected:
		Hipoteca();
		void imprimir();
		~Hipoteca(){};
};


int main()
{
	
}
