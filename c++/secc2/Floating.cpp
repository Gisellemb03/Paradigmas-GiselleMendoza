#include <iostream>
#include <iomanip>

using namespace std;

 int main() {

 float fValue = 123.456789;
 
 cout << "Size float: " << sizeof(float) << endl;
 cout << setprecision(20) << fixed << fValue << endl;
 
 double dValue = 123.456789;
 cout << setprecision(20) << fixed << dValue << endl;

 double long lValue = 123.4567898765543210;
 cout << setprecision(20) << fixed << lValue << endl;
 cout << "Size long double: " << sizeof(lValue) << endl;

 return 0;
}
