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
  cout << "Welcome " << first[0] << "." << last[0] << "., here is your fortune...\n";  
  
  lucky = first.length() + last.length();
  cout << "Your lucky number is " << lucky << endl;

  return 0;
}
