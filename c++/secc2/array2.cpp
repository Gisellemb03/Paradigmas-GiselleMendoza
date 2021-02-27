#include <iostream>
using namespace std;

 int main() {

 int values[] = {4, 7, 3, 4 };
 cout << sizeof(values) << endl;
 cout << sizeof(int) << endl;

 int SIZE = sizeof(values)/sizeof(int);
 cout << "Size : " << SIZE << endl;

 for (int i=0; i < SIZE; i++){
 cout << values[i] << " " << flush;
}


  return 0;
}
