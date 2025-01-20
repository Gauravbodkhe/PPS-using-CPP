#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Enter the numbers of array elements";
	cin>>n;
	int a[n];
	cout<<"Enter array Elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Array Elements in Reverse order";
	for(i=n-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}

