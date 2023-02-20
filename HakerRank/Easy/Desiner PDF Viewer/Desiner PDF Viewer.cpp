#include <iostream>
#include <vector>

using namespace std;

/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */

int designerPdfViewer(vector<int> h, string word)
{
    int high = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (h[word[i] - 97] > high)
            high = h[word[i] - 97];
    }
    return high * word.size();
}