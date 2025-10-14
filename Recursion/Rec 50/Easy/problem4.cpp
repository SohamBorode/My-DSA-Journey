#include <iostream>
using namespace std;

int countDigits(int num){
    int temp = num;
    int count = 0;
    if(temp == 0) return 1;
    while(temp != 0){
        temp = temp / 10;
        count++;
    }
    return count;
}
int main() {
    cout<<countDigits(2546555);
    return 0;
}