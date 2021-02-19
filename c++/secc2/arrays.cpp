#include <iostream>
using namespace std;

 int main() {
  
  cout << endl << "Array of integers" << endl;
  cout << "--------------" << endl;
  
 int values[3]; 
   values[0] = 88;
   values[1] = 100;
   values[2] = 1;

  cout << values[0] << endl;
  cout << values[1] << endl; 
  cout << values[2] << endl;

  cout << endl << "Array of doubles" << endl;
  cout << endl << "-----------" << endl;


  double numbers[4] = { 4.5, 2.3, 7.2, 8.1};
for (int i = 0; i<4; i++){
  
cout << "Element at index" << i <<  " : " <<  numbers [i] << endl;
 
}   
 
 return 0;
}
