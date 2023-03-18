#include <iostream>
using namespace std;
//inputing integers and printing in array
int main(){
    int arr[3]={1,2,3};
    int *p;
    p=&arr[0];
    for (p=&arr[0];p<=&arr[2];p++){
        cout<<*p<<endl;
    }
    
}
