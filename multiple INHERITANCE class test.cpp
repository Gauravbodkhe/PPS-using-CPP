#include<iostream>
using namespace std;
class Hardware{
	public:
		int processorspeed;
		int RAMsize;
		void getharddata(){
			cout<<"Enter Processor speed of Hardware:";
			cin>>processorspeed;
			cout<<"Enter RAM Size of Hardware:";
			cin>>RAMsize;
		}
		void showharddata(){
			cout<<"The Processor speed of Hardware is:"<<processorspeed<<endl;
			cout<<"The RAM size of Hardware is :"<<RAMsize<<endl;
		}
		
};
class Software{
	public:
		string operatingsystem;
		string installedsoftware;
		void getsoftdata(){
			cout<<"\n"<<"Enter Opertaing system:";
			cin>>operatingsystem;
			cout<<"Enter Install software :";
			cin>>installedsoftware;
		}
		void showsoftdata(){
			cout<<"The Operating System of software is:"<<operatingsystem<<endl;
			cout<<"The Install software of Software is :"<<installedsoftware<<endl;
		}
		
};
class Computer:public Hardware,public Software{
	public:
		string computerbrand;
		string model;
		void getcomputerdata(){
			cout<<"\n"<<"Enter Computer Brand:";
			cin>>computerbrand;
			cout<<"Enter computer model :";
			cin>>model;
		}
		void showcomputerdata(){
			cout<<"Brand of the computer is:"<<computerbrand<<endl;
			cout<<"Model of the computer is: "<<model<<endl;
		}
		
};
int main(){
	Computer c1;
	c1.getharddata();
	c1.showharddata();
	c1.getsoftdata();
	c1.showsoftdata();
	c1.getcomputerdata();
	c1.showcomputerdata();
	return 0;
	
	
}
