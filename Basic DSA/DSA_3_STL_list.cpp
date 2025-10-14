#include<iostream>
#include<utility>
#include<list>
using namespace std;


int main(){
list<int> l;
int num;
lable : cout<<"Enter number for list: ";
cin>>num;
l.push_back(num);
if(num != 0) goto lable;
 cout<<endl<<"Your list is: "<<endl;
 for(int val: l){
    cout<<val<<" ";
 }
cout<<endl;
 l.push_front(457556514);
for(int val: l){
    cout<<val<<" ";
 }
l.pop_back();
l.pop_front();
cout<<"\npop_front() and pop_back(): "<<endl;
for(int val: l){
    cout<<val<<" ";
 }


/// cout<<"\nRndom access as Array: "<<l[4]<<endl; //@Error occcurs

return 0;
}
