class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int leftP = 0;
        int rightP = n - 1;

        while(leftP < rightP){
            int width = rightP - leftP;
            int ht = min(height[leftP] , height[rightP]);
            int currWater = width * ht; 
            maxWater = max(maxWater , currWater);
            height[leftP] < height[rightP] ? leftP++ : rightP-- ;

        }
        return maxWater;
    }
};