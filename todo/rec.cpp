
//the purpose is to make rectangle of stars of any size.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

  int l; //length
  int w; //width

  //asking for input
  cout << "enter the sizes: \n";
  //entering input
  cin >> l >> w;

  //to do the job of stars loops we will use for loops
  for(int i = 0; i < l; i++) { // i is to sput the border for the length
    for( int j = 0; j < w; j++) { // j is to put the border for the width
      // now to apply the rules where do I want the starts or not
      if ( i == 0 || i == l-1 || j == 0 || j == w-1) // this is to determine only where the starts will pop up (ex. first row & co. and last row & co.)
        cout << "*";
      else
        cout << " "; // this is for the space to make it triangle.
    }
    //to go to the next line we need to put endl
    cout << endl;
  }
  return 0;
}