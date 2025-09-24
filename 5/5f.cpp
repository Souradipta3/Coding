/*Missing ranges of numbers
Problem Statement: You have an inclusive interval [lower, upper] and a
sorted array of unique integers arr[], all of which lie within this interval. A
number x is considered missing if x is in the range [lower, upper] but not
present in arr. Your task is to return the smallest set of sorted ranges that
includes all missing numbers, ensuring no element from arr is within any
range, and every missing number is covered exactly once.
Examples
• Input: arr[] = [14, 15, 20, 30, 31, 45], lower = 10, upper = 50 Output:
[[10, 13], [16, 19], [21, 29], [32, 44], [46, 50]] Explanation: These ranges
represent all missing numbers between 10 and 50 not present in the
array
• Input: arr[] = [-48, -10, -6, -4, 0, 4, 17], lower = -54, upper = 17 Output:
[[-54, -49], [-47, -11], [-9, -7], [-5, -5], [-3, -1], [1, 3], [5,16]] Explanation:
These ranges represent all missing numbers between -54 and 17 not
present in the array.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int lower = 10;
    int upper = 50;
    int a[] = {14, 15, 20, 30, 31, 45};
    int n = sizeof(a) / sizeof(a[0]);
    vector<vector<int>> answer;
    if (lower < a[0])
    {
        answer.push_back({lower, a[0] - 1});
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > 1)
        {
            answer.push_back({a[i] + 1, a[i + 1] - 1});
        }
    }
    if (upper > a[n - 1])
    {
        answer.push_back({a[n - 1] + 1, upper});
    }
    for (auto element : answer)
    {
        cout << "[" << element[0] << "," << element[1] << "]" << endl;
    }
    return 0;
}