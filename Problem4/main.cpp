#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

// function for converting the number to a string, so that we can check each "digit" as a character
// possible to do this without converting it first and using modulus, but this is the first thing
// that came to mind
bool isPalindrome(long int value)
{
	int length;

	// convert the passed number to a string
	string checker;
	ostringstream converter;
	converter << value;
	checker = converter.str();

	// store the length of the string
	length = strlen(checker.c_str());

	// checks either end of the string, and if any pairs don't match return false
	for ( int i = 0; i <= length/2; i++ )
	{
		if ( checker[i] != checker[(length-1)-i] )
			return false;
	}

	// if it got to this point, the number was a palindrome
	return true;
}

int main()
{
	long int highest = 0;
	long int current = 0;

	// since we're only counting 3-digit numbers, it must be in the range 100 <= i <= 999
	for ( int i = 999; i >= 100; i-- )
	{
		// same range here, since we're checking every 3-digit pair
		// potential improvement: don't recheck pairs (i.e. 105x600 and 600x105 are the same)
		for ( int j = 999; j >= 100; j-- )
		{
			// calculate the number
			current = j * i;

			// check if it's a palindrome
			if ( isPalindrome(current) )
			{
				// store it as the highest if it beats the old stored value
				if ( current > highest )
					highest = current;
			}

			// if it wasn't a palindrome, just continue the loop
			else continue;
		}
	}

	// output the total
	cout << "Highest:\t" << highest << endl;
	return 0;
}
