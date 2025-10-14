#include<iostream>
#include<utility>
#include<deque>
using namespace std;


int main(){
deque<int> d;
int num;
lable : cout<<"Enter number for deque: ";
cin>>num;
d.push_back(num);
if(num != 0) goto lable;
 cout<<endl<<"Your deque is: "<<endl;
 for(int val: d){
    cout<<val<<" ";
 }
cout<<endl;
 d.push_front(457556514);
for(int val: d){
    cout<<val<<" ";
 }
d.pop_back();
d.pop_front();
cout<<"\npop_front() and pop_back(): "<<endl;
for(int val: d){
    cout<<val<<" ";
 }


 cout<<"\nRndom access as Array: "<<d[4]<<endl;
return 0;
}
