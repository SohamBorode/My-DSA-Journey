#include<iostream>
#include<cmath>
using namespace std;

//Binary to decimal conversion

long long BinTodec(long long bin, int i = 0){
    if(bin == 0) return 0;
    return (bin % 10)*pow(2, i) + BinTodec(bin/10, ++i);
}

int main() {
cout<<BinTodec(1111101010111011101);
    return 0;
}