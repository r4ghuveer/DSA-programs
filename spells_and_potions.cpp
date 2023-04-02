class Solution {
public:
    int valid_pos(vector<int>& potions, long long success, int spell){
        long potion_needed = (success + spell - 1) / spell;
        (success + spell - 1) // spell is used to round up the value of potion_needed.

// For example, if success = 12, spells = [2, 5, 7]

// If you simply do potion_needed = success // spell, your potion_needed value would be [6, 2, 1].

// In this case 5 x 2 = 10, which is less than success 12, and 7 x 1 = 7, less than success 12. In other words, the potion_needed value will NOT be strong enough for potion_needed * spell >= success. Thus when you calculate how many valid pairs can be formed, you will be including invalid pairs where potion_needed * spell < success. (since the index you found was wrong)

// You need to round up 12 // 5 to 3 and 12 // 7 to 2, so that potion_needed * spell > success.

// Using the formula (success + spell - 1) // spell,

// (12 + 5 - 1) // 5 = 16 // 5 = 3
// (12 + 7 - 1) // 7 = 18 // 7 = 2

// 3 and 2 are the values of potion_needed, for respective spell strengths 5 and 7.

// You do (success + spell - 1) so that in case success can be perfectly divided by spell without any remainder (e.g. 12 divided by 3), potion_needed will not overshoot the minimum strength required. I.e.

// (12 + 3 - 1) // 3 = 14 // 3 = 4 (correctly gives you 4 as the minimum)
// (12 + 3) // 3 = 15 // 3 = 5 (incorrectly gives you 5 as the minimum. Hence you need to do -1)

// Hope this helps.

        int l=0,r=potions.size();
        while(l<r){
            int mid = l + (r-l)/2;
            if(potions[mid] >= potion_needed)
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> res;
        for (int spell: spells) {
            res.push_back(potions.size()- valid_pos(potions, success, spell));
        }

        return res;
    }
};