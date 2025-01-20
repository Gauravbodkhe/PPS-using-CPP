#include<iostream>
using namespace std;
class circle{
	public:
		float radius;
		void getcircledata(){
		cout<<"Enter the Radius:";
		cin>>radius;
		}
		void showcircledata(){
			cout<<"Area="<<(3.14*radius*radius)<<endl;
			
		}
	
};
class rectangle{
	public:
		float length,bradth;;
		void getrectdata(){
			cout<<"Enter length and breadth:";
			cin>>length>>bradth;
			
		}
		void showrectdata(){
			cout<<"Area="<<(length*bradth)<<endl;
		}
};
class cylinder:public circle,public rectangle{
	public:
		void cylinderdata(){
			cout<<"Volume of Cylinder is:"<<(3.14*radius*radius*bradth)<<endl;
			
		}
	
};
int main(){
	cylinder c1;
	c1.getcircledata();
	c1.showcircledata();
	c1.getrectdata();
	c1.showrectdata();
	c1.cylinderdata();
	return 0;
}
