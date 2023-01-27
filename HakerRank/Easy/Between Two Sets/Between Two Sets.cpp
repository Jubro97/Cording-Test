#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int gcd(int a, int b)
{
    int mod = a % b;
    while (mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }

    return b;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int getTotalX(vector<int> a, vector<int> b)
{
    vector<int> measure = {};
    int mult = 0;
    int cnt = 0;

    a.size() < 2 ? mult = a[0] : mult = lcm(a[0], a[1]);

    for (int i = 2; i < a.size(); i++)
    {
        mult = lcm(mult, a[i]);
    }

    sort(b.begin(), b.end());

    for (int i = 1; i <= b[0]; i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (b[j] % i != 0)
                break;
            else if (j == b.size() - 1)
                measure.push_back(i);
        }
    }

    for (int i = 0; i < measure.size(); i++)
    {
        for (int j = 1;; j++)
        {
            if (mult * j > measure[i])
                break;
            else if (measure[i] == mult * j)
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    return cnt;
}