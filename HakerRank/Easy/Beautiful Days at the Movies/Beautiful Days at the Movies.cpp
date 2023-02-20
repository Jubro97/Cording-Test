#include <iostream>

using namespace std;

/*
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */

int Reverse(int n)
{
	int r = 0;
	while (n != 0)
	{
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	return r;
}

int beautifulDays(int i, int j, int k)
{
	int cnt = 0;
	for (int n = i; n <= j; n++)
	{
		if(abs(n - Reverse(n)) % k == 0)
			cnt++;
	}
	cout << cnt;
	return cnt;
}
