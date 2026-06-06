class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto& i:nums){
            m[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& j:m){
            bucket[j.second].push_back(j.first);
        }
        vector<int> result;
        for(int i=bucket.size()-1;i>=0;i--){
            for(auto& b:bucket[i])
            {
                result.push_back(b);
                if (result.size()==k){
                    return result;
                }
        }

    }
    return result;
    }
};
