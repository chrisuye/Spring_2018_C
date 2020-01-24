#include<iostream>
using namespace std;
int main()
{
	float t=0,c=0;
	cout<<"input tax"<<endl;
	cin>>t;
	cout<<"input money earned"<<endl;
	cin>>c;
	if(t>25&&c<20000)
	{
		cout<<"great"<<endl;
	}
	else
	{
		cout<<"not bad"<<endl;
	}
}
