/*Finding sum of digits of a number until sum becomes single digit
Problem Statement: Given an integer n, the task is to repeatedly find the
sum of its digits until the result becomes a single-digit number.
Examples
Example 1:
Input: n = 1234
Output: 1
Explanation:
1. Step 1: 1 + 2 + 3 + 4 = 10
2. Step 2: 1 + 0 = 1
Example 2:
Input: n = 5674
Output: 4
Explanation:
1. Step 1: 5 + 6 + 7 + 4 = 22
2. Step 2: 2 + 2 = 4*/

#include <iostream>
using namespace std;
int main()
{
    // int n=1234;
    int n = 5674;
    int sum = 0;
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            cout << "Sum of the digits: " << sum << endl;
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    cout << "Single digit sum: " << sum << endl;
    return 0;
}

