#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    // declaration of map container
    map<int, int> mymap;
    mymap[11] = 1;
    mymap[12] = 2;
    mymap[13] = 3;
 
    // using begin() to print map
    for (auto it = mymap.begin();
         it != mymap.end(); ++it)
        cout << it->first + 1 << " = "
             << it->second << '\n';
    return 0;
}