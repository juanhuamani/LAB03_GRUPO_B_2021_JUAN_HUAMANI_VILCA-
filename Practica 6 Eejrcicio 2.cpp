#include <iostream>
#include <sstream>

using namespace std;

class Alumno{
	private:
    	int CUI;
    	string nombre;
    	float nota1,nota2,nota3;
    
	public:
		Alumno();
    	Alumno(string,int,float,float,float);
    	~Alumno(){};
    	void promedio();
    	
    	

   	
};

Alumno::Alumno(){
	nombre = " ";
    CUI = 00000000;
    nota1 = 0;
	nota2 = 0;
	nota3 = 0;
}


Alumno::Alumno(string a ,int b,float c,float d,float e)
{
    nombre = a;
    CUI = b;
    nota1 = c;
	nota2 = d;
	nota3 = e ;

}

void Alumno::promedio()
{	
	float promedio;
	promedio = (nota1 + nota2 + nota3)/3;
	if (promedio >= 10.5){
		cout<<"El alumno SI aprobo el curso de Ciencias de la Computacion II"<<endl;
	}
	else{
		cout<<"El alumno NO aprobo el curso de Ciencias de la Computacion II"<<endl;
	}
}



int main()
{
	int cui;
	float nota_1 , nota_2 , nota_3 ;
	string nombre;
	
	cout<<"Ingresar nombre del alumno = ";cin>>nombre;
	cout<<"Ingresar CUI del alumno = ";cin>>cui;
	cout<<"Ingresar primera nota del alumno = ";cin>>nota_1;
	cout<<"Ingresar segunda nota del alumno = ";cin>>nota_2;
	cout<<"Ingresar tercera nota del alumno = ";cin>>nota_3;
	cout<<endl;
	
	
    Alumno alumno1(nombre , cui , nota_1 , nota_2 , nota_3 );
   	alumno1.promedio();
    
    
    return 0;
}

