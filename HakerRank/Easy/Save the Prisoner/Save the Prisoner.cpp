#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* n = �����
* m = ������
* s = ù��° �Դ� ���
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