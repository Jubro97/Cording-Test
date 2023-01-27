#include <vector>
#include <iostream>

using namespace std;

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int cnt = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = i + 1; j < ar.size(); j++)
        {
            int temp = 0;
            temp = ar[i] + ar[j];

            if (temp % k == 0)
                cnt++;
        }
    }

    return cnt;
}