/*
	Developer : Roeun keovisal
	Date : 16/02/2024
*/
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{
	/*
	* char symbol;
	string result;
	bool valid = true;

	//INPUT:
	cout << "Input the symbol = ";
	cin >> symbol;

	//PROCESS:
	if (isalpha(symbol)) {
		result = "The symbol is a Letter ";
	}
	else if(isdigit(symbol)){
		result = "The symbol a is Number ";
	}
	else if (ispunct(symbol)) {
		result = "The symbol is a punctuation mark ";
	}
	else {
		result = "The symbol is something else..!!";
	}


	//RESULT:
	if (valid) {
		cout << result << symbol << endl;
	}
	else {
		valid = false;
		cout << "Invalid input..!!" << endl;
	}
	
	*/


	/*
	* 	//STORE:
	enum Menu{ MobileA=1,MobileB, MobileC };
	const double operatorA_rate = 0.5;
	const double operatorB_rate = 0.7;
	const double operatorC_rate = 0.9;
	string result;
	bool valid = true;
	double costOfcall;
	double totalCost;
	int choice;

	//INPUT:
	cout << "============MENU=========" << endl;
	cout << "1. Mobile Operator A" << endl;
	cout << "2. Mobile Operator B" << endl;
	cout << "3. Mobile Operator C" << endl;
	cout << "Input the cost of call = ";
	cin >> costOfcall;
	cout << "Please choice one option = ";
	cin >> choice;
	cout << fixed << setprecision(2);
	//PROCESS:
	switch (choice)
	{
		case MobileA:
			totalCost = costOfcall * operatorA_rate;
			break;
		case MobileB:
			totalCost = costOfcall * operatorB_rate;
			break;
		case MobileC:
			totalCost = costOfcall * operatorC_rate;
			break;

		default:
			cout<<"Invalid operator choice." << endl;
			return 1;
	}
	//OUPUT:
	if (valid) {
		cout <<"Total cost of the call: $" << totalCost << endl;
	}
	else {
		cout << "Invalid..!!" << endl;
	}
	
	*/


	////STORE:
	//enum Menu { StringOfCode = 1, delayCount, Earning, Exit };
	//int choose;
	//const int FINE_PER_DELAY = 20;
	//const int STRING_OF_CODE = 100;
	//const int EARNING_PER_STRINGS100 = 50;
	//int numThirdDelay;
	//int totalStringOfCode;
	//int totalIncome, netIncome, fine;
	//int strings_written, numDelays, desiredIncome, numDelaysAllowed;
	//bool paid;

	//do {

	//	cout << "=========== Menu ===========\n"
	//		<< "1. Calculate Strings of Code:\n"
	//		<< "2. Calculate Delay Count:\n"
	//		<< "3. Calculate Earnings and Payment:\n"
	//		<< "4. Exit:\n"
	//		<< "Choose an option: ";
	//	cin >> choose;
	//	switch (choose) {

	//	case StringOfCode:
	//		//INPUT
	//		cout << "Enter desire income = $";
	//		cin >> desiredIncome;
	//		cout << "Enter number of delays = ";
	//		cin >> numDelays;
	//		//PROCESS:
	//		strings_written = (desiredIncome / EARNING_PER_STRINGS100) * STRING_OF_CODE;
	//		numThirdDelay = strings_written / 300;
	//		totalStringOfCode = strings_written + (numThirdDelay * numDelays);
	//		//OUTPUT
	//		cout << "Number of code required: " << totalStringOfCode << endl;
	//		break;
	//	case delayCount:
	//		//INPUT:
	//		cout << "Enter strings of code written by Vasya: ";
	//		cin >> strings_written;
	//		cout << "Enter desired amount of salary : $ ";
	//		cin >> desiredIncome;

	//		//PROCESS:
	//		totalIncome = (strings_written / STRING_OF_CODE) * EARNING_PER_STRINGS100;
	//		numDelaysAllowed = (strings_written / 300);

	//		//DISPLAY:
	//		cout << "Vasya's total income: $ " << totalIncome << endl;
	//		cout << "Number of delays allowed: " << numDelaysAllowed << endl;
	//		break;

	//	case Earning:
	//		//INPUT:
	//		cout << "Enter strings of code: ";
	//		cin >> strings_written;
	//		cout << "Enter number of delays: ";
	//		cin >> numDelays;
	//		//PROCESS:
	//		totalIncome = (strings_written / STRING_OF_CODE) * EARNING_PER_STRINGS100;
	//		fine = (numDelays / 3) * FINE_PER_DELAY;
	//		netIncome = totalIncome - fine;
	//		paid = (netIncome >= 0) ? true : false;

	//		//DISPLAY
	//		cout << "Vasya's total earnings: $" << netIncome << endl;
	//		cout << "Paid: " << (paid ? "Yes" : "No") << endl;
	//		break;

	//	case Exit:
	//		cout << "Exiting program, Bye..!" << endl;
	//		exit(0);
	//	default:
	//		cout << "Invalid option..!" << endl; //Input incorrect 
	//		break;
	//	}

	//} while (choose != Exit);

	

	/*
	//store:
	int A;
	int sum = 0;
	//Input;
	cout << "Enter the value of A: ";
	cin >> A;
	//process Loop
	for (int i = A; i <= 500; ++i) {
		sum += i;
	}

	//result:
	cout << "Sum of integers from " << A << " to 500 is: " << sum << endl;



	*/
	
	//	float base, exponent, result;

	//	cout << "Enter base and exponent respectively: ";
	//	cin >> base >> exponent;

	//	result = pow(base, exponent);
	//cout << base << "^" << exponent << " = " << result << endl;
	

	// //store
	//int sum = 0;
	//int count = 0;
	//double average;

	////process loop;
	//for (int i = 1; i <= 100; i++) {
	//	sum += i;
	//	count++;
	//}
	////Calculate the average
	//average = static_cast<double>(sum) / count;
	////result:
	//cout << "Average of integers from 1 to 1000: " << average << endl;





	//	//store
	//int A;
	//bool valid = true;
	//long long  product = 1;
	////input
	//cout << "Enter the value of A ( 1 <= A <= 20) : ";
	//cin >> A;

	////validate input from A
	//for (int i = A; i <= 20; ++i) {
	//	product *= i;
	//}

	////result check
	//if (A < 1 || A > 20) {
	//	valid = false;
	//	cout << "Invalid input,Please enter a value between 1 and 20..!!" << endl;
	//	return 1;
	//}
	//else {

	//	cout << "Product of all integers from " << A << " to 20: " << product << endl;
	//}




	
	return 0;
}
