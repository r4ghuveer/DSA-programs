#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A={7,6,7,6,9};
    priority_queue<int> pq(begin(A), end(A));
        while (pq.size() > 1) {
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            if (x > y) pq.push(x - y);
        }
        cout<<  pq.empty() ? 0 : pq.top();
}