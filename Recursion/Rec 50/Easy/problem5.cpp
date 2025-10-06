#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int rem;
    if(num == 0) return 0;
        rem = num % 10;
        return rem + sumOfDigits(num/10);
}

int main() {
    for(int i =0; i <= 100; i++) cout<<sumOfDigits(i)<<endl;
    return 0;
}