#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = { 0,0 };
    map<string, int> m;
    char lastWord = words[0][words[0].size() - 1];
    int player = 0;

    m[words[0]]++;

    for (int i = 1; i < words.size(); i++)
    {
        m[words[i]]++;

        if (words[i][0] != lastWord || m[words[i]] > 1)
        {
            answer[0] = i % n + 1;
            answer[1] = i / n + 1;
            break;
        }

        lastWord = words[i][words[i].size() - 1];
    }
    return answer;
}