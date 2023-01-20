#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> pNums;
    pNums.resize(n + 1);
    pNums[0] = 0;
    pNums[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        pNums[i] = pNums[i - 1] % 1234567 + pNums[i - 2] % 1234567;
    }
    answer = pNums[n] % 1234567;

    return answer;
}