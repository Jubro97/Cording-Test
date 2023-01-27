#include <iostream>
#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int time = 0;

    if (s[s.size() - 2] == 'P')
    {
        time = stoi(s.substr(0, 2));
        time += 12;

        if (time == 24)
            time = 12;

        s.replace(0, 2, to_string(time));
    }
    else
    {
        time = stoi(s.substr(0, 2));
        time += 12;

        if (time == 24)
        {
            s.replace(0, 2, "00");
        }
    }
    s.erase(s.end() - 2, s.end());
    return s;
}