#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"enter"<<endl;
	cin>>x>>y>>z;
	if (x+y>x+z)
	{
		if (x>y)
		cout<<x<<endl;
		else
		cout<<y<<endl;
	}
	if (x+y<x+z)
	{
		if (x>z)
		cout<<x<<endl;
		else
		cout<<z<<endl;
	}
}
