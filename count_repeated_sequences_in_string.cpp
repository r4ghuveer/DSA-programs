#include <iostream>
#include <string>
using namespace std;
int gg(string S){
    int count=0;
    int m=1;
    for(int i=0; i<S.size();i++){

        if(2*(size(S.substr(0,m)))<=S.size() && m<S.size()){
        
            if(S.substr(0,m)==S.substr(m,m)){
                count=count+1;
                m=m*2;
            }
            else{
                count=count+1;
                m+=1;
            }
        }
        else if(m<=S.size()){
            count=count+1;
            m+=1;
            
        }
}
return count;

}
int main(){
    string S="abcdabcc";
    cout<<gg(S);
}