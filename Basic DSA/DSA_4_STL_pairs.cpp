#include<iostream>
#include<vector>
using namespace std;
int  main(){
pair<int, string> p1 = make_pair(1,"Soham");
pair<int, string> p2 = {2,"Borode"};
 cout<<"Name: "<<p1.second + " " + p2.second<<endl;
 cout<<"Sum of pair element: "<<p1.first + p2.first<<endl;

 ///pair in side pair
 pair<int, pair<int, string>> p3 = {{1}, {2, "Soham Borode"}};
 cout<<"Nested pair:"<<endl;
 cout<<"Pair first: "<<p3.first<<", Pair second: We can not output it directyly "<<", Pair->Pair first element:"<<p3.second.first<<", Pari->Pair second elelment: "<<p3.second.second<<endl;


 /* vector of pair data type*/
 vector<pair<int, string>> Vec_p = {{1,"Raju"}, {2, "Om"} };
 /*
 push_back() needed '{}' for pushing pair
 while
 emplace_back() not
 */
 Vec_p.push_back({3, "Soham"});
 Vec_p.push_back({4, "Ram"});
 Vec_p.push_back({5, "Mohan"});
 Vec_p.push_back({6, "Sham"});

 ///using emplace_back()
Vec_p.emplace_back(7, "Pritam");
Vec_p.emplace_back(8, "Payre");
Vec_p.emplace_back(9, "Shree");
  for(pair<int, string> i: Vec_p){ /// OR we can use 'auto' key  word to automatically identify which type neede to be
    cout<<i.first<<" "<<i.second<<endl;
  }

return 0;
}
