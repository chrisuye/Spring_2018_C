#include <iostream>
#include <string>
using namespace std;
int main ()
{
 //declarations
 float bodyTemp = 0.0;
 int age = 0;
 string name = " ";
 //input Your name
 cout <<"Enter your first name" << endl;
 cin >> name;
 //output Your name
 cout << "Hello " << name << "! " << endl;
 //input Age
 cout << "Enter your age" << endl; 
 cin >> age;
 //output Age
 cout << "Your age is " << age << endl;
 //input Body Temperature
 cout << "Enter your body temperature " << endl; cin >> bodyTemp;
 //output Body Temperature
 cout << "Your body temperature is " << bodyTemp << endl;
 return 0;
}

