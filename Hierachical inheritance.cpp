#include<iostream>
using namespace std;
class A{
public:
int x,y;
void getdata(){
	cout<<"Enter value of X & Y:";
	cin>>x>>y;
}

};
class B:public A{
	public:
		void product(){
			cout<<"Product:"<<x*y<<endl;
		}
};
class C:public A
{
	public:
		void sum(){
			cout<<"Sum="<<x+y<<endl;
		}
	
};
int main(){
	B b1;
	C b2;
	b1.getdata();
	b1.product();
	b2.getdata();
	b2.sum();
	return 0;
}
