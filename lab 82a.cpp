//Christian Seyoum
//3/28/2018
#include <iostream>
using namespace std;
int main()
{
 int hour;
 int min;
 for (hour = 1; hour <= 12; hour++)
 {
 for (min = 0; min <= 59; min++)
 {
 if (min <=9)
 cout << hour << ":0" << min << " AM" << endl; //adds 0 to the time format 1:00 AM
 else
 cout << hour << ":" << min << " AM" << endl;
 }
 }
 return 0;
}
