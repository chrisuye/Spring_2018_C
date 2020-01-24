#include <iostream>
using namespace std;
int main()
{
char opt;
// print menu
cout << "************************************" << endl;
cout << "1. French " << endl;
cout << "2. Spanish " << endl;
cout << "3. English " << endl;
cout << "4. American " << endl;
cout << "5. Japanese" << endl;
cout << "6. Quit " << endl;
cin >> opt;
switch(opt)
{
case '1':
cout << "Bonjour!" << endl;
break;
case '2':
cout << "Hola!" << endl;
break;
case '3':
cout << "Hello!" << endl;
break;
case '4':
cout << "Hi!" << endl;
break;
case '5':
cout << "Kon'nichiwa" << endl;
break;
case '6':
cout << "Quit" << endl;
break;
default:
cout << "Invalid option" << endl;
break;
}
return 0;
} 
