#include<iostream>
using namespace std;
int main(){
char input='A';
switch(input){
	//if input character is A then print GFG
	case'A':
		cout<<"GFG"<<endl;
		break;
		//if the input character B then print GreeksforGreeks
		case'B':
			cout<<"GreeksforGreeks"<<endl;
			break;
			default:
				//if the input character is invalid then print
				//invalid input
				cout<<"Invalid input"<<endl;
				
}
return 0;	
}
