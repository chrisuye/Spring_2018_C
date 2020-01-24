#include<iostream>
using namespace std;
int main()
{
	float t=0,h=0;
	cout<<"input temp"<<endl;
	cin>>t;
	cout<<"input hum"<<endl;
	cin>>h;
	if(t<=75||h<70)
	{
		cout<<"great"<<endl;
	}
	else
	{
		cout<<"not bad"<<endl;
	}
}
