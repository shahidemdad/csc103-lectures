/* TODO: write a program that reads two integers n,m and draws an n x m
 * hollow rectangle of '*' characters.  E.g., on input n=4,m=7, the result
 * would look like this: */

// * * * * * * *
// *           *
// *           *
// * * * * * * *

/* NOTE: place spaces between the characters to compensate for the fact that
 * most terminal fonts are taller than they are wide.
 * */
#include <iostream>
using std::cout;
using std::cin;

int main() {

  int i=0;//length
  int j=0;//width

  //my input
  cin >> j >> i;

  //first for is just to cout my * till my row input
  for (int r=0; r < i; r++) {
    // this for loop is for co  to repeat the job
    for (int c=0; c < j; c++) {
        if ( r==0 || r == i-1 || c == 0 || c==j-1)
          cout << "*";
        else
          cout << " ";
      }
    cout << "\n";
  }
  return 0;
}