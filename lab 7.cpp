//christian seyoum
//03/16/2018
/*this program first asks the user to make the choice, if the user choices yes the program leads the user 
in to providing a number which the output will be the number squared. if the user picks no the program displays GoodBye.*/
#include <iostream>
using namespace std;
int main()
{
char ans;
int num;
 cout << endl << "Do you want to square a number?(y/n)" << endl; //1- START
 cin >> ans;//1 - START
while ((ans == 'y')||(ans == 'Y')) //2 - TEST
 {
 cout << "Enter number to be squared: "<< endl; //3 - ACTION
 cin >> num; //3 - ACTION
 cout << "The square of " << num << " is " << num*num << endl; //3 -ACTION
 cout << endl << "Do you want to do another square?(y/n)" << endl;//4 - RESTART
 cin >> ans;//4 - RESTART
 }
cout<<endl<<"GoodBye"<<endl;
return 0;
}

