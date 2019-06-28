#include <iostream>

using namespace std;

// Function to return the nth Fibonacci number using recursion
// NOT THE MOST EFFECTIVE SOLUTION (time complexity)
int fiboSeries(int limit)
{
	// if number <= 1 the return such number
	if (limit <= 1)
		return limit;
	// else recursively find the number the return it
	return fiboSeries(limit - 1) + fiboSeries(limit - 2);
}

int main()
{
	int limit = 0;
	cout << "Return the 'nth' Fibonacci number: ";
	cin >> limit;
	fiboSeries(limit);
	cout << fiboSeries(limit);
	return 0;
}