#include <iostream>
#include <sstream>

using namespace std;

class Persona{
	protected:
    	int edad;
    	string nombre;
    	
    
	public:
		Persona(){};
    	Persona(int,string);
    	~Persona(){};
    	void mostrar();
    
   	
};

class Alumno : public Persona {
	public:
		
		Alumno(int,string);
		void mostrar_alumno();
};

Persona::Persona(int x , string y){
	edad=x;
	nombre=y;
}

Alumno::Alumno(int x , string y):Persona(x,y){}

void Persona::mostrar(){
	cout<<"El nombre es : "<<nombre<<endl;
	cout<<"La edad es :"<<edad<<endl;

}


int main()
{
	
	Alumno b(42,"Jose");
	b.mostrar();
    return 0;
}
