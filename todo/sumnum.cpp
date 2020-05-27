#include<iostream>
using std::cout;
using std::cin;

int main() {

  int input;
  int numb;
  int numa;
  int c=0;

  numb=0;

  while (c<5) {

    cin >> input;
    numa = input+ numb;
    numb=numa;
    c++;
    }

cout << "total sum is " << numa << "\n";

    return 0;
  }