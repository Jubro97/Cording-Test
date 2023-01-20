#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int index = 0;

    sort(people.begin(), people.end());

    while (people.size() > index)
    {
        int back = people.back();
        people.pop_back();

        if (people[index] + back <= limit)
        {
            answer++;
            index++;
        }
        else
            answer++;
    }

    return answer;
}