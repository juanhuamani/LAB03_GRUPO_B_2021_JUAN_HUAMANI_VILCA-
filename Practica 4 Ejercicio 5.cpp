#include <iostream>
using namespace std;




int main (){
	int total=3;
	string nombre[total];
	int precio[total];
	int cantidad[total];
	int a,c,d=0;
	string nombres;
	
	for(int i=0;i<total;i++){
		cout<<"STOCK "<<i+1<<endl;
		cout<<"Nombre :";cin>>nombre[i];
		cout<<"Precio :";cin>>precio[i];
		cout<<"Cantidad :";cin>>cantidad[i];
		cout<<endl;
	}
	
	do{
	
	cout<<"-----------------STOCK--------------- "<<endl;
	cout<<"1 . Dar de alta un producto nuevo."<<endl;
	cout<<"2 . Buscar un producto por su nombre."<<endl;
	cout<<"3 . Modificar el stock y precio de un producto dado."<<endl;
	cout<<"4 . Salir."<<endl;
	cin>>a;
	
	switch(a){
		case 1:
			
			cout<<"STOCK "<<endl;
			cout<<"Nombre :";cin>>nombre[2];
			cout<<"Precio :";cin>>precio[2];
			cout<<"Cantidad :";cin>>cantidad[2];
			cout<<endl;
			break;
			
		case 2:
			cout<<"Nombre a buscar : ";cin>>nombres;
			for(int i=0;i<total;i++){
				if(nombres==nombre[i]){
					cout<<"Si se encontro"<<endl;
					break;
				}
				else{
					cout<<"No se encontro"<<endl;
					break;
			 	}
			}
			break;
			
		case 3:
			cout<<"Numero de producto a modificar :";cin>>c;
			cout<<"STOCK "<<endl;
			cout<<"Nombre :";cin>>nombre[c];
			cout<<"Precio :";cin>>precio[c];
			cout<<"Cantidad :";cin>>cantidad[c];
			cout<<endl;
			break;
			
		case 4:
			a=5;
	}
	
	}
	while(a!=4);
	
	
	return 0;
		
}

