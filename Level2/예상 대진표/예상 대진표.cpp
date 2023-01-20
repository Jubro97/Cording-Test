#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    for (int i = 1; i < n; i++)
    {
        if (a % 2 == 1) a += 1;
        if (b % 2 == 1) b += 1;

        a /= 2;
        b /= 2;

        answer++;

        if (a == b)
            break;
    }

    cout << answer << endl;

    return answer;
}