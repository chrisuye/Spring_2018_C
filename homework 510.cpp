#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter length and width"<<endl;
	cin>>x>>y;
	while (x>0&&y>0)
	{
		cout<<"area= "<<x*y<<" permiter= "<<2*(x+y)<<endl;
		cout<<"enter length and width"<<endl;
	    cin>>x>>y;
	}
	cout<<"one of your values is zero"<<endl;
}

