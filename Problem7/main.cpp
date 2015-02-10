#include <iostream>
using namespace std;

int main()
{
	int counter = 0;
	int countTo = 10001;
	bool flag = false;

	// set to run forever (the loop will break once it's finished anyway)
	for ( long int i = 2; i > 0; i++ )
	{
		// reset the flag
		flag = false;

		// if we've reached the correct prime, print and stop
		if ( counter == countTo )
		{
			cout << "The " << countTo << "th prime number is " << i-1 << endl;
			break;
		}

		// to find the prime:
		// - check to see if there are any numbers that i evenly divides into
		// - the number mustn't be 1 (so start at 2) or i (so stop just before)
		// - if it does evenly divide, just break the loop because it's not a prime
		for ( int j = 2; j < i; j++ )
		{
			if ( i % j == 0 )
			{
				flag = true;
				break;
			}
		}

		// if it was found not to be a prime, the flag was set, so skip counting it
		if ( flag ) continue;

		// otherwise, a prime was found, and should be noted
		counter++;
	}

	return 0;
}
