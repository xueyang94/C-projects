//ask the user for a number between 1 and 9. If the user does not enter a number between 1 and 9, repeatedly ask for
//an integer value until they do. Once they have entered a number between 1 and 9, print that array. Then search the array
//for the value that the user entered and print the index of that element.
//source: LearnCpp.com 6.3 Arrays and loops Practice (2)

#include <iostream>

using namespace std;

int main()
{
	int array[] = { 4,6,7,3,8,2,1,9,5 };
	int number;
	do
	{
		cout << "give me a number between 1 and 9: ";
		cin >> number;
	} while (number < 1 || number>9);


		for (int n=0; n < size(array); n++)
		{
			if (array[n] == number)
			{
				for (int whatever : array)
					cout << whatever << ' ';
				cout << endl;
				cout << n;
				cin.get();
				break;
			}

	     }

	cin.get();
}
