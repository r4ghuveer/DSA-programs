#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n=50;
    bool arr[50];
    fill(arr,arr+50,true);
    for(int i=2;i<50/2;i++){
        if(arr[i]==false){
            continue;
        }
        // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
        // [t,t,t,t,f,t,f,t,f,f,ff,tt,ff,tt,ff,ff]
        else{
            for(int j=i+1;j<=50;j++){
                if(j%i==0){
                    arr[j]=false;
                }
             }
        }
        
    }
    for( int i=2 ; i<50;i++){
        if(arr[i] == true){
            cout<<i<<" ";
        }
    }

}