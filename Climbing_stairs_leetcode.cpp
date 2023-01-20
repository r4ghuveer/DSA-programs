//Dynamic programming
//We are allowed to take either one step or two step
/*1) To be at zeroth step , there is only one way stay there 
2) To be at first step, there is only one way, to take one step
3) Then to be at third step there are two ways,  (n-1) and (n-2) , if we know ways to get here then we know total ways to get to third step and so on 
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0;
    int second=1;
    int ans;
    for (int i=0; i<n; i++ ){
        ans=first+second;
        first=second;
        second=ans;
    }
    cout<< ans;
}