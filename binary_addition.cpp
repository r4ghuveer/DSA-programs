#include <bits/stdc++.h>
using namespace std;
int main(){
    string a="101";
    string b="10";
    string res;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    while(i >= 0 || j >= 0){
        int sum = carry;
        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';
        carry = sum > 1 ? 1 : 0;  //ternary operator (?) : - variable = condition ? if true, here : if false, here ;
        res += to_string(sum % 2);
    }
    if(carry) res += to_string(carry);
    reverse(res.begin(), res.end());
    cout<<res;   
}
