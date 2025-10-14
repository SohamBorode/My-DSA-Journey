#include <bits/stdc++.h>
using namespace std;

// Find the element that appears once (others appear twice).
int whoISLonely(int arr[], int sz){
    int mxEle = arr[0];
    for(int i = 1; i < sz; i++){
        if(arr[i]>mxEle){
            mxEle = arr[i];
        }
    }
    int frequency[mxEle + 1]={0};
    for(int i = 0; i<sz; i++){
        frequency[arr[i]]+=1;
    }
    for(int i = 0; i<sz+1; i++){
        if(frequency[i] == 1){
            return i;
        }
    }
    return 0;
}
int main() {
    int arr[] = {1,1,2,2,1,4,3,5,6,6,4,5,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The most lonely number is: "<<whoISLonely(arr, n);
    return 0;
}