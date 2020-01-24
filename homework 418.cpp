#include <iostream>
using namespace std;
int main()
{
	int x=0;
	cout<<"please enter a number"<<endl;
	cin>>x;
	if (x==0)
	{
		cout<<x<<" is zero"<<endl;
	}
	if (x>0)
	{
		cout<<x<<" is positive"<<endl;
	}
	if (x<0)
	{
		cout<<x<<" is negetive"<<endl;
	}
	else
	{
		cout<<"please restart program"<<endl;
	}
}
