#include<iostream>
using namespace std;
class animal{
	public:
		string animalname;
		int animalvalency;
		
		void getanimalinfo(){
		cout<<"Enter Your Fav. Animal name:";
		cin>>animalname;
		cout<<"Enter No of Animal present in Your Home:";
		cin>>animalvalency;
		}
		void showanimalinfo(){
		cout<<"Your Favorite Animal Is:"<<animalname<<endl;
		cout<<"Animal Present in Your Home Is:"<<animalvalency<<endl;
		}	
};
class dog:public animal{
	public:
		string dogsound;
		void getDoginfo(){
		cout<<"Enter How was Dog Barking:";
		cin>>dogsound;
		}
		void showDoginfo(){
		cout<<"Dog bark as:"<<dogsound<<endl;
		}
	
};
int main(){
	dog d1;
d1.getanimalinfo();
d1.showanimalinfo();
d1.getDoginfo();
d1.showDoginfo();
return 0;

}

