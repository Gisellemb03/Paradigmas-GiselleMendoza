#include <iostream>
using namespace std;


void manipulate(double value) {
   value = 10.0;
   cout << "Value of double in manipule() " << endl;
}
int main() {
 
    int nValue =8;
    int* pnValue = &nValue;

    int* pnValue = &nValue;

   cout << "Int value: " << nValue << endl;
   cout << "Pointer to int address: " << pnValue << endl;

   cout << "Int value pointer: " << *pnValue << endl;
  
   cout << "===============" << endl;

   double dValue = 123.4;
   cout << "1. dValue before: " << dValue << endl;
 
   manipulate(&dValue);

   cout << "2. dValue after: " << dValue<< endl; 

     return 0;

} 
