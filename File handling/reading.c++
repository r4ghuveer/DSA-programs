#include <iostream>
using namespace std;
int main(){
    string c;
    c="what all night";
    char x;
    int count=10;
    bool y=true;
    while(y){
        c>>x;
        if (count==0){
            y=false;
        }
        else{
            break;
        }
        cout<<x;

    }
}