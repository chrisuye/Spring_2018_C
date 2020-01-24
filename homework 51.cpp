#include<iostream>
using namespace std;
int main()
{
int num;
char x;
cout<<"Do you want to know if your number is even or odd? y/n"<<endl;
cin>>x;
while (x=='y'||x=='Y')
{
	cout<<"enter a number"<<endl;
	cin>>num;
	if (num==0)
	cout<<"NEITHER ODD NOR EVEN"<<endl;
	else if ((num%2)==0)
	cout<<"***EVEN***"<<endl;
	else if ((num%2)!=0)
	cout<<"***ODD***"<<endl;
	else
	cout<<"NEITHER ODD NOR EVEN"<<endl;
	cout<<"do you want to continue?y/n"<<endl;
	cin>>x;
}
cout<<"thank you come again!"<<endl;
}

