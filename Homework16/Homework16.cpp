/*
  Developer :Roeun keovisal
  Date : 24 / 01 / 2024

*/
#include <iostream>
using namespace std;
int main() {
    /*//STORE:
    int num;
    int digit1, digit2, digit3, digit4, digit5, digit6;
    string result;
    const int NUM_RATE = 100000;
    const int NUM_RATE2 = 999999;
    const int EVALUATE_DIGITS = 10;
    enum Menu {
        Extract_digit1 = 100000,
        Extract_digit2 = 10000,
        Extract_digit3 = 1000,
        Extract_digit4 = 100,
        Extract_digit5 = 10
    };
    //USER INPUT:
    cout << "Enter a six-diget integer = ";
    cin >> num;

    //PROCESS: 
    if (num >= NUM_RATE && num <= NUM_RATE2) {

        //Extract digits
        digit1 = num / Extract_digit1;
        digit2 = (num / Extract_digit2) % EVALUATE_DIGITS;
        digit3 = (num / Extract_digit3) % EVALUATE_DIGITS;
        digit4 = (num / Extract_digit4) % EVALUATE_DIGITS;
        digit5 = (num / Extract_digit5) % EVALUATE_DIGITS;
        digit6 = num % EVALUATE_DIGITS;

        //Check if it's a lucky number :
        if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
            result = "Congratulations! It's a lucky number.";
        }
        else {
            result = "Sorry, It's not a lucky number.";
        }
    }
    else {
        result = "Error: Input six-digits only..!";
    }

    //RESULT:
    cout << result << endl;
    */


    
    /*
    * //Store:
    int num , newNumber;
    const int NUM_RATE1 = 1000;
    const int NUM_RATE2 = 9999;
    const int NUM_MODULUS = 10;
    int digit1, digit2, digit3, digit4;
    enum Menu {Extract1 = 1000, Extract2 = 100, Extract3 = 10};

    //Input:
    cout << "Enter a four-digit number = ";
    cin >> num;

    //process:
    if (num < NUM_RATE1 || num > NUM_RATE2) {
        cout<< "Error: Invalid input, Please enter a digit number."<<endl;
        return 1;
    }
    else {
        digit1 = num / Extract1;
        digit2 = (num / Extract2) % NUM_MODULUS;
        digit3 = (num / Extract3) % NUM_MODULUS;
        digit4 = num % NUM_MODULUS;
        newNumber = digit2 * Extract1 + digit1 * Extract2 + digit4 * Extract3 + digit3;
    }

    //Display  :
    cout << "Original number = " << num << endl;
    cout << "Modified number = " << newNumber << endl;
    */ 
    

/*
    //STORE:

    int num;
    int maxNum = 0;
    int i;

    //PROCESS:
    for (i = 1; i <= 7; ++i) {
        //INPUT:
        cout << "Enter integer " << i << ": ";
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
    }

    //OUTPUT:
    cout << "The maximum integer is: " << maxNum << endl;
*/

  ////STORE:
  //  double fuelConsumption;
  //  double totalFuelFirstLeg;
  //  double toatalFuelSecondLeg;
  //  double totalFuel;
  //  const double MAX_WEIGHT_1 = 500;
  //  const double MAX_WEIGHT_2 = 1000;
  //  const double MAX_WEIGHT_3 = 1500;
  //  const double MAX_WEIGHT_4 = 2000;
  //  const double FUEL_CAPACITY = 300;
  //  bool valid = true;
  //  enum Menu { upTo500KgConsumption = 1,
  //      upTo1000KgConsumption = 4,
  //      upTo1500KgConsumption = 7,
  //      upTo2000KgConsumption = 9
  //  };
  //  

  //  double distanceAB, distanceBC, cargoWeight;
  //  //INPUT:
  //  cout << "Enter distance between point A and B (km) = " ;
  //  cin >> distanceAB;

  //  cout << "Enter distance between point B and C (km) = ";
  //  cin >> distanceBC;

  //  cout << "Enter weight of cargo Kg = ";
  //  cin >> cargoWeight;

  //  //PROCESS:
  //  if (cargoWeight <= MAX_WEIGHT_1) {
  //      fuelConsumption = upTo500KgConsumption;
  //  }
  //  else if (cargoWeight <= MAX_WEIGHT_2) {
  //      fuelConsumption = upTo1000KgConsumption;
  //  }
  //  else if(cargoWeight <= MAX_WEIGHT_3){
  //      fuelConsumption = upTo1500KgConsumption;
  //  }
  //  else if (cargoWeight <= MAX_WEIGHT_4) {
  //      fuelConsumption = upTo2000KgConsumption;
  //  }
  //  else {
  //      cout << "The plane cannot lift with cargo exceeding 2000 Kg." << endl;
  //      return 1;
  //  }

  //  //CALCULATE TOTAL FUEL: total = distanceAB * fuelConsumption + distanceBC * fuelConsumption:
  //  totalFuelFirstLeg = distanceAB * fuelConsumption;
  //  toatalFuelSecondLeg = distanceBC * fuelConsumption;
  //  //Caculate total fuel needed:
  //  totalFuel = totalFuelFirstLeg + toatalFuelSecondLeg;

  //  //PROCESS2: Check if the plane can reach point B
  //  if (totalFuelFirstLeg > FUEL_CAPACITY) {
  //      cout << "The plane cannot fly from point A to point B with cargo weight." << endl;
  //      return 1;
  //  }
  //  if (totalFuel > FUEL_CAPACITY) {
  //      cout << "The plane cannot fly from point B to point C with the given fuel capacity." << endl;
  //      return 1;
  //  }


  //  //DISPLAY THE RESULT:
  //  if (valid) {
  //      cout << "Minimun amount of fuel needed for the journey = " << totalFuel << "liters." << endl;
  //  }
  //  else {
  //      valid = false;
  //      cout << "Invalid Input..!!" << endl;
  //  }

/*     //STORE:
    enum Menu { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    int day1, month1, year1;
    int day2, month2, year2;
    int days = 0;

    //INPUT:
    cout << "Input the first date = ";
    cin >> day1 >> month1 >> year1;
    //INPUT : SECOND DATE:
    cout << "Input the second date = ";
    cin >> day2 >> month2 >> year2;

    //PROCESS:
    if (year2 < year1 || (year2 == year1 && month2 < month1) || (year2 == year1 && month2 == month1 && day2 < day1)) {
        cout << "Error: Second date is earlier than first date.";
        return 1;
    }
    else {
        while (year1 != year2 || month1 != month2 || day1 != day2) {
            days++;
            day1++;

            switch (month1) {
                case JAN: case MAR: case MAY: case JUL: case AUG: case OCT:
                    if (day1 > 31) {
                        day1 = 1;
                        month1++;
                    }
                    break;
                case APR: case JUN: case SEP: case NOV:
                    if (day1 > 30) {
                        day1 = 1;
                        month1++;
                    }
                    break;
                case FEB:
                    if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0)) {
                        if (day1 > 29) {
                            day1 = 1;
                            month1++;
                        }
                    }
                    else {
                        if (day1 > 28) {
                            day1 = 1;
                            month1++;
                        }
                    }
                    break;
                case DEC:
                    if (day1 > 31) {
                        day1 = 1;
                        month1 = JAN;
                        year1++;
                    }
                    break;
            }
            if (month1 > DEC) {
                    month1 = JAN;
                    year1++;
            }
            
        }
        cout << "Number of days between the two dates: " << days << endl;
    }

*/

    //STORE
    double sales1, sales2, sales3;
    double salary1, salary2, salary3;
    const double baseSalary = 200;
    double commissionPercentage;

    // Input sales for three managersw
    cout << "Enter sales for Manager 1: ";
    cin >> sales1;
    cout << "Enter sales for Manager 2: ";
    cin >> sales2;
    cout << "Enter sales for Manager 3: ";
    cin >> sales3;

    // Calculate salary for Manager 1
    if (sales1 <= 500) {
        commissionPercentage = 0.03;
    }
    else if (sales1 <= 1000) {
        commissionPercentage = 0.05;
    }
    else {
        commissionPercentage = 0.08;
    }
    salary1 = baseSalary + (sales1 * commissionPercentage);

    // Calculate salary for Manager 2
    if (sales2 <= 500) {
        commissionPercentage = 0.03;
    }
    else if (sales2 <= 1000) {
        commissionPercentage = 0.05;
    }
    else {
        commissionPercentage = 0.08;
    }
    salary2 = baseSalary + (sales2 * commissionPercentage);

    // Calculate salary for Manager 3
    if (sales3 <= 500) {
        commissionPercentage = 0.03;
    }
    else if (sales3 <= 1000) {
        commissionPercentage = 0.05;
    }
    else {
        commissionPercentage = 0.08;
    }
    salary3 = baseSalary + (sales3 * commissionPercentage);

    // Determine the best manager
    int bestManagerIndex = 1;
    if (salary2 > salary1 && salary2 > salary3) {
        bestManagerIndex = 2;
    }
    else if (salary3 > salary1 && salary3 > salary2) {
        bestManagerIndex = 3;
    }

    // Award bonus if applicable
    if (bestManagerIndex == 1 && salary1 > 200) {
        salary1 += 200;
    }
    else if (bestManagerIndex == 2 && salary2 > 200) {
        salary2 += 200;
    }
    else if (salary3 > 200) {
        salary3 += 200;
    }

    // Output results
    cout << "Manager 1's salary: $" << salary1 << endl;
    cout << "Manager 2's salary: $" << salary2 << endl;
    cout << "Manager 3's salary: $" << salary3 << endl;
    cout << "Best Manager: Manager " << bestManagerIndex << endl;

    return 0;
}
