#include <iostream>
using namespace std; 
int main() 
{ 
 	// Declare all variables here  	int num1 = 0;  	int num2 = 0; 
 	 int num1=0,num2=0,sum=0,diff=0,product=0,division=0,modulus=0;
 	// Enter two numbers from keyboard 
 	cout << "Enter two integer values " << endl; 
 	cin >> num1 >> num2; 
 	 
 	// Perform calculations for sum, difference, product, division, and modulus 	 
 	 sum=num1+num2;
 	 diff=num1-num2;
 	 product=num1*num2;
 	 division=num1/num2;
 	 modulus=num1%num2;
 	// Print calculated values for sum, difference, product, division, and modulus 
 	 cout << "The sum of the values is " << sum << endl;
 	 cout << "The difference of the values is " << diff << endl;
 	 cout << "The product of the values is " << product << endl;
 	 cout << "The division of the values is " << division << endl;
 	 cout << "The modulus of the values is " << modulus << endl;
 	return 0; 
}

