#include<iostream>
using namespace std;  
class student         
{
int rollno;
char name[20];  
   public: 
void getdata() 
{
cout<<"Enter the roll no.:";  
cin>>rollno;
cout<<"Enter the name:";
cin>>name;
}
void putdata()
{
cout<<"Your roll no:"<<rollno;  
cout<<"Your name:"<<name;                 
}
};
int main()
{
student s;  
s.getdata();
s.putdata();
return 0;
}

