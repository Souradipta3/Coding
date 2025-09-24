/*Remove All Occurrences of an Element in an Array
Problem Statement: Given an integer array arr[] and an integer ele, the task
is to remove all occurrences of ele from arr[] in-place and return the count
of elements that are not equal to ele.
Additionally, if there are k elements not equal to ele, then arr[] should be
modified such that the first k elements contain those not equal to ele, while
the remaining elements can be anything.
Note: The order of the first k elements may change.
Examples
Example 1:
Input: arr[] = [3, 2, 2, 3], ele = 3
Output: 2
Explanation:
•There are 2 elements (2, 2) not equal to 3.
•Modify arr[] such that the first 2 elements contain 2.
Example 2:
Input: arr[] = [0, 1, 3, 0, 2, 2, 4, 2], ele = 2
Output: 5
Explanation:
•There are 5 elements (0, 1, 3, 0, 4) not equal to 2.
•Modify arr[] so that the first 5 elements contain these numbers.
Modified arr[]: [0, 1, 3, 0, 4, _, _, _]
*/

#include <iostream>
using namespace std;
int main()
{
    int a[] = {0, 1, 3, 0, 2, 2, 4, 2};
    int element = 2;
    int index = 0;
    for (int value : a)
    {
        if (element != value)
        {
            a[index++] = value;
        }
    }
    for (int i = 0; i < index; i++)
    {
        cout << a[i] << " ";
    }
    cout<<"Answer: "<<index;
    return 0;
}