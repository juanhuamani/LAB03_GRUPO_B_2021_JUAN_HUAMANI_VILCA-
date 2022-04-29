#include <iostream>
using namespace std;


int main (){
	
	char nom[20],app[20],apm[20];
	
	cout<<"Primer nombre = ";cin>>nom;
	cout<<"Apellido paterno = ";cin>>app;
	cout<<"Apellido materno = ";cin>>apm;
	
	cout<<"Correo generado :"<<nom[0]<<app<<apm[0]<<"@unsa.edu.pe"<<endl;
	
}

