/*
1) All capital
2) First capital rest lower
3) All lower
*/
#include <Bits/stdc++.h>
using namespace std;
int main(){
    string word="Visual studio code";
    int count=0;
    if(word.size()==1)
        cout<< "true";
    
    for(int i=0; i<word.size(); i++)
        if(isupper(word[i]))
            count++;
    
    if(count==1 && isupper(word[0]))
        cout<< "true";
    else if(count==0 || count==word.size())
        cout<< "true";
    else
        cout<< "false";
}

