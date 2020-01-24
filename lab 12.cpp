#include <iostream>
using namespace std;
int main()
{
 int searchValue, flag; //Define search, flag, and index variables
 const int N = 10;
 int test[N]; //array called “Test”
 int i ;//array index
 int RandomNumber = 20;
for (i = 0; i < N; i++)
{
 test[i] = 1 + rand()%(RandomNumber - 1 + 1); //random number generator
 cout<<test[i]<<endl;
}
cout << "Enter search value" << endl; //Enter values to search for in array
 cin >> searchValue;
 for(i=0;i<N;++i) //Loop that searches for input value in array using index i
 {
 if(test[i]==searchValue)
 {
 flag=1; //If value found it is flagged and loop ends
 break;
 }
 }

// The following section
 if(flag)
 cout<<"\nElement is found at position in array "<<i+1;
 else
 cout<<"\nElement not found";
return 0;
}

