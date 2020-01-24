#include <iostream>
using namespace std;
//Method declarations.
void displayCollegeName(string cname);
int main()
   { //declaring the variables.
       string collegeName="Towson University";
displayCollegeName(collegeName);
}
void displayCollegeName(string cname)
{
   cout<<"\nThe college Name Entered by the user is:"<<cname;
}

