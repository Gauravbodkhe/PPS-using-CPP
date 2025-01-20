#include<iostream>
using namespace std;
int main(){
	int number[5];
	cout<<"Enter 5 Numbers:"<<endl;
	//Store input from user to Array
	for(int i=0;i<5;i++){
		cin>>number[i];
	}
	cout<<"The Numbers are:";
	for(int i=0;i<5;i++)
	cout<<number[i];
	return 0;
}

