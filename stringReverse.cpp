/***************
* Sam Graham
* This is from an interview I had recently.
****************/

#include <iostream>

int main(int pVal) {

  while( pVal > 0 ) {
    cout << pVal % 10;
    pVal = pVal / 10;
  }
  cout << endl;
  return 0;
}
