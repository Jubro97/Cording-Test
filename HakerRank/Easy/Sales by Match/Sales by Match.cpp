#include <iostream>
#include <vector>
#include <map>

using namespace std;

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) 
{
	map<int, int> pairs;
	int answer = 0;

	for (int i = 0; i < n; i++)
		pairs[ar[i]]++;
	for (auto pair : pairs)
		answer += pair.second / 2;

	return answer;
}