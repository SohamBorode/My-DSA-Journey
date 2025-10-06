#include<iostream>
#include<queue>
using namespace std;

int main(){
priority_queue<int> pq;
pq.push(10);
while (!pq.empty()){
cout<<pq.top()<<endl;
pq.pop();
}
cout<<endl;
pq.push(10);
pq.push(15);
while (!pq.empty()){
cout<<pq.top()<<endl;
pq.pop();
}
cout<<endl;
pq.push(10);
pq.push(15);
pq.push(25);
while (!pq.empty()){
cout<<pq.top()<<endl;
pq.pop();
}
cout<<endl;
pq.push(10);
pq.push(15);
pq.push(25);
pq.push(1);
while (!pq.empty()){
cout<<pq.top()<<endl;
pq.pop();
}

return 0;
}
