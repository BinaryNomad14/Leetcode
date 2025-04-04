class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map <int, bool> m;
        int ans = 0;

        for(auto num : nums){
            m[num] = true;
        }

        int prev = INT_MIN;
        int streak = 0;

        for(auto it : m){
            if(it.first == prev + 1 && prev != INT_MIN) streak++;
            else streak = 1;

            ans = max(ans, streak);
            prev = it.first;
        }
        return ans;
    }
};