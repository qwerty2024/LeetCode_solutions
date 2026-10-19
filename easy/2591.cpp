class Solution {
public:
    int distMoney(int money, int children) {
        // дали всем по 1, если не хватило то -1
        money -= children;
        if (money < 0)
            return -1;

        int ans = money / 7;
        money -= (money / 7) * 7;

        if (ans > children || (ans == children && money > 0))
            return children - 1; 

        if (money == 0)
            return ans;

        if (money > 3)
            return ans;
        
        if (money == 3 && children - ans > 1)
            return ans;
        
        if (money == 3)
            return max(0, ans - 1);

        return ans;
    }
};