#include <iostream>
using namespace std;
//Count occurrences of a digit in a number

int countSameDigit(long long num, int digit){
    if(num % 10 == digit) return 1 + countSameDigit(num / 10, digit);
    if(num == 0) return 0;
    return countSameDigit(num/10, digit);
}

int main() {
    cout<<"Count: "<<countSameDigit(4468548442642458748, 4);
    
    
    return 0;
}