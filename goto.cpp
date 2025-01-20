#include<iostream>
using namespace std;
int main(){
	float num,average,sum=0.0;
	int i,n;
	cout<<"Enter No:";
	cin>>num;
	for(i=1;i<=n;i++){
		cout<<"Enter No"<<i<<":";
		cin>>num;
		if(num<0.0)
		{
			goto jump;
		}
		sum+=num;
	}
	jump:
		average=sum/(i-1);
		cout<<"\naverage="<<average;
		return 0;
}
