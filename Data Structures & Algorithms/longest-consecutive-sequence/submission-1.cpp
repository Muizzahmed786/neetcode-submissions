class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(), nums.end());

        int length = 1;
        int current = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) continue;
            else if(nums[i] == nums[i-1] + 1) current++;
            else{
                length = max(length, current);
                current = 1;
            }
        }

        return max(length, current);
    }
};
