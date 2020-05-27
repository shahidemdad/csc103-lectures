
// Task: how the collatz conjuncture works and how any numbers endup to 1.

#include <iostream>
using std::cout;
using std::cin;

  int main() {

    int n;

      //first we enter a number
      while(cin>>n) {
        int count=0;//records numbers of steps
        int na=n;   //na means n after.

        while(n != 1) { //we do not want n=1 because it will endup to 1 again.
          //now we need seperate the number even or odd
            if(n % 2 == 0){//if the number is even do the following thing
              n=n/2;
            }//otherwise (which means the number is odd)do this:
            else
              n = 3*n + 1;
              count++;
        }
        //then produce the result.
       cout << count << " steps for the interger " << na << "\n";
      }
    return 0;
  }
