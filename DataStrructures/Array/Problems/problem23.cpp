#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
// Find the majority element. : - where count of any number is > (total numbers)/2

// Solution 1: with : O(n*n)
int whoisinMajority(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
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

// Solution 2: by hash maping
int whoisinMajorityByHashing(int arr[], int sz)
{
    map<int, int> mpp;
    for (int i = 0; i < sz; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > (sz / 2))
        {
            return it.first;
        }
    }
    return -1;
}

// Solution 3: More optimal : - Moore's Voting Algorithm
int MoresVotingAlgo(int arr[], int sz)
{
    int k = 0;
    int ele = 0;
    int count = 0;
    for (int i = 0; i < sz; i++){
        if (count == 0){
            ele = arr[i];
        }
        if (arr[i] == ele){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < sz; i++){
        if (arr[i] == ele){
            count++;
        }
    }

    if (count > (sz / 2))
        return ele;
    else
        return -1;
}

// Solution 4: Slightly opptimises by sorting: where all same element are inn continues manner
int bySortingWhoisinMajority(int arr[], int sz)
{
    sort(arr, arr + sz); // works only directly to pointers in array
    int freq = 0;
    for (int i = 1; i < sz; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
            if (freq > sz / 2)
            {
                return arr[i];
            }
        }
        else
            freq = 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2,1,2,3,3,2,4,2,3,3,3,1,3,3,3};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cout << "The majority element is: " << whoisinMajority(arr, sz) << endl;
    cout << "The majority element is: " << whoisinMajorityByHashing(arr, sz) << endl;
    cout << "The majority element is: " << whoisinMajorityByHashing(arr, sz) << endl;
    cout << "The majority element is: " << bySortingWhoisinMajority(arr, sz) << endl;

    return 0;
}