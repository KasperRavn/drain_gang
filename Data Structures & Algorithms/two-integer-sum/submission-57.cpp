class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> index;
        std::unordered_map<int, int> harSet;
        for(int i = 0; i < nums.size(); i++) {
            int forskel = target - nums[i];
            if (harSet.find(forskel) != harSet.end()) {
                index.push_back(harSet[forskel]);
                index.push_back(i);
                return index;
            }
            else {
                harSet[nums[i]] = i;
            }
        }
        return index;

    }
};
