#include <iostream>
#include <sstream>

using namespace std;

class ClaseMultimedia{
	protected:
    	int Numero_de_cancion;
    	string Genero;
    	bool Subtitulos;
    	
    
	public:
		ClaseMultimedia(){};
		ClaseMultimedia(int,string,bool);
	
    	
   	
};

class ClaseDisco : public ClaseMultimedia {
	private:
		string nombre ;
	public:
		ClaseDisco(){};
		ClaseDisco(int,string,bool,string);
		void mostrar();	
};


ClaseMultimedia::ClaseMultimedia(int x,string y ,bool z){
	Numero_de_cancion=x;
	Genero=y;
    Subtitulos=z;
}

ClaseDisco::ClaseDisco(int x,string y ,bool z,string a):ClaseMultimedia(x,y,z){
	nombre=a;
}

void ClaseDisco::mostrar(){
	cout<<"-----------------Multimedia---------------------"<<endl;
	cout<<"Numero de la cancion : "<<Numero_de_cancion<<endl;
	cout<<"Nombre de la cancion : "<<nombre<<endl;
	cout<<"Genero : "<<Genero<<endl;
	if (Subtitulos=true){
		cout<<"Subtitulos : Si "<<endl;
	}
	else
		cout<<"Subtitulos : No "<<endl;
}

int main()
{
	ClaseDisco Cancion(3,"Trap",true,"Dani bzrp");
	Cancion.mostrar();
    
    return 0;
}
