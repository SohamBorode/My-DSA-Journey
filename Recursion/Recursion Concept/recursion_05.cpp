#include<iostream>
using namespace std;

//void reverse_arr1(int arr[], int n)
//{
//    for(int i = 0; i<n/2; i++)
//    {
//
//        int temp = arr[i];
//        arr[i] =arr[n-i-1];
//        arr[n-i-1] =arr[i];
//    }
//}

//void reverse_arr2(int arr[], int n)
//{
//
//    int i =0, j = n-1;
//
//    cout<<"Before: "<<endl;
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//while (i < j) {
//        // Swap elements
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//
//        i++;
//        j--;
//    }
//    cout<<endl<<"After: "<<endl;
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//}


// or functional swap

//void func(int arr[], int i, int j)
//{
//
//    if(i>=j) return;
//    swap(arr[i], arr[j]);
//    func(arr, i+1, j-1);
//
//}


//Checking a string id palidrom or not (functional code)
string isPalidrom(string str)
{
  int i =0, j =str.length() -1;
  while(i<j){
    if(str[i] != str[j]) return "false";
    i++;
    j--;
  }
  return "true";
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
//    reverse_arr1(arr, n);
//    func(arr, 0, n-1);
        cout<<isPalidrom("Pop");

    return 0;
}
