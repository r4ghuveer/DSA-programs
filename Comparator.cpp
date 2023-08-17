#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
using namespace std;

// bool compare(vector<int> a,vector<int> b){
//     return a[1]>b[1];
// }

// int main(){
//     vector<vector<int>> sort_it={{1,23},{1,33},{1,2},{1,14},{1,1},{10,3}};
//     sort(sort_it.begin(),sort_it.end(),compare);
//     for(auto a : sort_it){
//         cout<<a[0]<<" "<<a[1]<<" ; ";
//     }
// }

//for set, map etc.
// class compare{
//     public:
//         bool operator()(const int &a, const int &b) const{
//             return a>b;
//         }
// };
// int main(){
//     set<int,compare> st;
//     st.insert(2); 
//     st.insert(1); 
//     st.insert(3); 
//     for(auto x: st){
//         cout<<x<<" ";
//     }
//     return 0;
// }

//for priority queue
// min heap where smallest has the hight priority
class compare{
    public:    
        bool operator()(const &a, const &b)const{
            return a>b;
        }
};

int main(){
    priority_queue<int,vector<int>,compare> pq;
    pq.push(3);
    pq.push(1);
    pq.push(5);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}