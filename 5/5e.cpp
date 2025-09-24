/*Second Largest Element in an Array
Problem Statement: Given an array of positive integers arr[] of size n, the
task is to find the second largest distinct element in the array.
Note: If the second largest element does not exist, return -1.
Examples:
• Input: arr[] = [12, 35, 1, 10, 34, 1] Output: 34 Explanation: The largest
element of the array is 35 and the second largest element is 34.
• Input: arr[] = [10, 5, 10] Output: 5 Explanation: The largest element of
the array is 10 and the second largest element is 5.
• Input: arr[] = [10, 10, 10] Output: -1 Explanation: The largest element
of the array is 10, but there is no second largest element.*/

/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    int answer = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] != a[i - 1])
        {
            answer = a[i - 1];
            break;
        }
    }
    cout << "Second largest element: " << answer << endl;
    return 0;
}*/

// Optimized code

#include <iostream>
using namespace std;
int main()
{
    int a[]={12, 35, 1, 10, 34, 1};
    int n=sizeof(a)/sizeof(a[0]);
    int max1=a[0],max2=INT_MIN;
    for(int element:a)
    {
        if(element>max1)
        {
            max1=element;
        }
    }
    cout<<"Largest number: "<<max1<<endl;
    for(int element:a)
    {
        if(element>max2 && element<max1)
        {
            max2=element;
        }
    }
    cout<<"Second Largest number: "<<max2<<endl;
    return 0;
}