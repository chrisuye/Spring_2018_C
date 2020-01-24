#include<iostream>
#include<string>
using namespace std;
int main()
{
string y;
cout<<"enter name of contestant"<<endl;
cin>>y;
while (y!="QUITE")
{
	cout<<y<<endl;
	cout<<"enter next name"<<endl;
	cin>>y;
}
cout<<"thank you come again!"<<endl;
}

