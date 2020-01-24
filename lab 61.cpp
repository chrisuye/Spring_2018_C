#include <iostream>
using namespace std;
int main()
{
int testScore;
cout << "Enter test score" << endl;
cin >> testScore;
if (testScore <0||testScore >100)
cout<<"Your grade is invalid because you entered a value greater than 100 or less than 0."<<endl;
else if (testScore >= 90)
cout << "Your grade is A" << endl;
else if (testScore >= 80)
cout << "Your grade is B" << endl;
else if (testScore >= 70)
cout << "Your grade is C" << endl;
else if (testScore >= 60)
cout << "Your grade is D" << endl;
else
cout << "Your grade is F" << endl;
return 0;
} 
