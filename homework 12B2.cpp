//christian seyoum
#include <iostream>
using namespace std;

int main()
{
      const int MAX=20; 
	  int   tests[MAX],num; // array declaration
	  int INDEX,i;
      float sum=0;
             
      cout << "Enter " << 20 << " test scores: " << endl;
      for (INDEX = 0; INDEX < MAX; INDEX++)
      {
            cout << "Enter 20 numbers: " << INDEX + 1 << ": ";
            cin>>num;
            if(num==999)
            {
            	break;
			}
			else
			{
				tests[INDEX]=num;
			}
        }
      
	   for (i = 0; i < INDEX; i++)
      {
      	sum=sum+tests[i];
	  }
	  cout<<"the average is "<<sum/INDEX<<endl;
	  
 
 
      return 0;
}

