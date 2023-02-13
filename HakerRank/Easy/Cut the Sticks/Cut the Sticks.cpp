#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer = {};

	while (true)
	{
		int minNum = 0;
		int cnt = 0;

		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] > 0)
			{
				if(minNum == 0)
					minNum = arr[i];
				if (arr[i] < minNum)
					minNum = arr[i];
			}
		}

		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] > 0)
			{
				arr[i] -= minNum;
				cnt++;
			}
		}
		answer.push_back(cnt);

		sort(arr.begin(), arr.end());

		if (arr[arr.size() - 1] == 0)
			break;
	}

	for (int num : answer)
		cout << num << endl;

	return answer;
}

int main()
{
	solution({ 5,4,4,2,2,8});
}