#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (i > 0)
            s[i - 1] == ' ' ? s[i] = toupper(s[i]) : s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    return s;
}