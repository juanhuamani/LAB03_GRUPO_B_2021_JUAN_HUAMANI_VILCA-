
#include <iostream>
using namespace std;

int main()
{
    string con1,con2;
    cout<<"Ingrese contraseña : ";
    cin>>con1;
    
    do{
        cout<<"Ingresar contraseña correcta  : ";
        cin>>con2;
    }
    while(con1!=con2);
    
    cout<<"Contraseña correcta";
    
}
