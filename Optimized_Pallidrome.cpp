#include <bits/stdc++.h>
using namespace std;
int main(){
    bool a;
    int x=1214121;
    if(x<0|| (x!=0 &&x%10==0)) cout<<"false";
    int sum=0;
    while(x>sum)
    {
        sum = sum*10+x%10;
        x = x/10;
    }
    if((x==sum)||(x==sum/10)){
        a=(x==sum)||(x==sum/10);
        cout<<a;
    }
    else{
        cout<<"false";
    }
}