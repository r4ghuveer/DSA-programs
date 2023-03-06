#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,5,9};
    int k=3;
    int l=0;
    int m=0;
    int r=arr.size()-1;
    while(l<=r){
        m=(l+r)/2;
        if(arr[m]-(m+1)<k){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<arr[m] - ((arr[m]-(m+1)) - k + 1);
    //Here l+k is simplification of : - {  arr[m] - [(arr[m]-(m+1)) - k + 1] }
}