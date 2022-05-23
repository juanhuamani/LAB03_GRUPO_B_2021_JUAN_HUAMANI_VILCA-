#include <iostream>
#include <sstream>

using namespace std;

class Edad{
	private:
    	int dia_act , mes_act , anio_act;
    	int dia , mes , anio;
    
    
	public:
		Edad();
		void anio_actual(int , int ,int );
		void anio_nacimiento(int , int ,int );
		void edad_persona();
    	~Edad(){};
    
     	
};

Edad::Edad(){}


void Edad::anio_actual(int x , int y ,int z )
{
    dia_act = x;
    mes_act = y;
    anio_act = z;

}

void Edad::anio_nacimiento(int x , int y ,int z )
{
    dia = x;
    mes = y;
    anio = z;

}


void Edad::edad_persona()
{	
	float edad;
	
	if (mes < mes_act){
		edad = anio_act - anio;
	}
	else if(mes==mes_act){
		if(dia <= dia_act){
			edad=anio_act-anio;
		}
		else{
			edad=(anio_act-anio)-1;
		}
	}
	else if (mes > mes_act){
		edad=(anio_act-anio)-1;
	}
	
	cout<<"La persona tiene "<<edad<<" anios";
}



int main()
{
	int dia_act , mes_act , anio_act;
    int dia , mes , anio;
	
	cout<<"Ingresar fecha actual = "<<endl;
	cout<<"Dia = ";cin>>dia_act;
	cout<<"Mes = ";cin>>mes_act;
	cout<<"Anio = ";cin>>anio_act;
	
	cout<<endl<<endl;
	cout<<"Ingresar fecha de nacimiento = "<<endl;
	cout<<"Dia = ";cin>>dia;
	cout<<"Mes = ";cin>>mes;
	cout<<"Anio = ";cin>>anio;
	cout<<endl;
	
	
    Edad persona1;
   	persona1.anio_actual(dia_act , mes_act , anio_act);
   	persona1.anio_nacimiento(dia , mes , anio);
   	persona1.edad_persona();
    
    
    return 0;
}
