#include <iostream>
using namespace std;




int main (){
	int Array[5][3];
	int sum=0;	
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"] = ";cin>>Array[i][j];
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			if(i%2!=0){
				sum=sum+Array[i][j];
			}
		}
	}
	
	cout<<endl<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<Array[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"La suma es : "<<sum;
			
	
	
	
	
	return 0;
		
}

