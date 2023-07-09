#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s="bac##";
    string t="b";
    int k=0,p=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='#')
        {
            k--;
                k=max(0,k);
        }
        
        else
        {
            s[k]=s[i];
            k++;
        }
    }
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='#')
        {
            p--;
                p=max(0,p);
        }
        
        else
        {
            t[p]=t[i];
            p++;
        }
    }
    cout<<"k = "<<k<<"  p= "<<p<<endl;
    if(k!=p)
        cout<< "false";
    else
    {
        for(int i=0;i<k;i++)
        {
            if(s[i]!=t[i])
                cout<< "false";
        }
        cout<< "true";}
}
