#include <iostream>
using namespace std;


int main (){
	int Array[3][3];
	int sum1=0,sum2=0,sum3=0;	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"] = ";cin>>Array[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		sum1=Array[0][i]+sum1;
	}
	for(int i=0;i<3;i++){
		sum2=Array[1][i]+sum2;
	}
	for(int i=0;i<3;i++){
		sum3=Array[2][i]+sum3;
	}
	
	if(sum1>sum2 && sum1>sum3){
		cout<<"La fila mayor es la 1 con "<<sum1;
	}
	if(sum2>sum1 && sum2>sum3){
		cout<<"La fila mayor es la 2 con "<<sum2;
	}
	if(sum3>sum2 && sum3>sum1){
		cout<<"La fila mayor es la 3 con "<<sum3;
	}
	cout<<endl<<endl;

			
	
	
	
	
	return 0;
		
}

