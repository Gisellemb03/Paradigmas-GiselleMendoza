#include <iostream>
using namespace sdt;


int main (){
 string texts[] = {"one", "two", "three"};
 string *pTexts = texts;

 for (int i=0; i<sizeof(texts)/sizeof(string); i++){
   cout << texts[i] << " "  <<  flush;
}

cout << endl;
 
for (int i=0; i< sizeof(texts)/sizeof(string); i++; *pTexts++) {
 cout << *pTexts << " " << flush;

}
}
