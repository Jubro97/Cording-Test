#include <iostream>
#include <vector>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int maxPrice = -1;

    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            int price = keyboards[i] + drives[j];
            if (price <= b && price > maxPrice)
                maxPrice = price;
        }
    }
    cout << maxPrice << endl;
    return maxPrice;
}