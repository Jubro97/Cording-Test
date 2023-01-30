#include <iostream>

using namespace std;

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path)
{
    int cnt = 0;
    int height = 0;
    bool isEntry = false;

    for (int i = 0; i < steps; i++)
    {
        path[i] == 'U' ? height++ : height--;

        if (height < 0) isEntry = true;

        if (height == 0 && isEntry)
        {
            cnt++;
            isEntry = false;
        }
    }
    cout << cnt << endl;
    return cnt;
}