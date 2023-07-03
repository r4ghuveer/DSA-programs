#include <iostream>
using namespace std;

int swaping(int x){
    return ((x & 0b00001111)<<4 | (x & 0b11110000)>>4);
}

int main(){
    int inp=100;
    cout<<swaping(inp);
}