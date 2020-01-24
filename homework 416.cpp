#include <iostream>
using namespace std;
int main()
{
	float x,posSum,negSum;
	cout<<"please enter a number"<<endl;
	cin>>x;
	if (x>=0)
	{
		cout<<"Input a positive number"<<endl;
		cin>>posSum;
		cout<<x+posSum<<endl;
	}
	else
	{
		cout<<"Input a negetive number"<<endl;
		cin>>negSum;
		cout<<x+negSum<<endl;
	}
}
