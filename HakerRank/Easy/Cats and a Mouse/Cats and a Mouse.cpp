#include <iostream>

using namespace std;

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z)
{
    string s = "";

    abs(z - x) < abs(z - y) ? s = "Cat A" : abs(z - x) > abs(z - y) ? s = "Cat B" : s = "Mouse C";

    return s;
}