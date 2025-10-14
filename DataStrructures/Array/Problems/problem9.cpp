#include <iostream>
#include<vector>
using namespace std;
// Find the maximum difference between two elements.
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxDiff = 0;
    vector<int> maxVec;
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                maxDiff = arr[j] - arr[i];
                maxVec.push_back(maxDiff);
            }else{
                maxDiff = arr[i] - arr[j];
                maxVec.push_back(maxDiff);
            }
        }
    }
    for(auto it = maxVec.begin(); it < maxVec.end(); it++) cout<<*it<<" ";
    return 0;
}