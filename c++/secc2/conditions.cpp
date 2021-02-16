#include <iostream>
using namespace std;

/*
 *  *== equality test
 *   *!= noy equals
 *    *< less than
 *     *>greater than
 *      * <= less than or equal
 *       */

 int main() {

 int value1 = 7;
 int value2 = 4;

if(value1 >= 5){
   cout << "Condition 1: true" << endl;
} else {
   cout << "Concition 1: false" << endl;
}

if (value1 == 7 && value2 < 3) {
     cout << "Condittion 2: true" << endl;
} else {
   cout << "Condittion 2: false" << endl;
}

 if (value1 == 7 || value2 < 3){
     cout << "Condittion 3: true" << endl;
} else {
  cout << "Condittion 3: false" << endl;
}

 if ((value2 != 8 && value1 == 10) || value1 < 10){
 cout << "Condittion 4: true" << endl;
} else {
  cout << "Condittion 4: false" << endl;
}

 bool condition1 = (value2 != 8) && (value1 == 10);
 bool condition2 = value1 < 10;

 if (condition1 || condition2) {
  cout << "Condition 5: true" << endl;
} else {
  cout << "Condition 5: false" << endl;
}

 
 return 0;
}
