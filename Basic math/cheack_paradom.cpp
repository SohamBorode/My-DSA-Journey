#include<iostream>
using namespace std;

bool isPalindrome(int x) {
    int org_x = x;
        int rx = 0;
        while(x!=0){
            rx = rx*10 + x % 10;
            x = x/10;
        }
        return (rx == org_x)?true:false;
    }
int main(){
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<isPalindrome(num);
return 0;
}
