class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> flowerbed_2(flowerbed.size() + 2, 0);
        for (int i = 0; i < flowerbed.size(); i++) {
            flowerbed_2[i + 1] = flowerbed[i];
        }

        int start = -1;
        for (int i = 0; i < flowerbed_2.size(); i++) {
            if (flowerbed_2[i] == 1) {
                start = i;
                break;
            }
        }

        if (start < 0)
            start = 1;

        // left
        for (int i = start; i > 0; i--) {
            if (flowerbed_2[i - 1] == 0 && flowerbed_2[i] == 0 && flowerbed_2[i + 1] == 0) {
                flowerbed_2[i] = 1;
                n--;
            }
        }

        for (int i = start; i < flowerbed_2.size() - 1; i++) {
            if (flowerbed_2[i - 1] == 0 && flowerbed_2[i] == 0 && flowerbed_2[i + 1] == 0) {
                flowerbed_2[i] = 1;
                n--;
            }
        }

        return !max(n, 0);
    }
};