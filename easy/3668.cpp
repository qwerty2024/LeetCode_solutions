class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_set<int> us;
        
        for (int i = 0; i < friends.size(); i++) {
            us.insert(friends[i]);
        }

        for (int i = 0; i < order.size(); i++) {
            if (us.contains(order[i]))
                ans.push_back(order[i]);
        }

        return ans;
    }
};