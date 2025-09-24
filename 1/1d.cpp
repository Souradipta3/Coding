/*Missing and Repeating in an Array
Problem Statement : Given an unsorted array of size n, where the array
elements are in the range 1 to n, one number from the set {1, 2, …, n} is
missing, and one number occurs twice. The task is to find these two
numbers. Examples
Example 1:
Input: arr[] = {3, 1, 3}
Output: 3, 2
Explanation:
• 3 occurs twice in the array.
• 2 is missing from the array.
Example 2:
Input: arr[] = {4, 3, 6, 2, 1, 1}
Output: 1, 5
Explanation:
• 1 occurs twice in the array.
• 5 is missing from the array.*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[]={4,3,6,2,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    int duplicate=-1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            duplicate=a[i];
            break;
        }
    }
    cout<<"Duplicate element: "<<duplicate<<endl;

    int missing=-1;
    for(int i=0;i<n;i++)
    {
        a[a[i]-1]=-1;
        if(a[i]!=-1)
        {
            missing=i+1;
        }
    }
    cout<<"Missing element: "<<missing<<endl;
    return 0;
}
*/

// Optimised code

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);

    int val = -1;
    int duplicate = -1;
    for (int i = 0; i < n; i++)
    {
        val = abs(a[i]);
        if (a[val - 1] > 0)
        {
            a[val - 1] = -1 * a[val - 1];
        }
        else
        {
            duplicate = val;
        }
    }
    cout << "Duplicate element: " << duplicate << endl;

    int missing = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            missing = i + 1;
            break;
        }
    }
    cout << "Missing element: " << missing << endl;
    return 0;
}