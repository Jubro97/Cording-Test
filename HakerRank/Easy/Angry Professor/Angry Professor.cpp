#include <iostream>
#include <vector>

using namespace std;

/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a)
{
    int cnt = 0;
    string answer = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= 0)
            cnt++;
    }
    k > cnt ? answer = "YES" : answer = "NO";
    return answer;
}