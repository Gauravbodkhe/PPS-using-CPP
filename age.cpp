#include <iostream> 
#include <string> 
using namespace std; 
class Person { 
public:
string name="Akash"; 
int age;
void display() {
cout << "Name: " << name << endl; 
cout << "Age: " << age << endl;
}
};
int main() {
Person person1; // Creating an object of class Person person1.name = "John Doe";
person1.age = 25;
person1.display(); // Calling the display function return 0;
}
