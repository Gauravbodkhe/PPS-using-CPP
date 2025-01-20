
#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    //basic assignment operator
    cout << "a = " << a << endl;
    //Use the += operator to add b to a and display the result. 
cout << "a += b is " << (a += b) << endl;
//Use the -= operator to subtract b from a and display the result.
cout << "a -= b is " << (a -= b) << endl;
//Use the *= operator to multiply a by b and display the result.
cout << "a *= b is " << (a *= b) << endl;
//Use the /= operator to divide a by b and display the result.
cout << "a /= b is " << (a /= b) << endl;
return 0;
}

