#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    // declaration of map container
    map<int, int> mymap;
    mymap[11] = 1;
    mymap[11] = 69;
    mymap[12] = 2;
    mymap[13] = 3;
    if(mymap.find(1)!=mymap.end()){
        cout<<"dayyyyymmmmm";
    }
    else{
        cout<<"not";
    }
    // using begin() to print map
    // for (auto it = mymap.begin();
    //      it != mymap.end(); ++it)
    //     cout << it->first << " = "
    //          << it->second << '\n';
    // return 0;
}