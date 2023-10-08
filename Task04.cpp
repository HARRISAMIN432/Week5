#include<iostream>
#include<cmath>
using namespace std ;
string projectTimeCalculation(float hoursNeeded , float days , float numberOfWorkers) ;
main()
{
    float days,hoursNeeded,numberOfWorkers ;
    string result ;
    cout << "Enter the needed hours: " ;
    cin >> hoursNeeded ;
    cout << "Enter the days that the firm has: " ;
    cin >> days ;
    cout << "Enter the number of all workers: " ;
    cin >> numberOfWorkers ;
    result = projectTimeCalculation(hoursNeeded ,days ,numberOfWorkers) ;
    cout << result ;
}

string projectTimeCalculation(float hoursNeeded , float days , float numberOfWorkers)
{
    float workingHours  ;
    int remainingHours , moreNeededHours ; 
    string RemainingHours , MoreNeededHours ;
    workingHours = days*10 -(days*10) *0.10 ;
    if (workingHours > hoursNeeded) 
 {
    remainingHours = workingHours - hoursNeeded ;
    floor(remainingHours) ;
    RemainingHours = to_string(remainingHours) ;
    return "Yes!" + RemainingHours + " hours left." ; 
 }
    else
 {
    moreNeededHours = hoursNeeded - workingHours ;
    floor(moreNeededHours) ;
    MoreNeededHours = to_string(moreNeededHours) ;
    return "Not enough time! " + MoreNeededHours + " hours needed." ;
 }
}