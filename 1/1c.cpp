/* Leaders in an array
Problem Statement : Given an array arr[] of size n, the task is to find all the
Leaders in the array. An element is a Leader if it is greater than or equal to
all the elements to its right side.
Note: The rightmost element is always a leader.
Examples
Example 1:
Input: arr[] = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
Explanation:
• 17 is greater than all the elements to its right [4, 3, 5, 2], so it is a leader.
• 5 is greater than all the elements to its right [2], so it is a leader.
• 2 has no elements to its right, so it is a leader.
Example 2:
Input: arr[] = [1, 2, 3, 4, 5, 2]
Output: [5, 2]
Explanation:
• 5 is greater than all the elements to its right [2], so it is a leader.
• 2 has no elements to its right, so it is a leader. */

/*#include <iostream>
using namespace std;

int main(){
    int a[]={16,17,4,3,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    int flag;
    for(int i=0;i<n;i++){
        flag=1;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<a[i]<< " ";
        }
    }
    return 0;
}*/

// Optimized solution

/* #include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int max = a[n - 1];
    vector<int> leaders;
    leaders.push_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            max = a[i];
            leaders.push_back(a[i]);
        }
    }
    int m = leaders.size();
    for (int j = m - 1; j >= 0; j--)
    {
        cout << leaders[j] << " ";
    }
    return 0;
}*/

// More optimized solution

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int max = a[n - 1];
    int right = n - 2;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            max = a[i];
            a[right--] = a[i];
        }
    }
    right++;
    for (int j = right; j < n; j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}

