#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
	// sum of all even Fibonnaci numbers smaller than or equal to 4 million
	long int a = 1, b = 0, c;
	long int total;

	// basically start with the first fibonacci number (1), keep going until it's >= 4,000,000
	for ( long int c = a + b; c < 4000000; c = a + b )
	{
		// if it's an even number, add it to the total
		if ( c % 2 == 0 ) total += c;
		// swap the "pointers" (not really) to the previous numbers in the series
		a = b; b = c;
	}


	// output the total
	cout << "Sum:\t" << total << endl;
	return 0;
}
