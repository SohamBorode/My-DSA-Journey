#include<iostream>
using namespace std;

int func(int num, int arr[], int size){
    int count = 0;
    for(int i = 0; i<size;i++){
        if(arr[i] == num) count++;
    }
    return count;
}

int main(){
    int arr[] = {1,2,1,3,4,5,1,2,4,3};
    int sz = sizeof(arr)/sizeof(arr[0]);
    // int num;
    // cout<<"Enter number to calculate how many times it appers: ";
    // cin>>num;

    for(auto num: arr) cout<<num<<" appers "<<func(num, arr, sz)<<" times"<<endl;
    return 0;
}
