#include<iostream>
using namespace std;
class Adder{
	public:
		void add(int a,int b){
			cout<<"sum of two no. is:"<<(a+b)<<endl;
		}
		
	void add(float a,float b){
			cout<<"sum of two no. is:"<<(a+b)<<endl;
		}
		void add(int a,int b,int c){
			cout<<"sum of three no. is:"<<(a+b+c)<<endl;
		}
};
int main(){
	Adder A1;
	A1.add(5,7);
	A1.add(5.23,8.56);
	A1.add(4,5,6);
	return 0;
}
