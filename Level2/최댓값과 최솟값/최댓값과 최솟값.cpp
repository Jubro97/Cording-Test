#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string sTemp = "";
    vector<int> iTemp;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            sTemp.push_back(s[i]);
        }
        else
        {
            iTemp.push_back(stoi(sTemp));
            sTemp.clear();
        }
    }

    iTemp.push_back(stoi(sTemp));
    sort(iTemp.begin(), iTemp.end());
    answer += to_string(iTemp[0]) + " " + to_string(iTemp[iTemp.size() - 1]);

    cout << answer << endl;

    return answer;
}

int main()
{
    solution({2,6,8,14});
}