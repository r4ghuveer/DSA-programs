#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMaxDifference(int num) {
        char store;
        int toggle=0;
        string two="";
        string str = to_string(num);
        for(int i=0;i<str.size();i++){
            if(str[i]==9){
                continue;
                two.push_back('9');
            }
            toggle=i;
            store=str[i];
            break;
            
        }
        for(int i=toggle;i<str.size();i++){
            if(str[i]==store){
                two.push_back('0');
                str[i]='9';
            }
            else{
                two.push_back(str[i]);
            }
        }
        int One=stoi(str);
        int Two=stoi(two);
        return(One-Two);
        
    }
};
int main(){
    Solution obj;
    
    cout<<obj.minMaxDifference(999911111);
}