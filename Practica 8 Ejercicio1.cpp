#include <iostream>
#include <sstream>

using namespace std;

class Forma {
	protected:
		string color;
		string nombre_forma;
		
	public:
		Forma(){};
		Forma(string _color,string _nombre_forma){color=_color;nombre_forma=_nombre_forma;};
	
    	void cambiar_color(string _color){ color=_color;};
    	void mover_centro();
    	virtual void imprimir(){};
    	virtual void area(){};
		virtual void perimetro(){};
    	
    	
};

class Rectangulo : public Forma{
	private:
		float lado_menor;
		float lado_mayor;
	
	public:
		Rectangulo(){};
		Rectangulo(string,string,float,float);
		void imprimir();
		void area();
		void perimetro();
		void cambiar_tamanio();
};

Rectangulo::Rectangulo(string _color,string _nombre_forma,float _lado_menor,float _lado_mayor ):Forma(_color, _nombre_forma){
	lado_menor = _lado_menor;
	lado_mayor = _lado_mayor;
}


void Rectangulo::imprimir(){
	cout<<"----------------------RECTANGULO---------------------"<<endl;
	cout<<"Nombre de la forma = "<<nombre_forma<<endl;
	cout<<"Color de la forma = "<<color<<endl;
	cout<<"Lado mayor = "<<lado_mayor<<endl;
	cout<<"Lado menor = "<<lado_menor<<endl;
}

void Rectangulo::area(){
	
	float area;
	area=(lado_menor*lado_mayor)/2;
	cout<<"El area es = "<<area<<endl;
}

void Rectangulo::perimetro(){
	float perimetro;
	perimetro= 2*(lado_menor+lado_mayor);
	cout<<"El area es = "<<perimetro<<endl;
}

int main(){
	
	Forma *form;
	Rectangulo rec("azul","rectangulo",5,7);
	form=&rec;
	form->imprimir();
	form->perimetro();
	form->area();	
		
}
