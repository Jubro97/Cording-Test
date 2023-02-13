#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * Complete the 'hurdleRace' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY height
 */

int hurdleRace(int k, vector<int> height)
{
    int answer = 0;
    sort(height.begin(), height.end());
    height[height.size() - 1] < k ? answer = 0 : answer = height[height.size() - 1] - k;
    return answer;
}