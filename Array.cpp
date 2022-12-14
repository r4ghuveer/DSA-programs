#include <iostream>
using namespace std;
//inputing integers and printing in array
int main(){
    int arr[3];
    int i=0;
    while (i<3){
        int in;
        cin>>in;
        arr[i]=in;
        
        i++;
    }
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    // for (int i : arr){
    //     cout<<i<<" ";
    // }
}