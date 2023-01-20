#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b)
{
    int A = max(a, b);
    int B = min(a, b);

    //유클리트 호제법(Euclidean algorithm)
    while (A % B != 0)
    {
        int C = A % B;
        A = B;
        B = C;
    }

    return B;
}

int solution(vector<int> arr) {
    int answer = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        int gcd = Gcd(answer, arr[i]);
        int lcm = answer * arr[i] / gcd;
        answer = lcm;
    }
    return answer;
}