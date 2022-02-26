#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn()
{
  string username, password, un, pw;
  cout << "Enter username: "; cin >> username;
  cout << "Enter password: "; cin >> password;

  ifstream read("c:\\" + username + ".txt") //this will be what the username file will be called
  getline(read, un);
  getline(read, pw);

  if (un == username && pw == password) //If username and password is true, then returns true or false
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int choices;

  cout << "1. Register\n2:Login\nWhich option would you like to go with?\nChoice: "; cin >> choices;
  if (choices == 1)
  {
    string username, password;

    cout << "Please enter your data below" << endl;
    cout << "Select a username: " cin >> username;
    cout << "Select a password: " cin >> password;

    ofstream file;
    file.open("data\\" + username + ".txt");

    file << username << endl << password;
    file.close();

    main(); //return back to add new username and password
  }
  else if (choice == 2)
  {
    bool status = IsLoggedIn();

    if (!status)
    {
      cout << "Login is incorrect, please try again." << endl;
      system("PAUSE");
      return 0;
    }
    else
    {
      cout << "Logged in" << endl;
      system("PAUSE");
      return 1;
    }
  }
}
