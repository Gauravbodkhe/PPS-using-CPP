#include<iostream>
using namespace std;
int main(){
	int a=5,b=9;
	//false|| false=false
	cout<<((a==0)||(a>b))<<endl;
	cout<<((a==0)||(a<b))<<endl;
	cout<<((a==5)||(a>b))<<endl;
	cout<<((a==5)||(a<b))<<endl;
	return 0;
	
}
