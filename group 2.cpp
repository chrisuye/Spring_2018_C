#include <iostream>
using namespace std; 
int main() 
{ 
 	int x;
	float r; 	
 	cout<<"please choose from the following options"<<endl;
 	cout<<"1) circle Circumference"<<endl;
 	cout<<"2) Circle Diameter"<<endl;
 	cin>>x;
 	if(x==1)
 	{
 	cout<<" enter radius of circle"<<endl;
 	cin>>r;
 	cout<<"The circle circumfrence is "<<2*3.14*r<<endl; 		
	 }	
	 if(x==2)
 	{
 	cout<<" enter radius of circle"<<endl;
 	cin>>r;
 	cout<<"The circle diameter is "<<2*r<<endl; 		
	 }	
 	else
	 {
	cout<<"please restart program"<<endl;
		  } 	
 	}

