/* TODO: write a small program that reads 3 integers (from stdin, using
 * cin), and prints the *average* of the 3 to stdout (using cout).
 * TODO: do the same for 5 integers, but ONLY USE TWO VARIABLES! */


/* this is the first part of the todo, check 2.cpp for part 2 of todo */



#include<iostream>
using std::cout;
using std::cin;

int main() {
	int i;
	int j;
	int k;

		cin >> i >> j >> k;
		cout << "the averge of this 3 number is " << (i+j+k)/3 << "\n";

	return 0;
}
