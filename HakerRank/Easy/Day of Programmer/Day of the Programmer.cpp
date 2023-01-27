#include <string>
#include <iostream>

using namespace std;

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year)
{
    int Gregorian = 1918;
    string leapYearDate = "12.09.";
    string date = "13.09.";
    string gregorianDate = "26.09.";
    string answer = "";

    if (year < Gregorian)
    {
        year % 4 != 0 ? answer = date + to_string(year) : answer = leapYearDate + to_string(year);
    }
    else if (year == Gregorian)
    {
        answer = gregorianDate + to_string(year);
    }
    else
    {
        if (year % 4 != 0)
        {
            answer = date + to_string(year);
        }
        else
        {
            if (year % 100 != 0)
                answer = leapYearDate + to_string(year);
            else
            {
                if (year % 400 != 0)
                    answer = date + to_string(year);
                else
                    answer = leapYearDate + to_string(year);
            }
        }
    }

    return answer;
}