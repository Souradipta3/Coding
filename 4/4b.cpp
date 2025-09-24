/*Split array into three equal sum segments
Problem statement : Given an integer array arr[], the task is to divide the
array into three non-empty contiguous segments with equal sum. In other
words, we need to return an index pair [i, j], such that sum(arr[0…i]) =
sum(arr[i+1…j]) = sum(arr[j+1…n-1]).
Note: If it is impossible to divide the array into three non-empty contiguous
segments, return [-1, -1].
Examples:
• Input: arr[] = [1, 3, 4, 0, 4] Output: [1, 2] Explanation: 3 equal sum
segments are: arr[0…1], arr[2…2] and arr[3…4] each having sum = 4.
• Input: arr[] = [2, 3, 4] Output: [-1, -1] Explanation: No three segments
exist which has equal sum.
• Input: arr[] = [1, -1, 1, -1, 1, -1, 1, -1] Output: [1, 3] Explanation: 3
equal sum segments are: arr[0…1], arr[2…3] and arr[4…7] each having
sum = 0.*/

/* #include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;

int findSum(vector<int> a, int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    vector<int> a = {1, 3, 4, 0, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int ans[2] = {-1, -1};
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i <= n - 3; i++)
    {
        for (int j = i + 1; j <= n - 2; j++)
        {
            sum1 = findSum(a, 0, i);
            sum2 = findSum(a, i + 1, j);
            sum3 = findSum(a, j + 1, n - 1);

            if (sum1 == sum2 && sum2 == sum3)
            {
                ans[0] = i;
                ans[1] = j;
                cout << i << " " << j;
                return 0;
            }
        }
    }
    return 0;
} */

// Optimized code

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 3, 4, 0, 4};
    //int a[] = {2, 3, 4};
    // int a[] = {1, -1, 1, -1, 1, -1, 1, -1};
    int n = sizeof(a) / sizeof(a[0]);
    int ans[2] = {-1, -1};
    int sum = 0, total = 0, count = 0;
    for (int element : a)
    {
        total += element;
    }
    if (total % 3 != 0)
    {
        cout<<"Not found!";
        return 0;
    }
    for (int i = 0; i <= n - 2; i++)
    {
        sum += a[i];
        if (sum == total / 3)
        {
            ans[count] = i;
            sum = 0;
            count++;
            if (count == 2)
            {
                break;
            }
        }
    }
    if (count == 2)
    {
        cout << ans[0] << " " << ans[1];
    }
    else
    {
        cout << -1 << " " << -1;
    }
    return 0;
}