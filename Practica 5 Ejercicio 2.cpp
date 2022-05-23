#include <iostream>
#include <stdlib.h>
#include <time.h>    
using namespace std;





int main()
{
	srand (time(NULL));
	for(int j=0;j<1000;j++){
		
		int* vec1 = NULL; 
		int* vec2 = NULL; 
		int sum1=0,sum2=0;
	
		vec1 = new int[10];
		vec2 = new int[10];
	
		for(int i=0;i<10;i++){
			vec1[i]=rand() % 100 +1;
			sum1=sum1+vec1[i];
		}
		
		for(int i=0;i<10;i++){
			vec2[i]=rand() % 100 +1;
			sum2=sum2+vec2[i];
		}
		cout<<j+1<<" vez :"<<endl;
		cout<<"Multiplicacion del vector1 = "<<sum1<<endl;
		cout<<"Multiplicacion del vector2 = "<<sum2<<endl<<endl;
		
		delete [] vec1;
		delete [] vec2;
	}
	return 0;
}
