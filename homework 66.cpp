//u need to check this
#include <iostream>
using namespace std;
//Method declarations.
void CalculatePerimeter(double length,double width);
int main()
   {
       double length=0.0,width=0.0;
CalculatePerimeter(7,9);
   return 0;  
   }
void CalculatePerimeter(double length,double width)
{
   double perimeter=2*(length+width);
   cout<<"\nThe perimeter of the Room::"<<perimeter;
}

