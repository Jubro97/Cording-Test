#include <iostream>
#include <vector>

using namespace std;

/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(vector<int> bill, int k, int b)
{
    int cost = 0;

    for (int a : bill)
        cost += a;

    cost = (cost - bill[k]) * 0.5;

    b > cost ? cout << b - cost : cout << "Bon Appetit";

}