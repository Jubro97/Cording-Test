#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr)
{
    int answer = 0;
    int highest = 0;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        int cnt = 0;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] != arr[j])
                break;
            else
                cnt++;
        }
        if (cnt > highest)
        {
            highest = cnt;
            answer = arr[i];
        }
    }
    return answer;
}
