// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class person 
{ 
    public: 
    int id;
    string address;
    void getdata(){
        cout<<"Enter the id number";
        cin>>id;
        cout<<"Enter the Address";
        cin>>address;
    }
    void showdata(){
        cout<<"The id number is"<<id<<endl;
        cout<<"The address is "<<address<<endl;
    }
};
class son
{
    public:
    string name;
    int age;
    void accept(){
        cout<<"Enter the name";
        cin>>name;
        cout<<"Enter the age";
        cin>>age;
    }
    void display(){
        cout<<"The name is"<<name<<endl;
        cout<<"The age is"<<age<<endl;
    }
};
class costomer{
    public:
    string customername;
    void get(){
   cout<<"Enter the name of customer ";
        cin>>customername;
    }
    void show(){
        cout<<"The name of costmer is"<<customername<<endl;
    }
    
};
class student:public person,public son, public costomer {
    public:
    int marks;
    string subject;
    void give()
    {
        cout<<"enter marks";
        cin>>marks;
        cout<<"Enter fav sub";
        cin>>subject;
        
    }
    void acc()
    {
        cout<<"marks is"<<marks<<endl;
        cout<<"fav sub is "<<subject<<endl;
    }
    
};
int main(){
    student s1;
    s1.getdata();
    s1.showdata();
    s1.accept();
    s1.display();
    s1.get();
    s1.show();
    s1.give();
    s1.acc();
   return 0;
}
