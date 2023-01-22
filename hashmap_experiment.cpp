#include <iostream>
#include <map>
using namespace std;
struct Node {
    int val;
    struct Node * next;
};
int main()
{
    // declaration of map container
    map<int, int> mymap;
    // struct Node* Node1 = (struct Node*) malloc(sizeof(struct Node));
    // Node1->val=1;
    // mymap[Node1] = 69;
    mymap[11] = 69;
    mymap[12] = 2;
    mymap[13] = 3;
    mymap[14] = 3;
    cout<<mymap[11];
    // if(mymap.find(1)!=mymap.end()){
    //     cout<<"dayyyyymmmmm";
    // }
    // else{
    //     cout<<"not";
    // }
    // using begin() to print map
    map<int,int>:: iterator it =mymap.begin();
    for (it; it!= mymap.end(); ++it)
        cout << it->first << " = "
             << it->second << '\n';
    // return 0;
    // cout<<mymap[Node1];
    
    
}