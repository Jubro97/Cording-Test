#include <iostream>
#include <vector>

using namespace std;

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m)
{
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int temp = 0;
        int index = 0;
        for (int j = 0; j < m; j++)
        {
            temp += s[i + index];
            if(i != s.size() - 1)
                index++;
        }

        if (temp == d)
            cnt++;
    }
    return cnt;
}