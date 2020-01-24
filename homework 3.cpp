#include <iostream>
#include <string>
using namespace std; 
int main() 
{ 
 	int num1=0,num2=0,num3=0,x,avg=0,sum=0;
 	string firstname("");
 	cout<<"Hello everybody"<<endl;
 	cout<<"please enter your first name"<<endl;
 	cin>>firstname; 	
 	cout<<"Hello "<<firstname <<endl;
 	cout<<"please choose fromew the following:"<<endl;
 	cout<<"1) sum of two numbers"<<endl;
 	cout<<"2) input price of item"<<endl;
 	cout<<"3) average of tgree numbers number"<<endl;
 	cin>>x;
 	if(x==1)
 	{
 		cout<<"please enter two numbers"<<endl;
 	cin>>num1>>num2;
 	sum=num1+num2;
 	cout<<"The sum of "<<num1<<" and "<<num2 <<" is "<<sum<<endl; 	
	 }
	if(x==2)
 	{
 	cout<<"please enter the price of an item"<<endl;
 	cin>>num1;	
	 }
	if(x==3)
 	{
 	cout<<"please enter three numbers"<<endl;
 	cin>>num1>>num2>>num3;
 	sum=num1+num2+num3;
    avg=sum/3;
 	cout<<"The average is "<<avg<<endl; 
	 }	   
 	else
	 {
	cout<<"please restart the program and pick the right choose, Thank You!"<<endl;
		  } 	
 	}

