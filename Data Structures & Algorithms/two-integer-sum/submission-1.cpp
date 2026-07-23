class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int compliment = target - nums[i];
            if(mp.contains(compliment)){
                result.push_back(mp[compliment]);
                result.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }

        return result;
    }
};
