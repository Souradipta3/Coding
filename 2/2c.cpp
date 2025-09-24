/* Third largest element in an array of distinct elements
Problem Statement: Given an array of n distinct integers, the task is to find
the third largest element in the array.
Examples
Example 1:
Input: arr[] = {1, 14, 2, 16, 10, 20}
Output: 14
Explanation:
•Largest element: 20
•Second largest element: 16
•Third largest element: 14
Example 2:
Input: arr[] = {19, -10, 20, 14, 2, 16, 10}
Output: 16
•Largest element: 20
•Second largest element: 19
•Third largest element: 16 */

/* #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a = {1, 14, 2, 16, 10, 20};
    sort(a.rbegin(), a.rend());
    cout << "Third largest number is: " << a[2] << endl;
    return 0;
} */

// Optimized code

/* #include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {1, 14, 2, 16, 10, 20};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    cout << "Third largest number is: " << a[n - 3] << endl;
    return 0;
} */

// More optimized code

/* #include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 14, 2, 16, 10, 20};
    int n = sizeof(a) / sizeof(a[0]);
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max2 && a[i] < max1)
        {
            max2 = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max3 && a[i] < max2)
        {
            max3 = a[i];
        }
    }
    cout << "1st largest: " << max1 << endl;
    cout << "2nd largest: " << max2 << endl;
    cout << "3rd largest: " << max3 << endl;
    return 0;
} */

// More and more optimized code
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 14, 2, 16, 10, 20};
    int n = sizeof(a) / sizeof(a[0]);
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for (int element : a)
    {
        if (element > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = element;
        }
        else if (element > max2)
        {
            max3 = max2;
            max2 = element;
        }
        else if (element > max3)
        {
            max3 = element;
        }
    }
    cout << "1st largest: " << max1 << endl;
    cout << "2nd largest: " << max2 << endl;
    cout << "3rd largest: " << max3 << endl;
    return 0;
}