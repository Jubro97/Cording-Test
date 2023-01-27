#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> stack;

    for (int i = 0; i < s.size(); i++)
    {
        if (stack.empty() || stack.top() != s[i])
            stack.push(s[i]);
        else
            stack.pop();
    }
    stack.empty() ? answer = 1 : answer = 0;
    return answer;
}