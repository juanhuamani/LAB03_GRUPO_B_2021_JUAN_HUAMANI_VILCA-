
#include <iostream>
using namespace std;

int main()
{
    string con1,con2;
    cout<<"Ingrese contrase�a : ";
    cin>>con1;
    
    do{
        cout<<"Ingresar contrase�a correcta  : ";
        cin>>con2;
    }
    while(con1!=con2);
    
    cout<<"Contrase�a correcta";
    
}
