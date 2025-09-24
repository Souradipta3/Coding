/*Find Smallest Missing Positive Number
Problem Statement: Given an unsorted array arr[] containing both positive
and negative elements, the task is to find the smallest positive number
missing from the array.
Note: You can modify the original array.
Examples
Example 1:
Input: arr[] = {2, -3, 4, 1, 1, 7}
Output: 3
Explanation: The positive numbers in sorted order are {1, 2, 4, 7}. The
smallest missing positive number is 3.
Example 2:
Input: arr[] = {5, 3, 2, 5, 1}
Output: 4
Explanation: The positive numbers in sorted order are {1, 2, 3, 5, 5}. The
smallest missing positive number is 4.
Example 3:
Input: arr[] = {-8, 0, -1, -4, -3}
Output: 1
Explanation: There are no positive numbers in the array, so the smallest
missing positive number is 1.*/

/*#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {5, 3, 2, 5, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int ans = 1;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ans)
        {
            ans++;
        }
        else if (a[i] < n)
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}*/

// Optimized code
#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 3, 2, 5, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int ans = n - 1;
    int status[n];
    for (int i = 0; i < n; i++)
    {
        status[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 1 && a[i] <= n)
        {
            status[a[i] - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (status[i] == 0)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}