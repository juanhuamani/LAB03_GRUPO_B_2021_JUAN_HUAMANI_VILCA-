#include <iostream>
#include <sstream>

using namespace std;

class Forma {
	protected:
		string color;
		string nombre_forma;
		
	public:
		Forma(){};
		~Forma(){};
		Forma(string _color,string _nombre_forma){color=_color;nombre_forma=_nombre_forma;};
	
    	void cambiar_color(string _color){ color=_color;};
    	void mover_centro();
    	virtual void imprimir(){};
    	virtual void area(){};
		virtual void perimetro(){};
    	
    	
};

class Rectangulo : public Forma{
	protected:
		float lado_menor;
		float lado_mayor;
	
	public:
		Rectangulo(){};
		~Rectangulo(){};
		Rectangulo(string _color,string _nombre_forma){color=_color;nombre_forma=_nombre_forma;};
		Rectangulo(string,string,float,float);
		virtual void imprimir();
		virtual void area();
		virtual void perimetro();
		
};

class Elipse : public Forma{
	protected:
		float radio_menor;
		float radio_mayor;
	
	public:
		Elipse(){};
		~Elipse(){};
		Elipse(string,string,float,float);
		void imprimir();
		void area();
		
};

class Cuadrado : public Rectangulo {
	
	public:
		Cuadrado(){};
		~Cuadrado(){};
		Cuadrado(string,string,float);
		void imprimir();
		void area();
		void perimetro();
		
};

Rectangulo::Rectangulo(string _color,string _nombre_forma,float _lado_menor,float _lado_mayor ):Forma(_color, _nombre_forma){
	lado_menor = _lado_menor;
	lado_mayor = _lado_mayor;
}

Elipse::Elipse(string _color,string _nombre_forma,float _radio_menor,float _radio_mayor):Forma(_color, _nombre_forma){
	radio_menor = _radio_menor;
	radio_mayor = _radio_mayor;	
}

Cuadrado::Cuadrado(string _color,string _nombre_forma,float _lado_menor):Rectangulo(_color, _nombre_forma){
	lado_menor = _lado_menor;
}

void Rectangulo::imprimir(){
	cout<<"----------------------RECTANGULO---------------------"<<endl;
	cout<<"Nombre de la forma = "<<nombre_forma<<endl;
	cout<<"Color de la forma = "<<color<<endl;
	cout<<"Lado mayor = "<<lado_mayor<<endl;
	cout<<"Lado menor = "<<lado_menor<<endl;
}

void Elipse::imprimir(){
	cout<<"----------------------ELIPSE---------------------"<<endl;
	cout<<"Nombre de la forma = "<<nombre_forma<<endl;
	cout<<"Color de la forma = "<<color<<endl;
	cout<<"Radio mayor = "<<radio_mayor<<endl;
	cout<<"Radio menor = "<<radio_menor<<endl;
}

void Cuadrado::imprimir(){
	cout<<"----------------------CUADRADO---------------------"<<endl;
	cout<<"Nombre de la forma = "<<nombre_forma<<endl;
	cout<<"Color de la forma = "<<color<<endl;
	cout<<"Lado = "<<lado_menor<<endl;

}


void Rectangulo::area(){
	
	float area;
	area=(lado_menor*lado_mayor)/2;
	cout<<"El area es = "<<area<<endl;
}

void Rectangulo::perimetro(){
	float perimetro;
	perimetro= 2*(lado_menor+lado_mayor);
	cout<<"El perimetro es = "<<perimetro<<endl;
}

void Elipse::area(){
	float area;
	area= radio_mayor*radio_menor;
	cout<<"El area es = "<<area<<" pi"<<endl;
}

void Cuadrado::area(){
	float area;
	area=lado_menor*lado_menor;
	cout<<"El area es = "<<area<<endl;
}

void Cuadrado::perimetro(){
	float perimetro;
	perimetro= 4*(lado_menor);
	cout<<"El perimetro es = "<<perimetro<<endl;
}

int main(){
	
	Forma *rect ,*elip, *cuadr;
	
	Rectangulo rec("azul","rectangulo",5,7);
	rect=&rec;
	rect->imprimir();
	rect->perimetro();
	rect->area();	
	
	Elipse eli("Rosa","Elipse",9,6);
	elip=&eli;
	elip->imprimir();
	elip->area();
	
	Cuadrado cuad("Blanco","Cuadrado",3);
	cuadr=&cuad;
	cuadr->imprimir();
	cuadr->perimetro();
	cuadr->area();
}
