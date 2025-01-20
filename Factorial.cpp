#include<iostream>
using namespace std;
int main(){
	int A=8;
	long factorial=1;
	for(int i=1;i<=A;i++)
	{
		factorial *=i;
	}
	cout<<"Factorial of "<<A<<"="<<factorial<<endl;
	return 0;
}
