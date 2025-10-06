#include <iostream>
using namespace std;

int multiplyDigit(int num){
    int rem;
    if(num == 0) return 1;
    if(num < 10) return num;
    return (num % 10)*multiplyDigit(num/10);
}

int main() {
    cout<<multiplyDigit(2221355);
    return 0;
}