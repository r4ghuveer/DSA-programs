#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    int count_zero=0;
    int count_one=0;
    if(a.size()!=b.size()){
        cout<<"no";
    }
    else{
        for(int i=0;i<a.size();i++){
        if(a[i]-'0'==1){ 
            count_one++;
        }
        if(b[i]-'0'==1){
            count_one--;
        }
        if(a[i]-'0'==0){
            count_zero++;
        }
        if(b[i]-'0'==0){
            count_zero--;
        }
    }
    }
    if(count_one==count_zero){
        cout<<"Possible";
    }
    else{
        cout<<"Impossible";
    }
    
}