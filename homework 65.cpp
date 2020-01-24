#include <iostream>
using namespace std;
//Method declarations.
double area(double length,double width);
int main()
   { //declaring the variables.
         double length=0.0,width=0.0,areaOfRoom=0.0;
   areaOfRoom=area(5.5,6.5);
   cout<<"\nThe Area of the room(When function calculated and returned to the caller)::"<<areaOfRoom;

   return 0;  
   }
double area(double length,double width)
{
  
   return length*width;
}
