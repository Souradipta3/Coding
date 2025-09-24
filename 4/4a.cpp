/*Sort an array in wave form
Problem Statement: Given an unsorted array of integers, sort the array into
a wave array.
An array arr[0..n-1] is in wave form if:
•arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= ...
In other words, the elements should alternate between high and low values
in a wave-like pattern.
Examples
Example 1:
Input: arr[] = {10, 5, 6, 3, 2, 20, 100, 80}
Output: arr[] = {10, 5, 6, 2, 20, 3, 100, 80}
Explanation:
• The elements follow a wave pattern: large - small - large - small - large
- small
• Other valid wave forms could be {20, 10, 6, 2, 100, 3, 80, 5}
Example 2:
Input: arr[] = {20, 10, 8, 6, 4, 2}
Output: arr[] = {20, 8, 10, 4, 6, 2}
Explanation:
•The wave pattern is maintained: large - small - large - small - large - small
•Other valid wave forms could be {10, 20, 6, 8, 2, 4}*/

/*#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int a[]={20, 10, 8, 6, 4, 2};
    // int a[]={10, 5, 6, 3, 2, 20, 100, 80};
    int a[] = {2, 3, 5, 6, 10, 20, 80, 100};
    int n = sizeof(a) / sizeof(a[0]);
    int temp;
    sort(a, a + n);

    for (int i = 0; i < n; i += 2)
    {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    for (int element : a)
    {
        cout << element << " ";
    }
    return 0;
}*/

// Optimized Code

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int a[]={20, 10, 8, 6, 4, 2};
    // int a[]={10, 5, 6, 3, 2, 20, 100, 80};
    int a[] = {2, 3, 5, 6, 10, 20, 80, 100};
    int n = sizeof(a) / sizeof(a[0]);
    int temp;
    sort(a, a + n);

    for (int i = 0; i < n; i += 2)
    {
        if (i > 0 && a[i] < a[i - 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }

        if (i < n - 1 && a[i] < a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    for (int element : a)
    {
        cout << element << " ";
    }
    return 0;
}