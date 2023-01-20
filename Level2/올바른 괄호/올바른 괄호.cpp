#include<string>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int open = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] == ')') return false;
        if (s[s.size() - 1] == '(') return false;

        s[i] == '(' ? open++ : open--;

        if (open < 0)
            return false;
    }

    open == 0 ? answer = true : answer = false;

    return answer;
}