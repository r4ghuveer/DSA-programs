#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"ez;";
	vector<vector<int>> ans(3, vector<int> (3));
	int left=0;
    int right=3;
    int top=0;
    int bottom=3;
	for(int i=0;i<bottom;i++){
		for(int j=0;j<right;j++){
			ans[i][j]=0;
		}
	}
	
	for(auto x : ans){
		for(auto y: x){
			cout<<y<<" ";
		}
		
	}
}