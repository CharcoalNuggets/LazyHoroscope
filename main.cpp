//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last;
  int lucky;

  //get user input
  cout << "What is your first name?\n";
  cin >> first;
  cout << "What is your last name?\n";
  cin >> last;

  //tell fortune
  cout << "Welcome, " << first[0] << "." << last[0] << "., here is your fortune...\n";  
  
  lucky = first.length();
  cout << "your lucky number is " << lucky << endl;

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
  cout << "you are destined to be famous!\n";
  }
  else
  {  
  cout << "you should keep a low profile.\n";
  }

  if ( last[last.length()-1] == 'A'
    || last[last.length()-1] == 'E'
    || last[last.length()-1] == 'I'
    || last[last.length()-1] == 'O'
    || last[last.length()-1] == 'U'
    || last[last.length()-1] == 'a'
    || last[last.length()-1] == 'e'
    || last[last.length()-1] == 'i'
    || last[last.length()-1] == 'o'
    || last[last.length()-1] == 'u' )
  {
  cout << "you have already met your true love.\n";
  }
  cout << "have a good day!\n";

  return 0;
}
