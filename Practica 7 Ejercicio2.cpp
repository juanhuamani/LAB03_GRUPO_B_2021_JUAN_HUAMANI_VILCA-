#include <iostream>
#include <sstream>

using namespace std;

class Color{
	protected:
    	string color;
    
	public:
		Color(){};
    	Color(string);
    	void mostrar_color(){cout<<color;};
    
   	
};

class Material : public Color {
	private:
		string material ;
	public:
		Material(string);
		Material(string,string);
		void mostrar_material(){cout<<material;};
};


class Objeto : public Material {
	private:
		string objeto;
	public:
		
		Objeto(string,string,string);
		void mostrar_objeto(){cout<<objeto;};
		void mostrar_todo();
	
	
};



Color::Color(string x){
	color=x;

}

Material::Material(string x){
	material= x;
}

Material::Material(string x , string y ) : Color(x){
	material=y;
}

Objeto::Objeto(string x , string y , string z) :Material(x,y){
	objeto =z;
}



void Objeto::mostrar_todo(){
	cout<<objeto<<" color ";
	mostrar_color();
	cout<<" y material de ";
	mostrar_material();
}

int main()
{
	
	Objeto obj("rojo","Plastico","cacao");
	obj.mostrar_color();
	cout<<endl;
	obj.mostrar_material();
	cout<<endl;
	obj.mostrar_objeto();
	cout<<endl;
	obj.mostrar_todo();
	
    
    
    return 0;
}
