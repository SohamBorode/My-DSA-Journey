#include <iostream>
using namespace std;
long long powerOfN(long long num, long long power){
    if(power == 0) return 1;
    return num*powerOfN(num, power - 1);
}
int main() {
    long long n, power;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>power;
    cout<<"Power of "<<n<<" is: "<<powerOfN(n,power);
    return 0;
}