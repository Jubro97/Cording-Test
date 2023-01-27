#include <vector>
#include <iostream>

using namespace std;

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores)
{
    int minCount = 0;
    int maxCount = 0;
    int minScore = scores[0];
    int maxScore = scores[0];
    vector<int> answer = {};

    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] > maxScore)
        {
            maxCount++;
            maxScore = scores[i];
        }
        else if (scores[i] < minScore)
        {
            minCount++;
            minScore = scores[i];
        }
    }
    answer = { maxCount , minCount };
    return answer;
}