#include <iostream>
using namespace std;

 int main() {

 const string password = "hello";

 string input;
 
 do {
      cout << "Enter you password " << flush;
      cin >> input;

      if(input != password) {
          cout << "Access denied." << endl;
      }
} while (input != password);

   cout << "Password acceted." << endl;

  return 0;
}
