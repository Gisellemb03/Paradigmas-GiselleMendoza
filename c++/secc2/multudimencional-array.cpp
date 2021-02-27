#include<iostream>
using namespace sdt;
  
int main() {

  //Array de string
  //
  string animals[2][3] = {
    {"fox", "dog", "cat"},
    {"mouse", "squirrel", "parrot"}
};
 
 for (int i=0; i<2; i++){ //i renglones
  for(int j=0; j<3; j++){ //j columnas
   cout << animals[i][j] << " " << flush;
 }
  cout << endl;
}
 return 0;
}
