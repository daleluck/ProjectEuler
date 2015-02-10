#include <iostream>
using namespace std;

int main()
{
	long int squareSum = 0;
	long int sumSquare = 0;
	long int result = 0;

	// calculate square of the sum of the first 100 natural numbers
	for ( int i = 1; i <= 100; i++ )
	{
		squareSum += i;
	}
	squareSum = squareSum * squareSum;

	// calculate the sum of the square of the first 100 natural numbers
	for ( int i = 1; i <= 100; i++ )
	{
		sumSquare += (i * i);
	}

	// find the difference between the two
	result = squareSum - sumSquare;

	// output result
	cout << "Square of Sum:\t\t" << squareSum << endl;
	cout << "Sum of Squares:\t\t" << sumSquare << endl;
	cout << "Difference Between:\t" << result << endl;

	// exit program
	return 0;
}
