#include <iostream>
#include <sstream>

using namespace std;

class Rectangulo{
	private:
    	float altura,ancho;
    
	public:
    	Rectangulo(float,float);
    	~Rectangulo(){};
    	void area();
    	void perimetro();
    	

   	
};

Rectangulo::Rectangulo(float x,float y)
{
    altura = x;
    ancho = y;

}
void Rectangulo::area()
{	
	float area;
    area = altura*ancho;
    cout<<"El area del rectangulo es = "<<area<<endl;
}

void Rectangulo::perimetro()
{
	float perimetro;
    perimetro = 2*(altura+ancho);
    cout<<"El perimetro del rectangulo es = "<<perimetro<<endl;
}


int main()
{
	
	float alt , anch ;
	cout<<"Ingresar altura del rectangulo = ";cin>>alt;
	cout<<"Ingresar anchura del rectangulo = ";cin>>anch;
	cout<<endl;
	
	
    Rectangulo rec1(alt , anch);
    rec1.perimetro();
    rec1.area();
    
    
    
    return 0;
}

