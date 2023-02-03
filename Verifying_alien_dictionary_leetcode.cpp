#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> words={"hello","leetcode"};
    string order="hlabcdefgijkmnopqrstuvwxyz";
    int mapping[26];
    for (int i = 0; i < 26; i++)
        mapping[order[i] - 'a'] = i;
    for (string w : words)
        for (char c : w)
            
            cout<<mapping[c-'a'];
            // c = mapping[c - 'a'];
}
//     for(auto x: mapping){
//         cout<<x<<" ";
//     }
// }