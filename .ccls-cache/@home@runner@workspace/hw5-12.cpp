//hw5-12.cpp - displays the total owed
//Created/revised by Jake Gruber on 18 Feb

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//declare constants and variables

	double price1;
	double price2;
	double amount;

	//enter input data

	cout << "Enter the price of the first item: $";
	cin >> price1;
	cout << "Enter the price of the second item: $";
	cin >> price2;

	//make sure the 2nd item is the lower priced of the two for the discount

	if (price1 < price2){

		double temp = 0.0;
		temp = price1;
		price1 = price2;
		price2 = temp;
	}//end if

	//calculate and display the total amount owed

	amount = price1 + (price2 / 2);
	cout << "Total amount owed: $" << fixed << setprecision(2) << amount << endl;
	
	return 0;
}	//end of main function