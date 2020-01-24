//Guess the Word game
//CHRISTIAN SEYOUM
//5/9/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string origWord = "";
  string letter = "";
  char dashReplaced = 'N';
  char gameOver = 'N';
  int numIncorrect = 0;
  string displayWord = "--------";
  
  //get original Word
  while (origWord.length() !=8)
  {
    cout << "Enter a 8-letter word in UPPERCASE: ";
    getline(cin, origWord);
  } 
  
  //system("cls");  //clear the screen
  
  //start guessing
  cout << "Guess this word: " << displayWord << endl;
  while (gameOver == 'N')
  {
    cout << "Enter an uppercase letter: ";
    cin >> letter;
    
    //search for the letter in the orginal word
    for (int x = 0; x < 8; x +=1)
    {
      //if the current character matches 
      //the letter, replace the corresponding 
      //dash in the displayWord variable and then
      //set the dashReplaced variable to 'Y'
      if (origWord.substr(x,1) == letter)
      {
        displayWord.replace(x,1,letter);
        dashReplaced = 'Y';
      }
    }
    
    //if a dash was replaced, check whether the 
    //displayWord variable contains another dash
    if (dashReplaced == 'Y')
    {
      //if the displayWord variable does not 
      //contain any dashes, the gamae is gameOver
      if (displayWord.find("-",0) == -1)
      {
        gameOver = 'Y'; 
        cout << endl << "Yes, the word is " << origWord << endl;
        cout << "Great guessing!" << endl;
      }
      else
      {
        cout << endl << "Guess this word: " << displayWord << endl;
        dashReplaced = 'N';
      }
    }
    else
    {
      //add 1 to the number of incorrect guesses
      numIncorrect +=1;
      //if the number of incorrect guesses is 10,
      //the game is gameOver
      if (numIncorrect == 5)
      {
          gameOver = 'Y';
          cout << endl << "Sorry, the word is " << origWord << endl;
      }
    }
  }
  return 0;
}

