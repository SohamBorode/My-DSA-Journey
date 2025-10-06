#include<iostream>
#include<math.h>
using namespace std;
bool isArmstrong(int n){
    int rem = 0, orginal = n;
    while(n!=0){
        rem  += pow(n%10, 3);
        n = n/10;
    }
    return (rem == orginal)?true:false;
}
int main(){
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<num<<"is a armstrong number? : "<<isArmstrong(num)<<endl;
return 0;
}
