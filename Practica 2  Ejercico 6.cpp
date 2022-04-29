#include <iostream>
using namespace std;

int main (){
	
	int n,x,z;
	float A[n];
	
	cout<<"Numero de estudiantes ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		int y=0;
		cout<<i+1<<" alumno "<<endl;
		for(int j=0;j<3;j++){
			cout<<j+1<<" nota : ";cin>>x;
			y=y+x;	
		}
		A[i]=y/3;
	}
	
	for(int i=0;i<n;i++){
		cout<<"Promedio de "<<i+1<<" alumno :"<<A[i]<<endl;
	}
	
	
}

