#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    int length = s.size();

    while (length > 0)
    {
        stack<char> brackets;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            {
                brackets.push(s[i]);
            }
            else if (s[i] == ']')
            {
                if (brackets.empty())
                    brackets.push(s[i]);
                else if (brackets.top() == '[')
                    brackets.pop();
            }
            else if (s[i] == '}')
            {
                if (brackets.empty())
                    brackets.push(s[i]);
                else if (brackets.top() == '{')
                    brackets.pop();
            }
            else if (s[i] == ')')
            {
                if (brackets.empty())
                    brackets.push(s[i]);
                else if (brackets.top() == '(')
                    brackets.pop();
            }
        }
        if (brackets.empty()) answer++;

        char temp = s[0];
        for (int i = 0; i < s.size(); i++)
            s[i] = s[i + 1];
        s[s.size() - 1] = temp;

        length--;
    }
    cout << answer << endl;
    return answer;
}
