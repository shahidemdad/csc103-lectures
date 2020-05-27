
/* TODO: write a *function* that takes an integer n and returns the
 * nth term in the Fibonacci sequence. */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sequence(int n);

int sequence(int n) {
  int first = 1;
  int second = 1;
  int next = 0; //this is to save my next term

  if ( n == 1  || n == 2)
    next = 1; //special case for the sequence

  for(int i=0; i < n; i++) {
    next = first + second;
    second = first;
    first = next;
  }
  return next;
}

int main() {

  int n;
  while ( cin >> n) {
    cout << "the " << n << " term is " << sequence(n)<<endl;
  }
  return 0;
}