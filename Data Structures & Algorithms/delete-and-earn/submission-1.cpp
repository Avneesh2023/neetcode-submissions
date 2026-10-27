class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> points(10001);
        for (int x : nums)
         points[x] += x;
        int prev = 0, best = 0;
        for (int score : points) {
            int next = max(best, prev + score);
            prev = best; 
            best = next;
        }
        return best;
    }
};
