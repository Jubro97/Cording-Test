#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* n = 사람수
* m = 사탕수
* s = 첫번째 먹는 사람
*/

int saveThePrisoner(int n, int m, int s)
{
    int answer = 0;

    answer = (m - 1 + s - 1) % n + 1;

    return answer;
}

int main()
{
	saveThePrisoner(100, 99, 50);
}