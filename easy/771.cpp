class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> us;

        for (auto a : jewels)
            us.insert(a);

        int ans = 0;

        for (auto& a : stones)
            if (us.contains(a))
                ans++;
        
        return ans;
    }
};