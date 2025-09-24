/* Sort Colors
Problem Statement : Given an array nums with n objects colored red, white,
or blue, sort them in-place so that objects of the same color are adjacent,
with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and
blue, respectively.
You must solve this problem without using the library's sort function.
Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
Constraints:
• n == nums.length
• 1 <= n <= 300
• nums[i] is either 0, 1, or 2 */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 1, 0, 1, 2, 0, 2, 1, 0};
    int count0 = 0, count1 = 0, count2 = 0;
    for (int elements : a)
    {
        if (elements == 0)
        {
            count0++;
        }
        else if (elements == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    int i = 0;
    while (count0 != 0)
    {
        a[i] = 0;
        i++;
        count0--;
    }
    while (count1 != 0)
    {
        a[i] = 1;
        i++;
        count1--;
    }
    while (count2 != 0)
    {
        a[i] = 2;
        i++;
        count2--;
    }
    cout << "Final output" << endl;
    for (int elements : a)
    {
        cout << elements << " ";
    }
    return 0;
}
