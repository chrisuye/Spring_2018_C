#include <iostream>
using namespace std;
//prototypes
int DemonstrateProc1();
int DemonstrateProc2(int num);
int main()
{
cout << "1. Execution starts with main. " << endl;
DemonstrateProc1();
cout << "3. Then we come here. " << endl;
DemonstrateProc2(100);
cout << "5. Finally we come here. "<< endl;
return 0;
}
//****************************
int DemonstrateProc1()
{
cout << "2. This is a sample procedure." << endl;
}
//****************************
int DemonstrateProc2(int num)
{
cout << "4. This is another sample procedure. " << endl;
cout << " num is an argument or parameter. " << endl;
cout << " The value of num is " << num << endl;
}
