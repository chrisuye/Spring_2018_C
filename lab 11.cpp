//christian seyoum
//4/18/2018
//The following program prints allows users to enter 6 test scores into an array - tests[]
#include <iostream>
using namespace std;

int main()
{
      const int MAX_TESTS=6;//8. Note that you should now be able to work with any size array by changing just one number in your program. 
	  int   tests[MAX_TESTS]; // array declaration
	  int INDEX;
      float sum=0;
             
      //input  test scores
      cout << "Enter " << 6 << " test scores: " << endl;
      for (INDEX = 0; INDEX < MAX_TESTS; INDEX++)
      {
            cout << "Enter 6 Test Scores: " << INDEX + 1 << ": ";
            cin >> tests[INDEX];
      }
      cout<<"the first test score is "<<tests[0]<<endl;//2. print the first test score
      cout<<"the last test score entered was "<<tests[5]<<endl;//3. print the last test score
      for (INDEX = 0; INDEX < MAX_TESTS; INDEX++)
      {
      	cout<<tests[INDEX]<<endl;//4. print all scores
	  }
	   for (INDEX = 0; INDEX < MAX_TESTS; INDEX++)
      {
      	sum=sum+tests[INDEX];
	  }
	  cout<<"the sum is "<<sum<<endl;//5.sum all scores
	  cout<<"the average is "<<sum/MAX_TESTS<<endl;//6. calculate the average
	  
 
 
      return 0;
}

