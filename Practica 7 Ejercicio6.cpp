#include <iostream>
#include <sstream>

using namespace std;

class Ave{
	protected:
    	string color_plumas;
    	int dulzura;
    	string especie;
    
    	
    
	public:
		Ave(string,int,string);
		int get_dulzura(){return dulzura;}	
		void set_dulzura(int x){dulzura=x;}
		
		void mostrar_ave();
		
		string get_color_plumas(){return color_plumas;}	
		void set_color_plumas(string x){color_plumas=x;}
		
		string get_especie(){return especie;}	
		void set_especie(string x){especie=x;}
		
    
};

class Ganzo : public Ave {
	private:
		int graznido ;
	public:
		
		Ganzo(string,int,string,int);
		void mostrar_ganzo();
};


class Pato : public Ave {
	private:
		int parpar ;
	public:
		
		Pato(string,int,string,int);
		void mostrar_pato();
};

class Gallina : public Ave {
	private:
		int cacarea ;
	public:
		
		Gallina(string,int,string,int);
		void mostrar_gallina();
};

Ave::Ave(string x,int y, string z){
	color_plumas=x;
    dulzura=y;
    especie=z;
}

Ganzo::Ganzo(string x,int y,string z,int a):Ave(x,y,z){
	graznido=a;
}

Pato::Pato(string x,int y,string z,int a):Ave(x,y,z){
	parpar=a;
}

Gallina::Gallina(string x,int y,string z,int a):Ave(x,y,z){
	cacarea=a;
}

void Ave::mostrar_ave(){
	cout<<"Color de plumas = "<<color_plumas<<endl;
    cout<<"Porcentaje de dulzura = "<<dulzura<<" % "<<endl;
    cout<<"Especie = "<<especie<<endl;
}

void Ganzo::mostrar_ganzo(){
	cout<<"--------------GANZO------------------"<<endl;
	mostrar_ave();
	for(int i=0 ; i<graznido;i++){
		cout<<"*graznea :D*"<<endl;
	}
}

void Pato::mostrar_pato(){
	cout<<"--------------PATO------------------"<<endl;
	mostrar_ave();
	for(int i=0 ; i<parpar;i++){
		cout<<"*cuak cuak cuak!!!!! :D*"<<endl;
	}
}
void Gallina::mostrar_gallina(){
	cout<<"--------------GALLINA------------------"<<endl;
	mostrar_ave();
	for(int i=0 ; i<cacarea;i++){
		cout<<"*cococooo!!!! :D*"<<endl;
	}
}
int main()
{
	Ganzo gan("Gris",100,"Ganzo",7);
	gan.mostrar_ganzo();
	cout<<endl;	
	
	Pato Lucas("Cafe",80,"Pato",4); 
	Lucas.mostrar_pato();
	cout<<endl;
	
	Gallina Torotea("Blanca",40,"Gallina",6);
	Torotea.mostrar_gallina();
    cout<<endl;
    
    
    return 0;
}
