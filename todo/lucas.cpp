/* Lucas sequences. */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* Lucas sequences (of the first kind).  For numbers P,Q, set
	 * U_n = P*U_{n-1} - Q*U_{n-2}.
	 * The first two terms are defined as 0 and 1, respectively.
	 * NOTE: this is a generalization of the fibonacci sequence
	 * (fibonacci is the special case of P==1,Q==-1).
	 * */
	/* TODO: write a program to compute terms of a lucas sequence for
	 * any values P,Q.  See the notes in l2.pdf if you need help with
	 * the idea, but try to write the code from scratch. */

	int input=0;
	int inputafter;
	int inputbefore=0;
	int c=0;

	// input a values inside a loop so this can runs till i want.
		while(cin>>input) {
					inputafter=input+inputbefore;
					inputbefore=inputafter;
					c++;
		}
		cout << "sum of the last two intergers is "<< inputafter << "\n";

	return 0;
}

// vim:foldlevel=1
