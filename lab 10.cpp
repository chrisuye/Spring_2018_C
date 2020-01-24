//Chrisitan Seyoum
//4/11/2018
//**************************************************
//**************************************************
#include <iostream>
using namespace std;
void ShowMeTheNumber( int );                     // Function prototype

int main()
{
    ShowMeTheNumber( 2 );//actual argument
    cout << "Towson University " << endl;
    ShowMeTheNumber( 1);//actual argument
    cout << "Computer Science " << endl;
    ShowMeTheNumber( 1);//actual argument
    cout << "COSC 175 " << endl;
    ShowMeTheNumber( 2);//actual argument
    return 0;
}

//Function that prints  dollar sign - # 
void ShowMeTheNumber( int numLines )//formal argument
{
    int line;      // Loop control variable
 
    for (line = 0; line < numLines; line++)
    {
        cout << "######################################" << endl;
    }
}

