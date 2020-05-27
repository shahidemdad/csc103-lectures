#include<iostream>
using std::cout;
using std::cin;

int main() {

  int a;
  int b;
  int min;

  cout << "Enter 2 intergers :\n";
  cin >> a >> b;

  if (a > b) {
    min = a;
    } else {
      min = b;
      }
  while(min != 0) {

    if (a%min == 0 && b%min == 0) {
      break;
      }
      min--;
    }

    cout << min << " is the gcd of " << a << " and " << b << "\n";

    return 0;

  }