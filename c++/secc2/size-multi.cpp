#include <iostream>
using namespace std;

 int main() {

 string animals[2][3] = {
  {"fox", "dog", "cat"},
 {"mouse", "squirrel", "parrot"}
};

cout << sizeof(string) << endl;
cout << sizeof(animals) << endl;
cout << sizeof(animals[0]) << endl;
cout << sizeof(animals[0][0]) << endl;

 int rows = sizeof(animals)/sizeof(animals[0]);
 int cols = sizeof(animals[0])/sizeof(string);
 
 cout << "rows: " << rows << endl;
 cout << "cols: " << cols << endl;

 for (int i=0; i<rows; i++){
  for(int j=0; j < cols; j++){
   cout << animals[i][j] << " " << flush;
}
 cout << endl;
}
  return 0;
}
