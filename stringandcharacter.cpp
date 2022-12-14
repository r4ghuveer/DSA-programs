#include <iostream>
#include <string>
using namespace std;
int main(){
    // string arr[]={"sdfs","sdfdd","sdsd"};
    // for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     cout<<arr[i]<<endl;
    // }
    string a="abcacba";
    cout<<2*size(a.substr(0,2));
}