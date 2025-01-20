#include<iostream>
using namespace std;
class person{
	public:
		string name;
		int age;
		void getpersondata(){
			cout<<"Enter the Name of the Person:";
			cin>>name;
			cout<<"Enter the age of the Person:";
			cin>>age;
			
		}
		void showpersondata(){
			cout<<"Name of the Person is:"<<name<<endl;
			cout<<"Age of the Person is:"<<age<<endl;
			
		}
		
	
};
class student:public person{
	public:
		float percentage;
		void getstudentdata(){
			person::getpersondata();
			cout<<"Enter percentage of the student:";
			cin>>percentage;
			
		}
	void showstudentdata(){
		person::showpersondata();
		cout<<"Percentage of student is:"<<percentage<<"%"<<endl;
	}
};
class teacher:public person{
	public:
		string subject;
		void getteacherdata(){
			person::getpersondata();
			cout<<"Enter the subject:";
			cin>>subject;
		}
	void showteacherdata(){
		person::showpersondata();
		cout<<"Subject of the Teacher is:"<<subject<<endl;
	}
};
class teachingassistent:public student,public teacher{
	public:
		void getdata(){
			student::getstudentdata();
			teacher::getteacherdata();
		}
	void putdata(){
		student::showstudentdata();
		teacher::showteacherdata();
	}
	
};
int main(){
	teachingassistent ts1;
	teacher t1;
	t1.getpersondata();
	t1.showpersondata();
	
	ts1.getstudentdata();
	ts1.showstudentdata();
	ts1.getteacherdata();
	ts1.showteacherdata();
	ts1.getdata();
	ts1.putdata();
	return 0;
}
