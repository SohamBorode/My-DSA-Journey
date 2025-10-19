#include <iostream>
using namespace std;
/*
6. Find the sum of all elements.
7. Find the average of elements.
8. Count even and odd numbers.
*/
int main() {
    int arr[] = {1,2,3,4,5,4,6,9,7,2,1,1,6};
    float sum=0;
    float avg=0;
    int oddCout = 0, evenCount = 0;
    for(int i : arr) {
        sum+=i;
        if(i%2==0) evenCount++;
        else oddCout++;
    }
    cout<<"Sum: "<<sum<<endl;
    avg = sum / 5;
    cout<<"Average: "<<avg<<endl;
    cout<<"Total odd numbers: "<<oddCout<<endl<<"Total even numbers: "<<evenCount<<endl;
    return 0;
}