//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last;
  int lucky, lastLetter;

  //get user input
  cout << "What is your first name?\n";
  cin >> first;
  cout << "What is your last name?\n";
  cin >> last;

  //tell fortune
  cout << "Welcome " << first[0] << "." << last[0] << "., here is your fortune...\n";  
  
  lucky = first.length() + last.length();
  cout << "Your lucky number is " << lucky << endl;

  if ( first[0] == 'A' 
    || first[0] == 'E' 
    || first[0] == 'I'
    || first[0] == 'O'
    || first[0] == 'U'
    || first[0] == 'a'
    || first[0] == 'e'
    || first[0] == 'i'
    || first[0] == 'o'
    || first[0] == 'u' )
  {
  cout << "You are destined to be famous.\n";
  }
  else
  {
  cout << "You should keep a low profile.\n";
  }

  lastLetter = last.length()-1 ;
  if ( lastLetter == 'A'
    || lastLetter == 'E'
    || lastLetter == 'I'
    || lastLetter == 'O'
    || lastLetter == 'U'
    || lastLetter == 'a'
    || lastLetter == 'e'
    || lastLetter == 'i'
    || lastLetter == 'o'
    || lastLetter == 'u' )
  {
  cout << "You have already met your true love.\n";
  }
  cout << "Have a good day!\n";

  return 0;
}
