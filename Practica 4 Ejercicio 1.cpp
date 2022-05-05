#include <iostream>
using namespace std;


int main (){
	string nombre[3];
	string apellido[3];
	int edad[3];
	int DNI[3];
	
	for(int i=0;i<3;i++){
		cout<<"PERSONA "<<i+1<<endl;
		cout<<"Nombre :";cin>>nombre[i];
		cout<<"Apellido :";cin>>apellido[i];
		cout<<"Edad :";cin>>edad[i];
		cout<<"DNI :";cin>>DNI[i];
		cout<<endl;
	}
	
	cout<<"\t"<<"\t\tNombre\t\tApellido\tEdad\t\tDNI"<<endl;
	for(int i=0;i<3;i++){
		cout<<"PERSONA "<<i+1<<"\t\t";
		cout<<nombre[i]<<"\t\t";
		cout<<apellido[i]<<"\t\t";
		cout<<edad[i]<<"\t\t";
		cout<<DNI[i]<<"\t\t";
		cout<<endl;
	
	}
	
	return 0;
		
}

