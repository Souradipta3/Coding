/* Stock Buy and Sell – Multiple Transaction Allowed
Problem Statement: Given an array prices[] of size n denoting the cost of
stock on each day, the task is to find the maximum total profit if we can buy
and sell the stocks any number of times.
Constraints:
•We can only sell a stock that we have previously bought.
• We cannot hold multiple stocks at the same time (i.e., we must sell
before buying again).
Examples
Example 1:
Input: prices[] = {100, 180, 260, 310, 40, 535, 695}
Output: 865
Explanation:
•Buy on Day 0 and Sell on Day 3 → 310 - 100 = 210
•Buy on Day 4 and Sell on Day 6 → 695 - 40 = 655
•Total Maximum Profit = 210 + 655 = 865
Example 2:
Input: prices[] = {4, 2, 2, 2, 4}
Output: 2
Explanation:
•Buy on Day 3 and Sell on Day 4 → 4 - 2 = 2
•Total Maximum Profit = 2 */

/* #include <iostream>
using namespace std;

int main()
{
    int a[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(a) / sizeof(a[0]);
    int profit = 0, cost_price = a[0], sell_price = a[0], i = 0;

    while (i < n - 1)
    {
        while (i < n - 1 && a[i] >= a[i + 1])
        {
            i++;
        }
        cost_price = a[i];
        while (i < n - 1 && a[i] <= a[i + 1])
        {
            i++;
        }
        sell_price = a[i];

        cout << sell_price - cost_price << endl;
        profit += sell_price - cost_price;
    }
    cout << "Maximum Profit: " << profit << endl;
    return 0;
} */

// Simplified code

#include <iostream>
using namespace std;

int main()
{
    int a[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(a) / sizeof(a[0]);
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            cout << a[i] - a[i - 1] << endl;
            profit += a[i] - a[i - 1];
        }
    }
    cout << "Maximum Profit: " << profit << endl;
    return 0;
}