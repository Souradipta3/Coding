/* Remove duplicates from Sorted Array
Problem Statement: Given a sorted array arr[] of size n, the goal is to
rearrange the array so that all distinct elements appear at the beginning in
sorted order. Additionally, return the length of this distinct sorted subarray.
Note: The elements after the distinct ones can be in any order and hold any
value, as they don’t affect the result.
Examples
Example 1:
Input: arr[] = [2, 2, 2, 2, 2]
Output: [2]
Explanation: All the elements are 2, so only one instance of 2 is kept.
Example 2:
Input: arr[] = [1, 2, 2, 3, 4, 4, 4, 5, 5]
Output: [1, 2, 3, 4, 5]
Explanation: All distinct elements are extracted and placed at the beginning
in sorted order. 
Example 3:
Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation: No change is required as all elements are already distinct */

#include <iostream>
using namespace std;

int main(){
    int a[]={1,1,2,2,2,3,3,4,4,4,5,5};
    int n=sizeof(a)/sizeof(a[0]);
    int j=1;
    for(int i=1;i<n;i++)
    {
        if (a[i]!=a[i-1]){
            a[j]=a[i];
            j++;
        }
    }
    cout<<"Number of unique elements:"<<j<<endl;
    for(int k=0;k<j;k++){
        cout<<a[k]<<" ";
    }
    return 0;
}