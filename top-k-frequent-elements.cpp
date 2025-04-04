#include<algorithm>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

        for(auto it : nums){
            freq[it]++;
        }

        priority_queue<pair<int,int>, vector<pair<int, int>>,  greater<pair<int, int>> >q;

        for(auto it : freq){
            q.push({it.second, it.first});

            if(q.size() > k) q.pop();
        }

        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};