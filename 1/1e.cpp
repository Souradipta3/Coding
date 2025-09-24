/* Stock Buy and Sell – Max one Transaction Allowed
Problem Statement: Given an array prices[] of length N, representing the
prices of stocks on different days, the task is to find the maximum profit
possible by buying and selling the stocks on different days when at most
one transaction is allowed.
Here, one transaction means one buy and one sell.
Note: The stock must be bought before being sold.
Examples
Example 1:
Input: prices[] = {7, 10, 1, 3, 6, 9, 2}
Output: 8
Explanation:
• Buy at 1 and sell at 9 to get a profit of 9 - 1 = 8.
Example 2:
Input: prices[] = {7, 6, 4, 3, 1}
Output: 0
Explanation:
• Since the array is sorted in decreasing order, no profit can be made.
Example 3:
Input: prices[] = {1, 3, 6, 9, 11}
Output: 10
Explanation:
• The array is sorted in increasing order, so we can make the maximum
profit by buying at 1 and selling at 11, yielding a profit of 11 - 1 = 10. */

/*
#include <iostream>
using namespace std;

int main()
{
    int a[] = {7, 10, 1, 3, 6, 9, 2};
    // int a[]={5,4,3,2,1};
    // int a[]={1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            profit = max(profit, a[j] - a[i]);
        }
    }
    cout << "Max Profit: " << profit << endl;
    return 0;
}
*/

// Optimised Code

#include <iostream>
using namespace std;

int main()
{
    int a[] = {7, 10, 1, 3, 6, 9, 2};
    // int a[]={5,4,3,2,1};
    // int a[]={1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    int min_element = a[0];
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        min_element = min(min_element, a[i]);
        profit = max(profit, a[i] - min_element);
    }
    cout << "Max Profit: " << profit << endl;
    return 0;
}
