#include<iostream>
using namespace std;
class Rectangle{
	public:
		Rectangle()
		{
			length=0;width=0;
		}
		Rectangle(float 1,float w)
		{
			length=l;width=w;
		}
		Rectangle(float l)
		{
			length=1;width=1;
		}
		float area()
		{
			return length*width;
		}
		private:
			float length,width;
};
int main(){
	Rectangle r1;
	Rectangle r2(5,7);
	rectangle r3(5);
cout<<"Area 1: "<<r1.area()<<endl;
cout<<"Area 2: "<<r2.area()<<endl;
cout<<"Area 3: "<<r3.area()<<endl;    
    return 0;
}


