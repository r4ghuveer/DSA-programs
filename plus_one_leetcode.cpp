#include<vector>
#include<iostream>
using namespace std;
vector<int> lol(vector<int> digits){

    
    int carry=1;
    vector<int>:: iterator it;
    it=digits.end();
    if(digits[digits.size()-1]+1<9){
        digits[digits.size()-1]+=1;
        return digits;
    }
    else{
        for(int i=digits.size()-1; i>=0;){
            
            
                int sum=digits[i]+carry;
                digits[i]=sum%10;
                carry=sum/10;
                
                if(i==0 && carry!=0){
                    digits.resize(digits.size()+1);
                    for (int j=digits.size();j>0;j--){
                        digits[j]=digits[j-1];
                    }
                    digits[0]=carry;
                }
                i--;
            
        }
    }
    return digits;
}
void show(vector<int> XD){
    for (auto x : XD ){
        cout<<x<< " ";
    }
}
int main(){
    vector<int> digits{9};
    show(lol(digits));
}
