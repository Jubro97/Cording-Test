#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int n) 
{
    long long answer = 0;
    vector<int> jumps = {};
    jumps.resize(n);
    jumps[0] = 1;
    jumps[1] = 2;

    for (int i = 2; i < n; i++)
    {
        jumps[i] = jumps[i - 1] % 1234567 + jumps[i - 2] % 1234567;
    }
    cout << jumps[n - 1] << endl;
    return jumps[n - 1] % 1234567;
}