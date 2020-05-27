/* TODO: write a small program that reads 3 integers (from stdin, using
 * cin), and prints the *average* of the 3 to stdout (using cout).
 * TODO: do the same for 5 integers, but ONLY USE TWO VARIABLES! */


/* this is the first part of the todo, check 2.cpp for part 2 of todo */



#include<iostream>
using std::cout;
using std::cin;

int main() {

  int output;
  int input;
	int c = 0;

  /* this is for ulimites submitting intergers
    please look the below for a limited intergers*/

  cout << "enter integers (enter 0 to exit): " << "\n";

    while (cin >> input) {

      output = output+input;
      c++;
      if (input ==0)
      break;
    }
      cout << "sum of the numbers is " << output << "\n";
      cout << "average of the number is " << output/c << "\n";

    /* if we wanted for a limited intergers*
        use this code:
    int main() {
    ....
    ...
      while (c<5) {
      cin >> input;
      output=output+input;
      c++;
    }

    cout << "sum of the numbers is " << output << "\n";
    cout << "average of the number is " << output/5 << "\n";

    return 0;

    */

      return 0;

    }


