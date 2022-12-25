#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int sum=0;
    int sum2=0;
    int ve=0;
    int arr[T];
    for(int i=0;i<T;i++){
        cin>>arr[i];
    }
    for(int j=T-1;j>=0;j--){
        if(arr[j]==1){
            sum+=1;
        }
        else{
            ve=sum+ve;
        }
    }
    
    cout<<ve;
}