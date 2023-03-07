#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,5,9};
    int k=3;
    int l=0;
    int m=0;
    int r=arr.size()-1;
    while(l<=r){
        m=(l+r)/2;
        if(arr[m]-(m+1)<k){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<l+k;
    //Here l+k is simplification of : - {  arr[m] - ((arr[m]-(m+1)) - k + 1) }
}       
/* 

arr=[2,3,5,9]
org=[1,2,3,4]   , at arr[2] there should be org[2] if there would be no missing numbers
fin=[1,1,2,5]  , so after subtracting arr[x]-org[x] we get number of missing numbers, for ex, arr[2]-org[2] = 5-3 = 2, so there are 2 missing numbers i.e. 1,3

now we do binary search to find a position where arr[x]-org[x] > k, that means, a place where we can say now we have sufficient number of missing numbers, so that we can now go backwards, for ex, arr[3]-org[3]=9-4=5 , now 5 > k i.e. 5 > 3.

to find the 3rd missing number we subtract (5+1) - k, 
1#) here 5+1 because 5 is the number of numbers on left of the current position, so we add 1 to get to current position, 
2#) then -k to get how much backwards do we have to go from current position.

for ex : - (5+1)-3 = 6-3 = 3, so we have to subtract 3 from current number at arr[3] (i.e. 9)

so, arr[3] - 3 = 9 - 3 = 6

so our answer is 6,  6 is the number on 3rd position of all missing number 1,4,6,7,8

so how did l + k came ???

look l is basically the position where arr[x]-org[x] > k . (which we found by using binary search)

now, to get the kth missing number =>

sub = (arr[l]-(l+1)) - k + 1)  .....this is (5) - k + 1

from = arr[l]  .....from arr[l] we subtract [5 - k + 1]

answer = from - sub

expanded form => {  arr[l] - ((arr[l]-(l+1)) - k + 1) }  

if we simplify this we get **l+k**

 arr[m] is the position from where we go backwards to find kth number
      - in this example arr[m]=9, so we need to find how much do we have to subtract from it to get kth missing number
      - to do that we find arr[l] using binary
      - get the steps we need to go backwards (arr[l]-(l+1)) - k + 1
      - then arr[l] - (arr[l]-(l+1)) - k + 1
      - simplify = l + k .


    */