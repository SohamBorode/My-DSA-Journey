#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while (n > 0){
            count++;
            n = n/10;
        }
        return count;
    }
};
int main(){
//    int num = 7789;
//    vector<int> rem;
//    while (num!=0){
//        cout<<"Number: "<<num<<endl;
//        rem.push_back(num%10);
//        num = num/10;
//            }
//    for(vector<int>::reverse_iterator it = rem.rbegin();it!= rem.rend();it++){ // or we can use 'auto' keyword
//        cout<<"Reminder: "<<*it<<endl;
//    }



Solution s;
cout<<s.countDigit(5455);
return 0;
}
