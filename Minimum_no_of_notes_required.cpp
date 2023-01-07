#include <bits/stdc++.h>
using namespace std;
 
// function to count and
// print currency notes
void countCurrency(int amount)
{
    int notes[7] = {100,50, 20, 10, 5,2, 1 };
    int noteCounter[7] = { 0 };
     
    // count notes using Greedy approach
    for (int i = 0; i < 7; i++) {
        if (amount >= notes[i]) {
            noteCounter[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }
     
    // Print notes
    int total=0;
    for (int i = 0; i < 7; i++) {
        if (noteCounter[i] != 0) {
            total+=noteCounter[i];
        }
    }
    cout<<total;
}
 
// Driver function
int main()
{
    int amount = 500;
    countCurrency(amount);
    return 0;
}