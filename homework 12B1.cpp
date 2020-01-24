//christian seyoum
#include <iostream>
using namespace std;

int main()
{
      const int MAX=10;
	  int   tests[MAX]; 
	  int INDEX;
      float sum=0,avg;
      int less=0;
             
     
      cout << "Enter " << 10 << " NUMBERS: " << endl;
      for (INDEX = 0; INDEX < MAX; INDEX++)
      {
            cout << "Enter 10 Test Scores: " << INDEX + 1 << ": ";
            cin >> tests[INDEX];
      }
	   for (INDEX = 0; INDEX < MAX; INDEX++)
      {
      	sum=sum+tests[INDEX];
	  }
	  avg=sum/MAX;
	  cout<<"the average is "<<avg<<endl;
	    for (INDEX = 0; INDEX < MAX; INDEX++)
      {
      	if (tests[INDEX]<avg)
      	{
		 less++;
		  }
	  }
	  cout<<"number of elements less than the average is: "<<less<<endl;
 
 
      return 0;
}

