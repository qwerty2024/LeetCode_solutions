class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        if (xCenter >= x1 - radius && xCenter <= x2 + radius && yCenter <= y2 && yCenter >= y1) {
            return true;
        }

        if (xCenter >= x1 && xCenter <= x2 && yCenter <= y2 + radius && yCenter >= y1 - radius) {
            return true;
        }

        if (xCenter >= x2 && yCenter >= y2 && sqrt((double)(x2 - xCenter) * (x2 - xCenter) + (y2 - yCenter) * (y2 - yCenter)) <= (double)radius) {
            return true;
        }

        if (xCenter >= x2 && yCenter <= y1 && sqrt((double)(x2 - xCenter) * (x2 - xCenter) + (y1 - yCenter) * (y1 - yCenter)) <= (double)radius) {
            return true;
        }

        if (xCenter <= x1 && yCenter <= y1 && sqrt((double)(x1 - xCenter) * (x1 - xCenter) + (y1 - yCenter) * (y1 - yCenter)) <= (double)radius) {
            return true;
        }

        if (xCenter <= x1 && yCenter >= y2 && sqrt((double)(x1 - xCenter) * (x1 - xCenter) + (y2 - yCenter) * (y2 - yCenter)) <= (double)radius) {
            return true;
        }
        
        return false;
    }
};