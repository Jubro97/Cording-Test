#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int apple = 0;
    int orange = 0;

    for (int i = 0; i < apples.size(); i++)
    {
        int temp = a + apples[i];
        if (temp >= s && temp <= t)
            apple++;
    }

    for (int i = 0; i < oranges.size(); i++)
    {
        int temp = b + oranges[i];
        if (temp >= s && temp <= t)
            orange++;
    }

    cout << apple << endl << orange;
}
