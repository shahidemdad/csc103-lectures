#include<iostream>
using std::cout;
using std::cin;

int main() {

  int a;
  int b;
  cin >> a >> b;

  /* how to do the program by using for loop*/

    for (int r = 0; r < a; r++) {

      for (int co = 0; co < b; co++) {
      cout << "*";
        }
      cout << "\n";
      }
  return 0;
  }


    /* this code is for the "while" loop!
  int a;
  int b;
  int c=0;

  cin  >> a >> b;

  int r = 0, co;
  while ( r < a) {

      co = 0;
      while ( co < b) {
      cout << "*";
      co++;
      }
      cout << "\n";
      r++;
    }*/

