#include <iostream>

using namespace std;

// Function to return the nth Fibonacci number using recursion
// NOT THE MOST EFFECTIVE SOLUTION (time complexity)
int fiboNumber(int limit)
{
	// if number <= 1 the return such number
	if (limit <= 1)
		return limit;
	// else recursively find the number the return it
	return fiboNumber(limit - 1) + fiboNumber(limit - 2);
}

// Print out series, incomplete
void fiboSeries(int limit)
{
	int pt1 = 0, pt2 = 1, term = 0;
	for (int i = 1; i <= limit; i++)
	{
		if (limit <= 1)
			term = limit;
		else
		{
			term = pt1 + pt2;
			pt1 = pt2;
			pt2 = term;			
		}
		cout << term << " ";
	}
}

int main()
{
	int option = 0;
	cout << "What do you need, pick a number: " << endl;
	cout << "(1) Return the nth Fibonacci number." << endl;
	cout << "(2) Print out the whole series up to nth number." << endl;
	cin >> option;
	if (option == 1)
	{
		int limit = 0;
		cout << "Return the 'nth' Fibonacci number: ";
		cin >> limit;
		fiboNumber(limit);
		cout << fiboNumber(limit);
	}
	else
	{
		int limit = 0;
		cout << "Print out the whole series up to nth number: ";
		cin >> limit;
		fiboSeries(limit);
	}	
	return 0;
}