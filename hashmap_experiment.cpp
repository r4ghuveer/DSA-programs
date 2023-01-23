#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
struct Node {
    int val;
    struct Node * next;
};
int main()
{
    // // declaration of map container
    // unordered_map<int, int> mymap;
    // // struct Node* Node1 = (struct Node*) malloc(sizeof(struct Node));
    // // Node1->val=1;
    // // mymap[Node1] = 69;
    // mymap[11] = 69;
    // mymap[12] = 2;
    // mymap.insert(make_pair(3,21));
    // mymap[13] = 3;
    // mymap.insert(make_pair(3,23));
    // mymap[14] = 3;
    // // cout<<mymap[11];
    // // if(mymap.count(11)){
    // //     cout<<"omg!! its there";
    // // }
    // // if(mymap.find(1)!=mymap.end()){
    // //     cout<<"dayyyyymmmmm";
    // // }
    // // else{
    // //     cout<<"not";
    // // }
    // // using begin() to print map
    // unordered_map<int,int>:: iterator itr =mymap.begin();
    // // for (itr; itr!= mymap.end(); ++itr){
    // //     cout<<mymap.count(itr->first)<<" ";//  print 1 for all as an hashmap can only have one unique key
    // //     // cout << itr->first << " = "
    // //     //      << itr->second << '\n';
    // // }
    
    // string s = string(1,char(8+'0')) + "llooll";
    // cout<<s<<endl; 
    vector<int> sVec(10, 0);
    sVec['7'-'0']++;
    for(auto x: sVec){
        cout<< x << " ";
    }

    return 0;
    // cout<<mymap[Node1];
    
    
}