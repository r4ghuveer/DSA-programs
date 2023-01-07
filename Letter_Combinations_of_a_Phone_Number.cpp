#include <bits/stdc++.h>
using namespace std;
int main()
{
    string digits="23";
    const vector<string> pad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if (digits.empty()) cout<<"empty";
    vector<string> result;
    result.push_back("");
    vector<string> tmp;
    for(auto digit: digits) {
        for(auto candidate: pad[digit - '0']) {
            for(auto s: result) {
                tmp.push_back(s + candidate);
                cout<<s<<" ";
            }
        }
        result.swap(tmp);
    }
    // for(auto x:result){
    //     cout<<x<<" ";

    // }
}