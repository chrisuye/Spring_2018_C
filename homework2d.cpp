#include<iostream>
using namespace std;
int main()
{
	float Taxrate,Tiprate,Item1,Item2,Item3,btax,taxa,tax,tipa,tip,total;
	cout<<"welcome, please enter the rate of tax in percentage"<<endl;
	cin>>Taxrate;
	cout<<"please enter the rate of tip in percentage"<<endl;
	cin>>Tiprate;
	cout<<"please enter the price of the first item"<<endl;
	cin>>Item1;
	cout<<"please enter the price of the second item"<<endl;
	cin>>Item2;
	cout<<"please enter the price of the third item"<<endl;
	cin>>Item3;
	btax=Item1+Item2+Item3;
	taxa=btax*Taxrate*.01;
	tax=btax+taxa;
	tipa=btax*Tiprate*.01;
	tip=tipa+btax;
	total=tipa+taxa+btax;
	cout<<"total before tax"<<endl;
	cout<<btax<<endl;
	cout<<"taxable"<<endl;
	cout<<taxa<<endl;
	cout<<"after tax"<<endl;
	cout<<tax<<endl;
	cout<<"after tip"<<endl;
	cout<<tip<<endl;
	cout<<"total bill"<<endl;
	cout<<total<<endl;
}
