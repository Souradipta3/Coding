/*Maximum product of a triplet (subsequence of size 3) in array
Problem Statement:Given an integer array, the task is to find the maximum
product of any three numbers (triplet) in the array. Examples
Example 1:
Input: arr[] = [10, 3, 5, 6, 20]
Output: 1200
Explanation: The triplet with the maximum product is (10, 6, 20): 10 × 6 ×
20 = 1200
Example 2:
Input: arr[] = [-10, -3, -5, -6, -20]
Output: -90
Explanation: The triplet with the maximum product is (-3, -5, -6): (-3) × (-5)
× (-6) = -90
Example 3:
Input: arr[] = [1, -4, 3, -6, 7, 0]
Output: 168
Explanation: The triplet with the maximum product is (-4, -6, 7): (-4) × (-6)
× 7 = 168*/

/*#include <iostream>
using namespace std;
int main()
{
    int a[] = {-10, -3, -5, -6, -20};
    int n = sizeof(a) / sizeof(a[0]);
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                maximum = max(maximum, a[i] * a[j] * a[k]);
            }
        }
    }
    cout << "Maximum triplet product: " << maximum << endl;
    return 0;
}*/


// Optimized Code

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    //int a[] = {-10, -3, -5, -6, -20};
    int a[] = {1, -4, 3, -6, 7, 0};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    int maximum = INT_MIN;
    int min1=a[0],min2=a[1];
    int max1=a[n-1],max2=a[n-2],max3=a[n-3];
    int product1=max1*max2*max3;
    int product2=min1*min2*max1;
    maximum=max(product1,product2);
    cout << "Maximum triplet product: " << maximum << endl;
    return 0;
}
