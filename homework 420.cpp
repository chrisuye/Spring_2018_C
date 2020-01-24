#include <iostream>
using namespace std;
int main()
{
	float x;
	cout<<"please enter temp in farenhit"<<endl;
	cin>>x;
	if (x<=32)
	{
		cout<<"Freezing"<<endl;
	}
		if (x>=212)
	{
		cout<<"Boiling"<<endl;
	}
	else
	{
		cout<<"Liquid"<<endl;
	}
}
