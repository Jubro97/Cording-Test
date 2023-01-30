#include <iostream>

using namespace std;

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p)
{
    int cnt = 0;

    if (p > n * 0.5)
    {
        for (int i = n; i >= 0; i--)
        {
            if (i == p)
                break;
            else
            {
                if (i % 2 == 0)
                    cnt++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == p)
                break;
            else
            {
                if (i % 2 != 0)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return cnt;
}

int main()
{
    pageCount(6, 2);
}