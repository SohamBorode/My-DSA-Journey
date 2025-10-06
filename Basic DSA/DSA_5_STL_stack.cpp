#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout<< "Size of stack befor poping 'st': "<<st.size()<<endl;
while (!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}

cout<< "Size of stack after poping'st': "<<st.size()<<endl;

///@swap() function  to swapa values of staks with each other

cout<<"On regiving values to st and swaping with st2: "<<endl;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
stack<int> st2;
st2.swap(st);
cout<<"Size of st: "<<st.size()<<endl;
cout<<"Size of st2: "<<st2.size()<<endl;

return 0;
}
