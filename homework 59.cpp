#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter number"<<endl;
	cin>>x;
	while (x<=999)
	{
		cout<<x<<" "<<x*x<<" "<<x*x*x<<endl;
		x=x+1;
	}
}

