// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
 int test[10];
 int index;
 for (index = 0; index < 10; index++)
 test[index] = index * 2;
 cout << test[0] << endl;
 cout << test[9] << endl;
 cout << index << endl;
}
