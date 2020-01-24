#include <iostream>
using namespace std;
//Method declarations.
void  Perimeter(double length,double width);
int main()
   { //declaring the variables
       double length=0.0,width=0.0;
cout<<"\nEnter The length of the room ::";
cin>>length;
cout<<"\nEnter The Width of the room ::";
cin>>width;
 Perimeter(length,width);
}
void  Perimeter(double length,double width)
{
   cout<<"\nArea of the room ::"<<2*(length+width);
}

