
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[ ] Prompt the user to input five numbers.
		[ ] Store the input into either an array or a vector.
		[x] Once the user is finished entering numbers:
			[x] Display the five numbers in reverse order.
			[x] Display the highest number entered.
			[x] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;
	
    const int SIZE = 5;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter your first number? ";
		cin >> arr[i];
	}
	for (int i = SIZE; i > 0 ; i--)
	{
		cout << arr[i] << endl;
	}
	

	_getch();
	return 0;
}
