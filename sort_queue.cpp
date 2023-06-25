#include <queue>
#include <iostream>
using namespace std;

void back(queue<int>& nums,int temp,int n){
    int rotate=0;
    int keep=0;
    int curr=0;
    bool a=true;
    for(int i=0;i<n;i++){  
        curr=nums.front();
        if(curr==temp && a==true){
            keep=curr;
            nums.pop();
            a=false;
        }
        else{
            rotate=curr;
            nums.pop();
            nums.push(rotate);
        }
    }
    nums.push(keep);
}
void sort_queue(queue<int>& nums){
    // 8 2 1 4 6 3
    // 8 2 4 6 3 1
    // 8 4 6 3 1 2
    int n = nums.size();
    int index = n-1;
    int temp = INT_MAX;
    int curr_ele=0;
    while(index>=0){
        temp = INT_MAX;
        for(int i=0; i<n;i++){
            if(i<=index){
                curr_ele=nums.front();
                if(curr_ele<=temp){
                    temp = curr_ele;
                }
                nums.pop();
                nums.push(curr_ele); 
            }
            else{
                curr_ele=nums.front();
                nums.pop();
                nums.push(curr_ele);
            }
            
        }
        back(nums,temp,n);
        index--;
    }
     while(!nums.empty()){
        cout<<nums.front()<<" ";
        nums.pop();
    }
}

int main(){
    queue<int> nums;
    nums.push(11);
    nums.push(112);
    nums.push(1);
    nums.push(0);
    nums.push(0);
    nums.push(2);
    sort_queue(nums);
    // cout<<"lol";
    // if(ans.front()){
    //     cout<<ans.front();
    // }
    // while(!nums.empty()){
    //     cout<<nums.front()<<" ";
    //     ans.pop();
    // }
}