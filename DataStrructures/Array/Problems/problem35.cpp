#include <iostream>
#include <vector>
using namespace std;
// pairs of numbers of array for given sum

vector<pair<int, int>> pairSum(int arr[], int sz, int sum)
{
    vector<pair<int, int>> vec;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i+1; j < sz; j++)
        {
            pair<int, int> p;
            p.first = arr[i];
            p.second = arr[j];
            if((p.first + p.second) == sum) vec.push_back(p);
        }
    }
    return vec;
}

// Optimal: 2 pointer approch for a sorted array for pairs of given sum
vector<pair<int, int>> optimalPairSum(int arr[], int n, int trSum){
    int i=0, j=0;
    vector<pair<int,int>> vec;
    while(i<j){
        if(arr[i]+arr[j]<trSum){
            i++;
        }else if(arr[i]+ arr[j]> trSum){
            j--;
        }else{
            pair<int, int> p;
            p.first =arr[i], p.second = arr[j];
            vec.push_back(p);
        }
    }
    return vec;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    cout << "Enter sum: ";
    cin >> sum;
    vector<pair<int, int>> vec = pairSum(arr, n, sum);
    for(auto it: vec){
        cout<<"("<<it.first<<", "<<it.second<<")"<<endl;
    }
    ///
    vector<pair<int, int>> v = optimalPairSum(arr, n, sum);
    for(auto it: vec){
        cout<<it.first<<", "<<it.second<<endl;
    }
    return 0;
}