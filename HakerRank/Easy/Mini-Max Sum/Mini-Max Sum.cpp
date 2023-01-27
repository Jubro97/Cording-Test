#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr)
{
    long min = 0;
    long max = 0;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        min += arr[i];
        max += arr[i];
    }

    min -= arr[arr.size() - 1];
    max -= arr[0];

    cout << min << " " << max;
}