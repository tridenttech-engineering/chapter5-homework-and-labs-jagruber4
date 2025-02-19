//lab5-2.cpp - displays the total amount due
//Created/revised by Jake G on 18 Feb

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables and constants
	
	const double discRate = 0.1;
	const double shippingRate1 = 0.99;
	const double shippingRate2 = 4.99;
	double amtOwed = 0.0;
	char member = ' ';

	//Enter input data

	cout << "Enter the amount owed before any discount and shipping: ";
	cin >> amtOwed;

	cout << "Is the customer a Premier Club Member? (Y/N): ";
	cin >> member;

	//Calculate discounts if appropriate

	if (member == 'Y')

		amtOwed = amtOwed - (amtOwed * discRate);
			
	 //end if

	//Add shipping

	if (amtOwed > 100.0) 

		amtOwed = amtOwed + shippingRate1;
		
	else 

		amtOwed = amtOwed + shippingRate2;
		
	//end if

	//Display final amount owed

	cout << "Total amount owed: $" << fixed << setprecision(2) << amtOwed << endl;

	return 0;
}	//end of main function