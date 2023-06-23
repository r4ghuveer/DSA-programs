#include <iostream>
using namespace std;
class A{
    public:

        int rec(int i,int j){
            if(i==1 || j==1){
                return 1;
            }
            return rec(i-1,j) + rec(i,j-1);
        }
};


int  main() {
    A obj;
    int ans=obj.rec(5,5);
    cout<<ans;
}