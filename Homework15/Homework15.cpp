/*
Progamming : C++
Developer : keovial Roeun
Date : 10/01/2024

*/
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{
    /*/Task1:
     //Store:
    double distance;
    double time;
    double speed;

    //input:
    cout << "Enter the distance(Km)= ";
    cin >> distance;

    cout << "Enter the time (houres)= ";
    cin >> time;

    //process:
    speed = distance / time;

    //result:
    cout << fixed << setprecision(2);
    cout << "speed is =" << speed << " Km/h" << endl;
    
    */


    /*Task2:
        //STORE:
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;
    double total_cost,totalSeconds;
    const double COST_PER_MINUTE = 0.30;

    //iNPUT:
    cout << "Input the start Time: ";
    cin >> startHours >> startMinutes >> startSeconds;

    cout << "Input the end Time: ";
    cin >> endHours >> endMinutes >> endSeconds;

    //PROCESS:
    totalSeconds = (endHours - startHours) * 3600 + (endMinutes - startMinutes)*60+ (endSeconds-startSeconds);
    total_cost = ( totalSeconds/60.0)* COST_PER_MINUTE ;

    //RESULT:
    cout << "The total cost of the is: " << fixed << setprecision(2) << total_cost <<"$" << endl;
    
    */
    


    /*
    *  //STORE:
    double distance, consumption;
    double totalMidCost;
    double totalPremuimCost;
    double totalRegularCost;
    const double DISTANCE_KM = 100.0;
    const double REGULAR_GAS = 4100;
    const double PREMUIM_GAS = 4700;
    const double MIDGRADE_GAS = 4200;

    //INPUT:
    cout << "Enter the distance = ";
    cin >> distance;
    cout << "Enter consumption per 100 km (in liters) = ";
    cin >> consumption;

    //PROCESS:
    totalRegularCost = (distance / DISTANCE_KM) * consumption * REGULAR_GAS;
    totalMidCost = (distance / DISTANCE_KM) * consumption * MIDGRADE_GAS;
    totalPremuimCost = (distance / DISTANCE_KM) * consumption * PREMUIM_GAS;

    //RESULT:
    cout <<fixed <<setprecision(2);
    cout << "Gasoline Type   |   Total Cost:" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Regular gas    =   " << totalRegularCost << endl;
    cout << "Mid-grade gas  =   " << totalMidCost << endl;
    cout << "Premuim gas    =   " << totalPremuimCost << endl;
    */

    /*
    //Store:
    int hours;
    int  minutes;
    int seconds;
    int input;  

    //INPUT:
    cout << "Input second of TIme: ";
    cin >> input;

    //PROCESS:

    hours = input / 3600;
    minutes = (input % 3600)/60;
    seconds = input % 60;

    //Display current time:
    cout << "The current time is " << hours << ":" << minutes << ":" << seconds << endl;

    //Calculate time until midnight:

    int remaining = 86400 - input;
    int r_hours = remaining / 3600;
    int r_minutes = (remaining % 3600) / 60;
    int r_second = remaining % 60;

    //Result of remaining time:
    cout << "Time until midnight is " << r_hours << ":" << r_minutes << ":" << r_second << endl;;
    */

    /*//STORE:
    int timeInSecond;
    const int secondsInHours = 3600;
    const int workingHour = 8;
    double hourAtWork;
    string result;
    bool valid = true;
    //INPUT
    cout << "Enter seconds of Time = ";
    cin >> timeInSecond;

    //PROCESS:
    hourAtWork = timeInSecond / secondsInHours;

   if(hourAtWork > workingHour) {
      result = "You have already completed a full working day.";
    }
    else {
        cout << "You need to be at work for " << workingHour - hourAtWork << " more hours." << endl;
    }

   //RESULT:
   if (valid) {
       cout << result << endl;
   }
   else {
       cout << "Invalid input..!" << endl;
   }
    */
    
/*
 //STORE:
    int secondOfTime;
    const int secondOfHours = 3600;
    const int workOfDay = 8;
    double hoursWork;
    string result;
    bool valid = true;

    //INPUT:
    cout << "Input Time in seconds = ";
    cin >> secondOfTime;

    hoursWork = secondOfTime / secondOfHours;

    if (hoursWork > workOfDay) {
        result = "You're work passed a day ";
    }
    else {
        int workingMore = workOfDay- hoursWork;
        result = "He need to be at " + to_string(workingMore)+" hours more ";
    }
    if (valid) {
        cout << result << endl;
    }else

*/
    
   

    
    




    return 0;
   


}
