
#include <iostream>
using namespace std;

int main()
{
    string con1,con2;
    cout<<"Ingrese contraseņa : ";
    cin>>con1;
    
    do{
        cout<<"Ingresar contraseņa correcta  : ";
        cin>>con2;
    }
    while(con1!=con2);
    
    cout<<"Contraseņa correcta";
    
}
