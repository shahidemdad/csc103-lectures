/* testing out vectors... */
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* read strings from stdin and print them in reverse order. */
	string s; /* for input */
	vector<string> V; /* each V[i] will be of type string */
	while (cin >> s) {
		V.push_back(s);
	}
	/* now print in reverse order: */
  for (size_t i = V.size()-1; i != (size_t)-1; i--) {
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0;
}

/* TODO: write a function that takes a vector and searches for
 * a particular value x, returning true if and only if x is found. */
/* TODO: write a function that takes a vector V of integers which
 * is *sorted*, and produces a vector of the unique integers from V.
 * E.g., if V = {1,2,2,3,3,3,4}, then the result should
 * be {1,2,3,4}.  Ideally, modify the vector *in-place*.
 * That is, modify the vector V that is given to the function directly,
 * and don't create any new vectors.  As a warm up: return a new vector with
 * the
 * result.
 * */
/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */
/* TODO: write a function that takes a vector and places the elements
 * in sorted order.  Warning: this could be kind of challenging.  There is
 * a solution in l3.pdf, but you should try to come up with something on
 * your own first if possible. */
