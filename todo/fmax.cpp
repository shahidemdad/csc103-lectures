
/* exercise: write two functions named "max" which return the
 * maximal value of all inputs.  One version should have two
 * parameters, and the other three. */

#include <iostream>
using std::cin;
using std::cout;

int max(int x, int y) {
  if (x > y)
    return x;
  else return y;

}

int max(int x, int y, int z) {
  if (x > y && x > z) return x;
  else if (y > x && y > z) return y;
  else if(z > x && z > y) return z;

}

int main() {
  /*int x,y;
  cin >> x >> y;*/
  int x,y,z;
  cin >> x >> y >> z;
  max(x,y);
  cout << max(x,y) << " is the maximum number from the first 2 interger.  \n";
  max(x,y,z);
  cout << max(x,y,z) << " is the maximum number among all input values. \n";

  return 0;
}