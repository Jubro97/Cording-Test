#include <iostream>

using namespace std;

/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n)
{
    int height = 0;

    for (int i = 0; i <= n; i++)
    {
        i % 2 != 0 ? height *= 2 : height += 1;
    }
    cout << height;
    return height;
}