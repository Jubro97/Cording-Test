#include <iostream>

using namespace std;

/*
 * Complete the 'viralAdvertising' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int viralAdvertising(int n)
{
    int shared = 5;
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        answer += shared / 2;
        shared = (shared / 2) * 3;
    }

    return answer;
}