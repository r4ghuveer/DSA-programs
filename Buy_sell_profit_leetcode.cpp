#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> prices={7,1,2,3,4,5,2}; // profit is to buy one day 1 (i.e. price 1) then sell at day 6 (i.e. price 5)
    int low = prices[0], curr_profit = 0, ovr_profit = 0;
    for(int  i = 1; i < prices.size(); i++){
        if(prices[i]<low){
            low = prices[i];
        }
        curr_profit = prices[i]-low;
        if(curr_profit > ovr_profit)
            ovr_profit = curr_profit;
    }
    cout<< ovr_profit;
}