#include <iostream>
#include <vector>
#define MAX 100
using namespace std;
// Find the missing numbers in a range.
void whoIsMissing(int arr[], int sz, int n)
{

    int missingNums[n+1] = {0};
    for (int i = 0; i < sz; i++)
    {
            missingNums[arr[i]] = 1;
    }
    for (int i=1;i<n+1+1;i++)
        if(missingNums[i]==0) cout << i << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};
    int siz = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing one is/are: ";
    whoIsMissing(arr, siz, 10);
    return 0;
}