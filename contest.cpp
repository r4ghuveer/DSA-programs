#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getAllSubSequencesOfLengthK(vector<int> nums, int k) {
    vector<vector<int>> result;
    for (int i = 0; i <= nums.size() - k; i++) {
        for (int j = i + 1; j <= nums.size() - k + 1; j++) {
            vector<int> subSequence;
            for (int l = i; l < j; l++) {
                subSequence.push_back(nums[l]);
            }
            result.push_back(subSequence);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int k = 2;
    vector<vector<int>> subSequences = getAllSubSequencesOfLengthK(nums, k);
    for (auto subSequence : subSequences) {
        for (auto x : subSequence) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
