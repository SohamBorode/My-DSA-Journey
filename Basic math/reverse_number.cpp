#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int reverseNum(int n){
        int count = 0, rn =0;
        vector<int> rem;
        while(n!=0){
//          rem.push_back(n%10);

            rn = rn*10 + n%10;
            n = n/10;
            count++;
        }
        cout<<"Number of digits: "<<count<<endl;
//            for(auto it=rem.begin();it!=rem.end();it++){
//                n += (*it)*pow(10, count-1);
//             count--;
//            }

///OR

//    for(int i=rem.size();i>0;i--){
//        n += rem[rem.size()-i]*pow(10,i-1);
//    }

//        return n;
        return rn;
}


int main(){
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<"Reversed number: "<<reverseNum(num);
return 0;
}
