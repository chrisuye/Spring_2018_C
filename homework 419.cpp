#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"please enter three numbers"<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
	if (x>y)
	{
		if (x>z)
		{
			cout<<x<<endl;
		}
		else
		{
			cout<<z<<endl;
		}
	}
	if (y>x)
	{
		if(y>z)	
		{
			cout<<y<<endl;
		}
		else 
		{
			cout<<z<<endl;
		}
	}
	if (z>x)
	{
		if (z>y)
		{
			cout<<z<<endl;
		}
		else
		{
			cout<<y<<endl;
		}
	}
	else
	{
		cout<<"restart"<<endl;
	}
}
