#include <iostream>
using namespace std;

int main()
{
    int candies[10], kidSize, extraCandies, i, maxCandies = 0, greatestCandies[10];

    cout << "Enter the size of kids: ";
    cin >> kidSize;

    for (i = 0; i < kidSize; i++)
    {
        cout << "Enter candies: ";
        cin >> candies[i];
        if (candies[i] > maxCandies)
        {
            maxCandies = candies[i];
        }
    }

    cout << "Enter extra candies: ";
    cin >> extraCandies;

    for (i = 0; i < kidSize; i++)
    {
        if ((candies[i] + extraCandies) >= maxCandies)
        {
            greatestCandies[i] = 1;
        }
        else
        {
            greatestCandies[i] = 0;
        }
    }

    for (i = 0; i < kidSize; i++)
    {
        if (greatestCandies[i])
        {
            cout << "true ";
        }
        else
        {
            cout << "false ";
        }
    }

    return 0;
}
