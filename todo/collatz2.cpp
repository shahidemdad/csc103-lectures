
// Task2: how to find what is the max value the n went to before it valued is 1.

#include <iostream>
using std::cout;
using std::cin;

  int main() {

    int n;

      //first we enter a number
      while(cin >> n) {
        int count = 0;//records numbers of steps
        int na = n;   //na means n after.
        int max = 0; // we assume max is 0.

        while(n != 1) { //we do not want n=1 because it will endup to 1 again.

            // to find the max value of the n we will do this:
            if ( n > max) {
                max = n;
            }

            //now we need seperate the number even or odd
            if(n % 2 == 0){//if the number is even do the following thing
              n=n/2;
            }//otherwise (which means the number is odd)do this:
            else
              n = 3*n + 1; // when the number is odd, this is the foloowing job to do.
              count++;
        }
        //then produce the result.
        cout << count << " steps for the interger " << na << "\n";
        cout << "the max value of " << na << " was " << max << " \n";
      }
    return 0;
  }