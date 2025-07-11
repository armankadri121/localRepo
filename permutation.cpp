#include<bits/stdc++.h>
using namespace std;

class Permutation {
    private:
    void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans) {
        if(index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++) {
            swap(nums[index], nums[i]);
            recurPermute(index+1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }

    public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> ans;
        recurPermute(0, nums, ans);
        return ans;
    }
};

int main() {
    vector<int> arr = {1,2,3};
    Permutation p;
    vector<vector<int>> result = p.permute(arr);

    for(auto vec: result) {
        for(auto num: vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}