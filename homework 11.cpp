#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void MoneyFunct(float &CashLeft, float StartBal, char TransacType,
float Transac, int Q);

int main() {
char TransacType;
float StartBal;
float Transac;
float CashLeft;
cout << "Enter your starting balance: ";
cin>>StartBal;
do {
cout << "Now enter your transaction."<<endl;
cout<<"Enter D for deposit and C for check"<<endl;
cout<< "Enter Q there are no more transactions" << endl;
cout << "Enter transaction type: ";
cin >> TransacType;
cout << "Enter the amount for your transaction: ";
cin >> Transac;

MoneyFunct(CashLeft,StartBal);
cout << "You have $" << CashLeft
<< " remaining in your account" << endl
<< "Your total service charges are "<<endl;
} 
while (TransacType != 'Q');
return 0;
}

void MoneyFunct(float &CashLeft, float StartBal, char TransacType,
float Transac, int Q, float TotalServiceCharge)
{
Q == 4;
if (TransacType == 'C') {
CashLeft = CashLeft - Transac;
} else if (TransacType == 'D') {
CashLeft = CashLeft + Transac;
}

if (CashLeft <= 50 && CashLeft >= 0) {
cout << "Your balance is lower than $50."<<endl;
cout<< "If your balance becomes negative "<<endl;
}

if (CashLeft < 0) {
cout << "Your balance has become negative." <<endl;
cout<< "A $10 charge will be subtracted "<<endl;
cout<< "from your balance." << endl;
}
}
