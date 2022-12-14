#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
vector <int> jonny(vector <int> b){
    int a[]={1,2,3,4,5};
    int s=sizeof(a)/sizeof(a[0]);
    for (int i=0;i<s;i++){
        b.push_back(a[i]*a[i]);

    }
    for (int i=0; i<s;i++){
        cout << b[i];

    }
    return;
}
int main(){
    
    vector <int> b;
    cout<<jonny(b);


}