/*Find Smallest Missing Positive Number
Problem Statement: Given an unsorted array arr[] containing both positive
and negative elements, the task is to find the smallest positive number
missing from the array.
Note: You can modify the original array.
Examples
Example 1:
Input: arr[] = {2, -3, 4, 1, 1, 7}
Output: 3
Explanation: The positive numbers in sorted order are {1, 2, 4, 7}. The
smallest missing positive number is 3.
Example 2:
Input: arr[] = {5, 3, 2, 5, 1}
Output: 4
Explanation: The positive numbers in sorted order are {1, 2, 3, 5, 5}. The
smallest missing positive number is 4.
Example 3:
Input: arr[] = {-8, 0, -1, -4, -3}
Output: 1
Explanation: There are no positive numbers in the array, so the smallest
missing positive number is 1.*/

/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {2, -3, 4, 1, 1, 7};
    int n=sizeof(a)/sizeof(a[n]);
    sort(a,a+n);
    int answer = 1;
    for (int element : a)
    {
        if (element == answer)
        {
            answer++;
        }
        else if (element > answer)
        {
            break;
        }
    }
    cout << "Smallest Missing Positive Number: " << answer << endl;
    return 0;
}*/

//Optimized code

#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, -3, 4, 1, 1, 7};
    int n=sizeof(a)/sizeof(a[n]);
    int temp[n];
    int answer = n+1;
    for(int i=0;i<n;i++)
    {
        temp[i]=0;
    }
    for(int element:a)
    {
        if(element>=1 && element<=n)
        {
            temp[element-1]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(temp[i]==0)
        {
            answer=i+1;
            break;
        }
    }
    cout << "Smallest Missing Positive Number: " << answer << endl;
    return 0;
}