#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Number";
	cin>>num;
	//outer if condition
	if(num!=0){
		//inner if condition
		if(num>0){
			cout<<"The number is Positive."<<endl;
		}
		else{
			cout<<"The number is Negative."<<endl;
		}
	}
	else{
		cout<<"The number is zero and it is neither Positive os Negative."<<endl;
	}
	cout<<"Th line i salways Printed."<<endl;
return 0;
}
