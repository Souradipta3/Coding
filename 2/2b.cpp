/* Product of Array Except Self
Problem Statement: Given an array arr[] of n integers, construct a product
array res[] (of the same size) such that res[i] is equal to the product of all
elements of arr[] except arr[i].
Examples
Example 1:
Input: arr[] = [10, 3, 5, 6, 2]
Output: [180, 600, 360, 300, 900]
Explanation:
•res[0] = 3 * 5 * 6 * 2 = 180
•res[1] = 10 * 5 * 6 * 2 = 600
•res[2] = 10 * 3 * 6 * 2 = 360
•res[3] = 10 * 3 * 5 * 2 = 300
•res[4] = 10 * 3 * 5 * 6 = 900
Example 2:
Input: arr[] = [12, 0]
Output: [0, 12]
Explanation:
•res[0] = 0 (since any number multiplied by 0 is 0).
•res[1] = 12 (since all other elements except arr[1] are multiplied). */

/*
#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 3, 5, 6, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int res[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                res[i] *= a[j];
            }
        }
        cout << "res[" << i << "] = " << res[i] << endl;
    }
    return 0;
}
*/

// Optimized code
/*
#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 3, 5, 6, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        product *= a[i];
    }
    int res[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = product / a[i];
        cout << "res[" << i << "] = " << res[i] << endl;
    }
    return 0;
}
*/

// More optimized code

#include <iostream>
using namespace std;

int main()
{
    // int a[] = {10, 3, 5, 6, 2};
    // int a[]={0,1,5,0,3};
    int a[] = {1, 3, 0, 4, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int result[n], count = 0, index = -1, product = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count++;
            index = i;
        }
        else
        {
            product *= a[i];
        }
        result[i] = 0;
    }
    if (count == 0)
    {
        for (int i = 0; i < n; i++)
        {
            result[i] = product / a[i];
        }
    }
    else if (count == 1)
    {
        result[index] = product;
    }
    for (int element : result)
    {
        cout << element << endl;
    }
    return 0;
}