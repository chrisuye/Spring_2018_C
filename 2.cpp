//this code will do divition of 2 numbers added together by one number
#include <iostream>
using namespace std;
int main()
{
	float num1; 
	float num2; 
	float num3; 
	float ans;

	cout << "Enter three numbers, the first two numbers should be the numbers you with to add. The last number will be the number you will be dividing the first two by!" << endl; 
	cin >> num1 >> num2 >>num3; 
	ans = (num1 + num2)/num3; 
	cout << "The answer is " << ans;

}

