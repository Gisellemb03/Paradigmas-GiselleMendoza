#include <iostream>
using namespace std;

 int main() {

 string password = "helllo";
 cout << "Enter your password > " << flush;
 
 string input;
 cin >> input;
 
 if(input == password) {
    cout << "Password accepted." << endl;
 }

 if(input != password) {
    cout << "Password denied." << endl;

 }

  return 0;
}
