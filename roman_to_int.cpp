class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> roman = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };

        int total=roman[s.back()];
        unordered_map<string,int> :: iterator itr;
        for (int i=s.length()-2; i>=0;--i){
            if(roman[s[i]]<roman[s[i+1]]){
                total-=roman[s[i]];
            }
            else{
                total+=roman[s[i]];
            }
        }
        return total; 
    }
};