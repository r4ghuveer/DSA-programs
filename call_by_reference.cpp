#include <iostream>
using namespace std;
void func(int *aa){
    *aa=29;
    
}

int main(){
    int aa=2;
    func(&aa);
    cout<<aa;
}