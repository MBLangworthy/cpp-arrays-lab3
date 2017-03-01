
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[x] Prompt the user to input five numbers.
		[x] Store the input into either an array or a vector.
		[x] Once the user is finished entering numbers:
			[x] Display the five numbers in reverse order.
			[ ] Display the highest number entered.
			[ ] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	
	int a;
	cout << "Enter the amount of numbers you want to display ";
	cin >> a;
    //const int SIZE = 5;
	int *arr = new int[a];

	for (int i = 0; i < a; i++)
	{
		cout << "Enter a number? ";
		cin >> arr[i];
	}
	for (int i = a - 1; i > -1 ; i--)
	{
		cout << arr[i] << endl;
	}
	std::sort(arr, arr + a);
	cout <<"This is the lowest number " << arr[0] << endl;
	std::sort(arr, arr + a, std::greater<int>());
	cout << "This is the highest number " << arr[0];
	_getch();
	return 0;
}
