/*Maximum consecutive one’s (or zeros) in a binary array
Problem Statement: Given an array arr[] consisting of only 0’s and 1’s, the
task is to find the maximum count of consecutive 1’s or 0’s present in the
array.
Examples
Example 1:
Input: arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1}
Output: 4
Explanation:
•The longest streak of 1’s is 4, from index 8-11.
Example 2:
Input: arr[] = {0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1}
Output: 2
Explanation:
•The longest streak of 0’s is 2, from index 0-1.
Example 3:
Input: arr[] = {0, 0, 0, 0}
Output: 4
Explanation:
•The longest streak of 0’s is 4, as the entire array consists of 0’s.*/

/*#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int answer = 0, count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            answer = max(answer, count);
            count = 1;
        }
    }
    answer = max(answer, count);
    cout << "Longest streak: " << answer << endl;
    return 0;
}*/

// Optimized code

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int answer = 0, count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] ^ a[i + 1] == 0)
        {
            count++;
        }
        else
        {
            answer = max(answer, count);
            count = 1;
        }
    }
    answer = max(answer, count);
    cout << "Longest streak: " << answer << endl;
    return 0;
}
