//
// Created by Administrator on 6/21/2021.
//

#include "Time_CronosHHMMSS.h"
#include <iostream>

using namespace std;

int main()
{
    int secondsElapsed, hours, minutes, seconds;

    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;

    cout << "Please enter the number of seconds elapsed: ";
    cin >> secondsElapsed;

    hours = secondsElapsed / secondsPerHour;
    secondsElapsed = secondsElapsed % secondsPerHour;
    minutes = secondsElapsed / secondsPerMinute;
    seconds = secondsElapsed % secondsPerMinute;

    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}