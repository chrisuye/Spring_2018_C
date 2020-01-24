//christian seyoum
#include <iostream>
using namespace std;

int main()
{
      const int MAX=20; //1
	  int   stuff[MAX]; //1
	  int INDEX;
      float sum=0,sum1=0,sum2=0;
             
      
      for (INDEX = 0; INDEX < MAX; INDEX++)//2
      {
            stuff[INDEX]=100;
      }
      cout << "Enter " << 20 << " numbers: " << endl;
      for (INDEX = 0; INDEX < MAX; INDEX++)//3
      {
            cout << "Enter 20 numbers: " << INDEX + 1 << ": ";
            cin >> stuff[INDEX];
      }
      for (INDEX = 0; INDEX < MAX; INDEX++)//4
      {
      	cout<<stuff[INDEX]<<endl;
	  }
	  for (INDEX = 19; INDEX >= 0; INDEX--)//5
      {
      	cout<<stuff[INDEX]<<endl;
	  }
	   for (INDEX = 0; INDEX < MAX; INDEX++)//6
      {
      	sum=sum+stuff[INDEX];
	  }
	  cout<<"the sum is "<<sum<<endl;
	  cout<<"the average is "<<sum/MAX<<endl;//7

	  for (INDEX = 0; INDEX < MAX; INDEX++)//9
      {
            stuff[INDEX]= stuff[INDEX] -1;
      }
      for (INDEX = 0; INDEX < MAX; INDEX=INDEX+2)//10
      {
            stuff[INDEX]= stuff[INDEX]/5;
      }
	  for(INDEX = 1;INDEX < MAX; INDEX++)//8
    {
       if(stuff[0] < stuff[INDEX])
           stuff[0] = stuff[INDEX];
    }
    cout << "Largest element = " << stuff[0]+1;
 
 
      return 0;
}

