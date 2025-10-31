#include<bits/stdc++.h>
using namespace std;

// Find the subarray with given sum(k).
/*
Subarray is a contigeous part of an array
*/
int MaxsubArrWithSumK(int arr[], int sz, int sum)
{
    vector<int> subcount;
    int Max = 0;
    int subLength;
    int SUM ;
    for (int j = 0; j < sz; j++){
        // Reset running sum and subLength for each new start index j
        SUM = 0;
        subLength = 0;
        for (int i = j; i < sz; i++)
        {
            SUM += arr[i];
            subLength++;
            if (SUM == sum)
            {
                subcount.push_back(subLength);
            }
        }
    }
    if (subcount.empty())
    {
        cout << "No subarry is possible" << endl;
    }
    else
    {
        for (auto it : subcount)
        {
            if (it > Max)
            {
                Max = it;
            }
        }
    }
    return Max;
}

// Better than brute: By prefix sum




int main()
{
    int arr[] = {1, -1, 2, 3, 4, -6, -1, -2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    cout<<"Enter sum: ";
    cin>>sum;
    cout << "longest subarraay length possible for given sum is: " << MaxsubArrWithSumK(arr, n, sum);
    return 0;
}