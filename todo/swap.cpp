#include <iostream>
using std::cin;
using std::cout;

/* exercise: write a function that takes two integers and
 * swaps the values.  That is, after calling swap(x,y),
 * x will have whatever value y had before the call, and y
 * will have whatever value x had before the call. */
void swap(int& x, int& y);
void swap(int& x, int& y){

  int z = x;
  x = y;
  y = z;

}

int main() {

  int x,y;
  cin >> x >> y;
  swap(x,y);
  cout << x << "and" << y << "\n";
  return 0;
}