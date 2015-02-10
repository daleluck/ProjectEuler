#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	long int total = 0;

	// check every number in range 0 <= i < 1000
	for ( int i = 0; i < 1000; i++ )
	{
		// if it's a sum of 3 or 5, count it in the total
		if ( i % 3 == 0 || i % 5 == 0 )
		{
			total += i;
		}
	}

	// output final total
	cout << "Sum:\t" << total << endl;
	return 0;
}
