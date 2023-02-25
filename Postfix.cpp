#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i][0]-'0'>=0 && tokens[i][0]-'0'<=9){
                st.push(tokens[i][0]-'0');
                cout<<tokens[i][0]<<" ";
            }
            else{
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    ans=a+b;
                }
                else if(tokens[i]=="-"){
                    ans=a-b;
                }
                else if(tokens[i]=="/"){
                    ans=a/b;
                }
                else{
                    ans=a*b;
                }
                st.push(ans);
            }
        }
        return st.top();
    }
};
int main(){
    Solution obj;
    vector<string> tokens={"4","13","5","/","+"};
    cout<<obj.evalRPN(tokens);

}