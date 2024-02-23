/*
    Programming : C++
    Developer : KeoVisal
    Date : 02 / 01 / 2024

*/
#include <iostream>
using namespace std;
int main()
{
    /*
    * Store
     int age;
      string result
     const int ELIGIBLE = 18;

     input
    cout << "Input age = ";
    cin >> age;

    process
    if (age != 18 && age >= 18 ) {
        cout << "You're eligible";
    }
    else {
        cout << "You're not eligible";
    }

     result = (age >= ELIGIBLE ) ? "You're eligible" : "you're not eligible";
    result:
    cout << "Result = " << result;

    
    */
    /* 
        //Store
        int age;
        string result;
        const int ELIGIBLE = 18;

        cout << "Input age = ";
        cin >> age;

        

          //process
        if (age >= ELIGIBLE)
            result = "You're eligible ";
        else
            result = "You're not eligible ";
        

        //OUTPUT
        cout << "Result = " << result << endl;
    
    */

    /*
     //Store
        int age;
        string result;
        const int ELIGIBLE = 18;

        cout << "Input age = ";
        cin >> age;
        bool validAge = true;

        //process
        if (age < 0 || age > 99) {

            validAge = false;
            result = "ValidAge ";
        }if(validAge){
                if (validAge && age >= ELIGIBLE)
                    result = "You're eligible ";
                else
                    result = "You're not eligible ";
            }
        

        //OUTPUT
        cout << "Result = " << result << endl;
    */

    /*   float score;
    const float passed = 60;
    string result;
    bool validScore = true;

    cout << "Input score = ";
    cin >> score;



    if (score < 0 || score > 100) {
        validScore = false;
        result = "Invalid score";
    }
    else{
        if (validScore && score >= passed) {
            result = "passed";
        }
        else {
            result = "Fail";
        }
    }

    cout << "Result = " << result << endl;
    */

/*
// declare variable
    int qty;
    double totalExpense;
    float price;
    double discount;
    const float DISCOUNT_RATE = 0.10;
    const int LITMIT_AMOUT = 50;
    bool valid = true;

    //Input process :
    cout << "Input price ="; cin >> price;
    cout << "Input Quantity = "; cin >> qty;

    // process
    totalExpense = qty * price;
    if (price >= LITMIT_AMOUT) {
        discount = price * DISCOUNT_RATE;
        totalExpense -= discount;

    }

    //result :
    cout << "Total Expense = " << totalExpense << endl;


*/

/*
*  // Store Variable
    int avg;
    char letterGrade;
    bool valid = true;
    //Input :
    cout << "Input Average = "; cin >> avg;

    //process:
    if (avg < 0 || avg > 100) {
        valid = false;
    }
    else {
        if (avg >= 90) {
            letterGrade = 'A';
        }
        else if (avg >= 80) {
            letterGrade = 'B';
        }
        else if (avg >= 70) {
            letterGrade = 'C';
        }
        else if (avg >= 60) {
            letterGrade = 'D';
        }
        else if (avg >= 50) {
            letterGrade = 'E';
        }
        else {
            letterGrade = 'F';
        }
    }
    
    if (valid) {
        cout << "LetterGrade is = " << letterGrade << endl;
    }
    else {
        cout << "Invalid Inpute...!";
    }
*/
/*//Store
int number1;
int number2;
int result;
//Input
cout << "Enter number1 and number2: ";
cin >> number1 >> number2;
if (cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "Invalid: Enter again:";
    cout << "Input Number1 and Number 2: ";
    cin >> number1 >> number2;
}
//Process
result = number1 + number2;
//Output
cout << "The result is " << result << endl;
*/
   /*store
    string username ;
    int password;
    bool valid = true;

    //Input:
    cout << "Enter Name = "; cin >> username;
    cout << "Enter Password = "; cin >> password;

    //process
        if (cin.fail()) {

            cin.clear();
            cin.ignore();
            cout << "Enter invalid..:" << endl;;
            cout << "Try again :" << endl;;
            cout << "Enter Name = "; cin >> username;
            cout << "Enter Password = "; cin >> password;

            
        }
        if (username == "dara" && password == 123) {
            cout << "You're Corect..!";
        }
        else {
            cout << "You're Incorect..!";
        }
        
        */
    

    //STORE:
    int score1, score2, score3, score4, score5;
    double total, average;
    bool valid = true;
    string result;
    const int DIVISION = 5;

    //INPUT:
    cout << "Input score1 =";
    cin >> score1;
    cout << "Input score2 =";
    cin >> score2;
    cout << "Input score3 =";
    cin >> score3;
    cout << "Input score4 =";
    cin >> score4;
    cout << "Input score5 =";
    cin >> score5;

    //PROCESS:

    total = score1 + score2 + score3 + score4 + score5;
    average = total / DIVISION;
    if (average < 0 || average > 60) {
        valid = false;
    }
    else {
        if (average >= 60) {
            result = "Fisrt division";
        }
        else if (average >= 50 && average <= 59) {
            result = "Second division";
        }
        else if (average >= 40 && average <= 49) {
            result = "Third division";
        }
        else {
            result = "Fail";
        }
    }

    //RESULT:
    if (valid) {
        cout << "The average is = " << average << endl;
        cout << "The of student = " << result << endl;
    }     
    else
        cout << "Invalid Input" << endl;
    


   
    
    
    return 0;
   
}