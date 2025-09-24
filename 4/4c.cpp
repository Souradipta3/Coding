/* Given an array in non-decreasing order, find the
index of the first occurence of the given element.
Example 1: A=[2,3,5,5,5,5,5,6,6,7] and x=5
Answer:2
Example 2: A=[2,3,5,5,5,5,5,6,6,7] and x=6
Answer: 7 */

/* #include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 3, 5, 5, 5, 5, 5, 6, 6, 7};
    int n = sizeof(a) / sizeof(a[n]);
    //int x = 5;
    int x = 6;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            ans = i;
            break;
        }
    }
    cout << "Index of the first occurence given element: " << ans << endl;
    return 0;
} */

// Optimized code

#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 3, 5, 5, 5, 5, 5, 6, 6, 7};
    int n = sizeof(a) / sizeof(a[n]);
    // int x = 5;
    int x = 6;
    int ans = -1, s = 0, e = n - 1, m = -1;
    while (s <= e)
    {
        m = (s + e) / 2;
        if (x == a[m])
        {
            ans = m;   // can be an answer
            e = m - 1; // keep looking for the first occurence
            s = m + 1; // keep looking for the last occurence
            // any one of the above two lines should be executed rather than both 
            break;
        }
        else if (x < a[m])
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    cout << "Index of the first occuring element: " << ans << endl;
    return 0;
}

