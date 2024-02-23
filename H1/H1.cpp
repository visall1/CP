/*
    Programming : C++
    Developer : keovisal roeun
    Date : 10/01/2024

*/
#include <iostream>
using namespace std;
int main()
{
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;
    double total_cost, totalSeconds;
    const double COST_PER_MINUTE = 0.30;

    //iNPUT:
    cout << "Input the start Time: ";
    cin >> startHours >> startMinutes >> startSeconds;

    cout << "Input the end Time: ";
    cin >> endHours >> endMinutes >> endSeconds;

    //PROCESS:
    totalSeconds = (endHours - startHours) * 3600 + (endMinutes - startMinutes) * 60 + (endSeconds - startSeconds);
    total_cost = (totalSeconds / 60.0) * COST_PER_MINUTE;

    //RESULT:
    cout << "The total cost of the is: "<< total_cost << "$" << endl;
    

    return 0;
}

