/*Move all zeros to end of array
Problem Statement : Given an array of integers arr[], the task is to move all
the zeros to the end of the array while maintaining the relative order of all
non-zero elements.
Examples:
Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0] Output: arr[] = [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.
• Input: arr[] = [10, 20, 30] Output: arr[] = [10, 20, 30] Explanation: No
change in array as there are no 0s.
• Input: arr[] = [0, 0] Output: arr[] = [0, 0] Explanation: No change in
array as there are all 0s.*/

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[index++] = a[i];
        }
    }
    for (int i = index; i < n; i++)
    {
        a[i] = 0;
    }
    for (int element : a)
    {
        cout << element << " ";
    }
    return 0;
}