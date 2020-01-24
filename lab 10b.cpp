//Christian Seyoum
//4/11/2018
#include <iostream>
using namespace std;
int Square(int x);			//Function Prototype
void CalcCube(int x, int &cube);	//Function Prototype
 
int main()
{
      int square,number, cube;
     
      cout << "Enter number, 0 to quit" << endl;
      cin >> number;
      while(number != 0)
      {
            square = Square(number);//this is a function
            CalcCube(number, cube);  //this is a procedure
            cout << number << " squared is " << square 
                           << " cubed is " << cube << endl;
            cout << "Enter number, 0 to quit" << endl;
            cin >> number;
      }
      return 0;
}

int Square(int x) 
{
    int result;
    
    result = x * x;
    return (result);
    
}

void CalcCube(int x, int &cube)     
{
    
    cube = x * x * x;
     
}

