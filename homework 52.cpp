#include<iostream>
using namespace std;
int main()
{
float num;
char x;
cout<<"Do you want to know your letter grade? y/n"<<endl;
cin>>x;
while (x=='y'||x=='Y')
{
	cout<<"enter you grade"<<endl;
	cin>>num;
	if (num>=90)
	cout<<"***A***"<<endl;
	else if (num>=80)
	cout<<"***B***"<<endl;
	else if (num>=70)
	cout<<"***C***"<<endl;
	else if (num>=60)
	cout<<"***D***"<<endl;
	else
		cout<<"***F***"<<endl;
	cout<<"do you want to continue with more letter grade?y/n"<<endl;
	cin>>x;
}
cout<<"thank you come again!"<<endl;
}

