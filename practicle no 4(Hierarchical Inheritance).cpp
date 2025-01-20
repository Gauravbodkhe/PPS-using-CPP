
#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    void getdata(){
        cout<<"Name of the person is:";
        cin>>name;
        cout<<"Age of the person is:";
        cin>>age;
    }
        void putdata(){
            cout<<"name of the person is:"<<name<<endl;;
            cout<<"Age of the person is: "<<age<<endl;
  }
};
class professor:public person{
    public:
    int noofpublication;
    int ID;
    void getdata(){
        cout<<"enter the ID:";
        cin>>ID;
        cout<<"no of publication: ";
        cin>>noofpublication;
    }
    void putdata(){
        cout<<"ID is:"<<ID<<endl;
        cout<<"no of publication is:"<<noofpublication<<endl;
        
    }
};
class student:public person {
    public:
    int percentage;
    int STUID;
    void getdata(){
        cout<<"enter the students id:";
        cin>>STUID;
        cout<<"Enter the percentage: ";
        cin>>percentage;
    }
    void putdata(){
        cout<<"stud id no is:"<<STUID<<endl;
        cout<<"percentage of student is: "<<percentage<<endl;
    }
};
int main(){
    professor p1;
    student s1;
    person p2;
    p2.getdata();
    p2.putdata();
    p1.getdata();
    p1.putdata();
    s1.getdata();
    s1.putdata();
   return 0;
}

