#include <iostream>
using namespace std;
int main() {
	//STORE:
	enum Menu { StringOfCode = 1, delayCount, Earning, Exit };
	int choose;
	const int FINE_PER_DELAY = 20;
	const int STRING_OF_CODE = 100;
	const int EARNING_PER_STRINGS100 = 50;
	int numThirdDelay;
	int totalStringOfCode;
	int totalIncome, netIncome, fine;
	int strings_written, numDelays, desiredIncome, numDelaysAllowed;
	bool paid;

	do {

		cout << "=========== Menu ===========\n"
			 << "1. Calculate Strings of Code:\n"
			 << "2. Calculate Delay Count:\n"
			 << "3. Calculate Earnings and Payment:\n"
			 << "4. Exit:\n"
			 << "Choose an option: ";
		cin >> choose;
		switch (choose) {

			case StringOfCode:
				//INPUT
				cout << "Enter desire income = $";
				cin >> desiredIncome;
				cout << "Enter number of delays = ";
				cin >> numDelays;
				//PROCESS:
				strings_written = (desiredIncome / EARNING_PER_STRINGS100) * STRING_OF_CODE;
				numThirdDelay = strings_written / 300;
				totalStringOfCode = strings_written + (numThirdDelay * numDelays);
				//OUTPUT
				cout << "Number of code required: " << totalStringOfCode << endl;
				break;
			case delayCount:
				//INPUT:
				cout << "Enter strings of code written by Vasya: ";
				cin >> strings_written;
				cout << "Enter desired amount of salary : $ ";
				cin >> desiredIncome;

				//PROCESS:
				totalIncome = (strings_written / STRING_OF_CODE) * EARNING_PER_STRINGS100;
				numDelaysAllowed = (strings_written / 300);

				//DISPLAY:
				cout << "Vasya's total income: $ " << totalIncome << endl;
				cout << "Number of delays allowed: " << numDelaysAllowed << endl;
				break;

			case Earning:
				//INPUT:
				cout << "Enter strings of code: ";
				cin >> strings_written;
				cout << "Enter number of delays: ";
				cin >> numDelays;
				//PROCESS:
				totalIncome = (strings_written / STRING_OF_CODE) * EARNING_PER_STRINGS100;
				fine = (numDelays / 3) * FINE_PER_DELAY;
				netIncome = totalIncome - fine;
				paid = (netIncome >= 0) ? true : false;

				//DISPLAY
				cout << "Vasya's total earnings: $" << netIncome << endl;
				cout << "Paid: " << (paid ? "Yes" : "No") << endl;
				break;

			case Exit:
				cout << "Exiting program, Bye..!" << endl;
				exit(0);
			default:
				cout << "Invalid option..!" << endl; //Input incorrect 
				break;
			}

	} while (choose != Exit);

	return 0;

}
