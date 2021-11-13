#include "calculations.h"

int main()
{

	int choice = 1, base, power, numterms;
	long long int sum, powerresult;
	while (choice != 4)
	{
		cout << "1) To find the Power calculation, press 1.\n"; 
		cout << "2) To find the sum of the squares for the first n terms of the series from 1 to n, press 2.\n";
		cout << "3) To find the sum of the squares for the first n terms of the series from n to 1, press 3.\n";
		cout << "4) To exit the program, press 4.\n";

		cin >> choice;

		if (choice == 4)
			break;

		switch (choice)
		{

		case 1: cout << "Enter the values of the base and the power: \n"; //Test Data: Test 1) base = 4 and power = 6. Result was 4096. Test 2) base = 2 and power = 10. Result was 1024.
			cin >> base >> power;

			if (power < 0)
			{
				cout << "The power value must be whole number. Please select the power calculation menu option and try again.\n"; //Test Data: Test 1) Entered -2 and received the output. Program went back to menu. Test 2) Entered -100 and received the output. Program went back to the menu. 
				break;
			}

			powerresult = Power(base, power);
			cout << base << " to the power of " << power << " equals " << powerresult << "\n\n";
			break;

		case 2: cout << "Please enter the number of terms: \n"; //Test Data: Test 1) number of terms = 5. Result was 1 + (2*2) + (3*3) + (4*4) + (5*5) = 55. Test 2) number of terms = 3. Result was 1 + (2*2) + (3*3) = 14
			cin >> numterms;

			if (numterms < 0)
			{
				cout << "The number of terms must be a positive number. Please select the 2nd menu option and try again.\n"; //Test Data:Test 1) Entered -76 and received the output. Program went back to menu. Test 2) Entered -32 and received the output. Program went back to the menu. 
				break;
			}

			sum = SeriesFromOneToN(numterms);
			cout << " = " << sum << "\n\n";
			break;

		case 3: cout << "Please enter the number of terms: \n"; //Test Data: Test 1) number of terms = 7. Result was (7*7) + (6*6) + (5*5) + (4*4) + (3*3) + (2*2) + 1 = 140. Test 2) number of terms = 4. Result was (4*4) + (3*3) + (2*2) + 1 = 30
			cin >> numterms;

			if (numterms < 0)
			{
				cout << "The number of terms must be a positive number. Please select the 3rd menu option and try again.\n\n"; //Test Data:Test 1) Entered -9 and received the output. Program went back to menu. Test 2) Entered -98 and received the output. Program went back to the menu. 
				break;
			}

			sum = SeriesFromNToOne(numterms);
			cout << " = " << sum << "\n\n";
			break;

		default: cout << "You have entered an choice that is invalid. Please try again and select an option between 1 and 4.\n\n"; //Test Data: Test 1) Entered -5 and received the output. Program went back to menu.Test 2) Entered 10 and received the output.Program went back to the menu.

		}

	}

	cout << "\n";
	return 0;
}
