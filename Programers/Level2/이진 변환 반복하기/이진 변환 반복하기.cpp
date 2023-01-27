#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int changeCount = 0;
    int eraseCount = 0;
    int length = 0;

    while (s != "1")
    {
        changeCount++;
        length = s.size();

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                eraseCount++;
                length--;
            }
        }

        s.clear();
        while (length > 0)
        {
            s += to_string(length % 2);
            length /= 2;
        }
    }
    answer.push_back(changeCount);
    answer.push_back(eraseCount);
    return answer;
}