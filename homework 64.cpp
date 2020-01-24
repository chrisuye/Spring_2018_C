//u need to check this
#include <iostream>
using namespace std;
//Method declarations.
void calculateArea(double length,double width);
int main()
   {
       double length=0.0,width=0.0;
calculateArea(7,9);
   return 0;  
   }
void calculateArea(double length,double width)
{
   double area=length*width;
   cout<<"\nThe Area of the Room (When Length and width are passedby value)::"<<area;
}

