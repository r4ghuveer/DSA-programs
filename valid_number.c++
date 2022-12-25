#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string num;
    cin>>num;
    int fin;
    int sum1;
    int sum2;
    int car=0;
    if((stoi(num)/pow(10,(num.size()-1))%10)==4 || (stoi(num)/pow(10,(num.size()-1))%10)==5 || (stoi(num)/pow(10,(num.size()-1))%10)==6 ||( (stoi(num)/pow(10,(num.size()-1))%10)==3 && (stoi(num)/pow(10,(num.size()-2))%10)==7)){
        for(int i=num.size()-2; i>0;){
            sum1=sum1+(stoi(num)/pow(10,num.size()-i)%10)*2;
            if((stoi(num)/pow(10,num.size()-i))%10*2>9){
                car=stoi(num)/pow(10,(num.size()-i))%10*2;
                sum1=(car%10)+(car/10);
            }
            i=i-2;
            
        }
        for(int j=num.size()-1;j>0;){
            sum2=sum2+(stoi(num)/pow(10,num.size()-j)%10);
            j--;
        }
    }
    fin=sum1+sum2;
    if(fin%10==0){
        cout<<num+" is valid";
    }
    else{
        cout<<num+" is invalid";
    }
}