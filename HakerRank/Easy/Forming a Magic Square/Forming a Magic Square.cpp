#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a)
{
    int answer = 0;

    sort(a.begin(), a.end());

    for (int i = 1; i < a[a.size() - 1]; i++)
    {
        int temp = 0;
        for (int j = 0; j < a.size(); j++)
        {
            if (i == a[j] || i + 1 == a[j])
            {
                temp++;
                if (temp > answer)
                {
                    answer = temp;
                }
            }
        }
    }
    cout << answer;
    return answer;
}

int main()
{
    pickingNumbers({ 1,2,2,3,1,2 });
}