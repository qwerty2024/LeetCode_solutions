bool Cmp(const int& a, const int& b) {
    if (__popcount(a) == __popcount(b)) {
        return a < b;
    }
    else
        return __popcount(a) < __popcount(b);
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), Cmp);

        return arr;
    }
};