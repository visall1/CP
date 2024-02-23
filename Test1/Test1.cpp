#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {

	/* Task 1:
		double R1 = 2;
	double R2 = 4;
	double R3 = 8;
	double R0;

	// Calculate the value of formula: 1 / R0 = 1 / R1 + 1 / R2 + 1 / R3.
	R0= 1 / ((1 / R1) + (1 / R2) + (1 / R3));

	//get value of R1 R2 and R3
	cout << "R1 = " << R1 << endl;
	cout << "R2 = " << R2 << endl;
	cout << "R3 = " << R3 << endl;

	//return value of example: R1=2, R2=4, R3=8 R0 = 1.142857.
	cout << "R1=2, R2=4, R3=8 R0 = "<<R0;

	*/



	/* Task 2:
	double length;
	double radius;
	double area;
	const double pi = 3.14;

	//input the length
	cout << "Input the length = "; cin >> length;

	//Calculate the Radius from the Length (L = 2 * pi * R)
	radius = length / (2 * pi);

	area = pi * pow(radius, 2);

	cout << " Radius = " << radius << endl;
	cout << " Area = " << area << endl;
	*/

	//Task 3:
	/*
	
	*/	
	
		


	/*Task 1L: Homework2:
	int hour, minutes, second;

	//Input the time of second to convert:
	cout << "Input the second = "; cin >> second;
	cout << second << " seconds is equivalent =";

	minutes = second / 60;
	hour = minutes / 60;
	second %= 60;
	minutes %= 60;

	//result of time :
	 cout << hour << ":" << minutes << ":" << second << endl;;
	
	*/

	/*Task 2:
	double value;
	//Input currency format: 
	cout << "input from the keypad = "; cin >> value;
	//
	int wholeNumber = (int)value;
	int decimalPart = (int)((value - wholeNumber) * 100);

	//Output the result of grn kopecks:
	cout << wholeNumber<<"grn" << decimalPart << "kopecks" << endl;
	
	*/


	/*Task 3:
	double distance;
	int min, sec;
	int Total_sec;

	//Input distance in meters
	cout << "Calculation of the running speed" << endl;
	cout << "Input a distance length (meter) = ";
	cin >> distance;

	//Input time in minutes and seconds
	cout << "Input a time (minutes , seconds) =";
	cin >> min >> sec;

	//Calculation :
	Total_sec = min * 60 + sec;
	double speedKmPerHour = (distance / 1000) / (Total_sec / 3600.0);

	//Output the result :

	cout << "Distance = " << distance << "m" << endl;
	cout << "Time = " << min << " minutes " << sec << " seconds = " << Total_sec << endl;
	cout << " You ran at a speed of " << speedKmPerHour << " km/h. " << endl;
	
	*/

	/*Task 4:
	double prizeMinutes;
	int callMinutes, callSecond;
	int totalSeconds; 

	cout << "Enter the prize per minutes = ";
	cin >> prizeMinutes;
	cout << "Enter the call duration [ Minutes and Second ] = ";
	cin >> callMinutes >> callSecond;

	totalSeconds = callMinutes * 60 + callSecond;
	double totalCost = prizeMinutes * (totalSeconds / 60.0);
	cout << fixed << setprecision(2);
	cout << "The cost of the call is = " << totalCost << " currency " << endl;
	*/

	


	/*Task 5
	int NumOfDay, weeks, days;
	cout << "Please Enter the Number of days = ";
	cin >> NumOfDay;

	weeks = (NumOfDay % 365) / 7;
	days = (NumOfDay % 365) %7;

	//Result of display
	cout << weeks << " weeks and " << days << "days." << endl;
	
	
	
	*/

	//store
	double inches;
	double centimeters;
	const double INCE_CENT = 2.25;

	//input:
	cout << "The Tv screen diagonal(inch) -> "; cin >> inches;

	//process
	centimeters = inches * INCE_CENT;

	//output
	cout << "The Tv screeen diagonal is " << round(centimeters) << "cm." << endl;

	

	


	return 0;
}
