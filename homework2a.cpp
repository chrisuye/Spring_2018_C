#include<iostream>
using namespace std;
int main()
{
	float Price,Tax,total,p1;
	cout<<"welcome, please input price of item"<<endl;
	cin>>Price;
	cout<<"know please input the tax in percentage for buying the item"<<endl;
	cin>>Tax;
	p1=Price*Tax*.01;
	total=p1+Price;
	cout<<"The total price of your item is:"<<endl;
	cout<<total;
}
