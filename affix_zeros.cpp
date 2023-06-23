#include <iostream>
using namespace std;
int counter(int x){
        int val=1;
        while(x/10!=0){
            val++;
            x=x/10;
        }
        return val;
    }
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int A=a;
    int B=b;
    int counta=1;
    while(a/10!=0){
        counta++;
        a=a/10;
    }
    int countb=1;
    while(b/10!=0){
        countb++;
        b=b/10;
    }
    int temp=0;
    for(int i=A;i<=B;i++){
        temp=counter(i);
        int abc=countb-temp;
        while(abc){
            cout<<"0";
            abc--;
        }
        cout<<i<<endl;
    }
}