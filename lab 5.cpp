//christian seyoum, 2/28/2018, program lets you know if you are legal to drink
#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	cout<<"Please enter your age"<<endl;
	cin>>x;
	if (x>=21)
	{
		cout<<"You are legal to drink"<<endl;
		cout<<"PLEASE DRINK RESPONSIBLY"<<endl;
	}
	else
	{
		y=21-x;
		cout<<"You are too young to drink"<<endl;
		cout<<"You have "<<y<<" more years to wait until you are eligible"<<endl;
	}
}
