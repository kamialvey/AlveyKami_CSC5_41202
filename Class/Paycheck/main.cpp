/*
 * File:   main.cpp
 * Author: Kami Alvey
 * Created on January 5, 2016, 9:30 AM
 * Purpose: Calculate Paycheck, Straight Time
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float         payRate=1e1f;  //Pay Rate in $'s/hour
    unsigned char hrsWrkd=40;    //Hours works (hrs)
    
    //Calculate or Map Inputs
    float payChk=payRate*hrsWrkd;
    
    //Output Results
    cout<<"Pay Rate     = $"<<payRate<<"'s/hr"<<endl;
    cout<<"Hours Worked =  "<<static_cast<int>(hrsWrkd)<<"hrs"<<endl;
    cout<<"Pay Check    = $"<<payChk<<"hrs"<<endl;
    
    //Exit Stage Right
    return 0;
}