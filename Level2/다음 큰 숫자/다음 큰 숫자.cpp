#include <string>
#include <vector>

using namespace std;

string GetBinaryNum(int n)
{
    string bTemp = "";
    while (n > 0)
    {
        int temp = n % 2;
        n /= 2;
        bTemp += to_string(temp);
    }

    return bTemp;
}

int CountOne(string b)
{
    int count = 0;

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '1')
            count++;
    }

    return count;
}

int solution(int n) {
    int answer = 0;
    int count1 = 0;
    int count2 = 0;
    string binaryNum1 = "";
    string binaryNum2 = "";

    binaryNum1 = GetBinaryNum(n);
    count1 = CountOne(binaryNum1);

    while (true)
    {
        n++;
        binaryNum2 = GetBinaryNum(n);
        count2 = CountOne(binaryNum2);
        if (count1 == count2)
        {
            answer = n;
            break;
        }
        else count2 = 0;
    }
    return answer;
}