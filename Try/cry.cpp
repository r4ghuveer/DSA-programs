#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    vector<int>:: iterator it=vec.begin()+1;
    for(int i=1;i<3;i++){
        vec.erase(it);
        
    }
    it=vec.begin()+1;
    vec.insert(it,32);
    for(auto x : vec){
        cout<<x<<" ";
    }
// 48  0 
// 49  1         
// 50  2         
// 51  3         
// 52  4         
// 53  5         
// 54  6         
// 55  7         
// 56  8         
// 57  9

    // int i=952;
    // string str=to_string(9);
    // str[0]='2';
    // str.push_back('3');
    // string str2;
    // str2.push_back('0');
    // str2.push_back('1');
    // cout<<stoi(str2)<<endl;
    // cout<<str;

    // char x;
    // x=int('1');
    // cout<<x<<endl;
    // cout<<"converted";
    // int i=0;
    // string s="dog cat cat dog";
    // istringstream a(s);
    // for(string word; a>>word;++i){
    //     cout<<word<<" ";
    //     i++;
    // }
    // cout<<'c'-'a';
    // list<vector<int>> togo;
    // togo.push_back({3,3});
    // for (auto x : togo){
    //     vector<int> y = x;
    //     for(auto u : y){
    //         cout<<u;
    //     }
    // }
}