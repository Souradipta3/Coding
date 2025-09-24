/*Given an integer, find the square root of it without using inbuilt function.
If its not a perfect square, print the largest integer smaller than its square root.*/

/*#include <iostream>
using namespace std;

int main()
{
    int n=64;
    // int n=60;
    int ans=1;
    for(int i=1;i<n;i++)
    {
        if(i*i>n)
        {
            ans=i-1;
            break;
        }
    }
    cout<<"Square root is "<<ans<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int n = 64;
    // int n=60;
    int i = 1;
    while (i * i <= n)
    {
        i++;
    }
    cout << "Square root is " << i - 1 << endl;
    return 0;
}*/

// Optimized code

#include <iostream>
using namespace std;

int main()
{
    int n = 81;
    int low = 1, mid, high = n;
    int ans = 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Square Root: " << ans << endl;
    return 0;
}