#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp1 = 0;
    int temp2 = 0;

    for (int i = 1; i <= n; i++)
    {
        temp2 = i;
        while (true)
        {
            temp1 += temp2;
            temp2++;

            if (temp1 == n)
            {
                temp1 = 0;
                temp2 = 0;
                answer++;
                break;
            }
            else if (temp1 > n)
            {
                temp1 = 0;
                temp2 = 0;
                break;
            }
        }
    }

    return answer;
}