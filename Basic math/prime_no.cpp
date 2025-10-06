#include<iostream>
using namespace std;
bool isPrime(int n){
for(int i= 2;i<=9;i++){
    if(n%i != 0 && n%1 == 0 && n%n == 0){
        return true;
    }else{
    cout<<"Not a prime number"<<endl;
    return false;
    }
}
}
int main(){
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<"Is a prime number: "<<isPrime(num);
return 0;
}
