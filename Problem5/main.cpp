#include <iostream>
using namespace std;

int main()
{
	bool contFlag = false;

	// the max value for i is an arbitrary number - mainly because I didn't want it to run infinitely by accident
	// replace the arbitrary number with "i > 0", and it'll run just fine
	for ( int i = 20 ; i < 100000000000000; i++ )
	{
		// the problem wants it to be checked with all values 1-20
		for ( int j = 1; j <= 20; j++ )
		{
			// if it didn't divide easily, stop checking this value of i
			if ( i % j != 0 ) break;

			// if it managed to divide evenly with all numbers...
			if ( j == 20 )
			{
				// output the total and quit the program
				cout << "Number:\t" << i << endl;
				return 0;
			}
		}
	}

	cout << "Unable to find the number. Sorry." << endl;
	return 1;
}
