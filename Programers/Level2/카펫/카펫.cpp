#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int width = 0;
    int height = 3;

    while (true)
    {
        if ((brown + yellow) % height == 0)
        {
            width = (brown + yellow) / height;

            if ((width - 2) * (height - 2) == yellow)
            {
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
        height++;
    }
    return answer;
}