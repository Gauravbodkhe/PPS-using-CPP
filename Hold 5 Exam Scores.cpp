#include<iostream>
using namespace std;
class Students{
	private:
		int scores[5];
		public:
			void input(){
				for(int i=0;i<5;++i)
				{
					cin>>scores[i];
				}
			}
			int calculateTotalScore()const{
			int totalScore=0;
			for(int i=0;i<5;++i)
			{
				totalScore+=scores[i];
			}
			return totalScore;
			}
};
int main(){
	Students student;
	cout<<"Enter 5 Exam Scores:";
	student.input();
	cout<<"Total Score:"<<student.calculateTotalScore()<<endl;
	return 0;
}

