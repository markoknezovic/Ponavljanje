#include <iostream>
using namespace std;
int main (){
	int a[10];
	int n=0;
	
	
	
	for(int i=4;i<=22;i++){
		if(i%2==0){
			
			a[n]=i;
			n++;
	}
	}

		cout<<"[";
	for(int i=0;i<10;i++){
		if(i==9){
			cout<<a[i];
		}else{
		
		cout<<a[i]<<",";
	}
	}
	cout<<"]";
	
	system("pause");
	return 0;
}
