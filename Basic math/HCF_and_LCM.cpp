#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void HCF_of(int a, int b)
{
    vector<int> a_factors;
    vector<int> b_factors;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            a_factors.push_back(i);
            if(a/i != i ){
                a_factors.push_back(a/i);
            }
        }
    }

     for(int i=1;i<=sqrt(b);i++){
        if(a%i==0){
            b_factors.push_back(i);
            if(b/i != i ){
                b_factors.push_back(b/i);
            }
        }
     }


}

int main()

int num1, num2;
cout<<"Enter two numbers: "
cin>>num1>>num2;
HCF_of(num1, num2);
    return 0;
}
