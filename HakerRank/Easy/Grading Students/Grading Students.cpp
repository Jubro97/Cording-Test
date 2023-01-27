#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades)
{
    int cutLine = 38;

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= cutLine)
        {
            int temp = grades[i] % 5;
            if (temp >= 3)
                grades[i] = ((grades[i] / 5) + 1) * 5;
        }
    }
    return grades;
}