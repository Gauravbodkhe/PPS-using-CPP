#include<iostream>
using namespace std;
int main(){
	int a=6,b=4;
	//Assignment Operator
	cout<<"a="<<a<<endl;
	//Add and assignment operator
	cout<<"a+= is"<<(a+=b)<<endl;
	//Substract and assignment operator
	cout<<"a-= is"<<(a-=b)<<endl;
	//Multiply and assignment operator
	cout<<"a*= is"<<(a*=b)<<endl;
	//Divide and assignment operator
	cout<<"a/= is"<<(a/=b)<<endl;
	return 0;
}
