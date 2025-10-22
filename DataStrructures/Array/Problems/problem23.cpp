#include <iostream>
#include<map>
using namespace std;
// Find the majority element. : - where count of any number is > (total numbers)/2 

// Solution 1: with : O(n*n)
int whoisinMajority(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

int whoisinMajorityByHashing(int arr[], int sz){
    map<int, int> mpp;
}
int main()
{
    int arr[] = {2, 2, 3,3,3,3,3,3, 1, 2, 2};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cout << "The majority element is: " << whoisinMajority(arr, sz);
    return 0;
}