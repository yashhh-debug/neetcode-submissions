class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]++;
        }

        vector<pair<int,int>> v;

        for(auto it : mp){
            v.push_back({it.second, it.first});
        }

        sort(v.begin(), v.end());

        vector<int> ans;

        for(int i = v.size()-1; k > 0; i--, k--){
            ans.push_back(v[i].second);
        }

        return ans;
    }
};