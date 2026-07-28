class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        
        int m1 = -1000;
        int p1;
        for(int i = 0; i < n; i++){
            if(m1 < nums[i]){
                m1 = nums[i];
                p1 = i;
            }
        }
        int m2 = -1000;
        int p2;
        for(int i = 0; i < n; i++){
            if(m2 < nums[i] && i != p1){
                m2 = nums[i];
                p2 = i;
            }
        }
        int m3 = -1000;
        int p3;
        for(int i = 0; i < n; i++){
            if((i != p1 && i != p2) && m3 < nums[i]){
                m3 = nums[i];
                p3 = i;
            }
        }

        int ans1 = m1 * m2;
        ans1 = ans1 * m3;

        int m4 = 1000;
        int p4;
        for(int i = 0; i < n; i++){
            if(m4 > nums[i]){
                m4 = nums[i];
                p4 = i;
            }
        }

        int m5 = 1000;
        int p5;
        for(int i = 0; i < n; i++){
            if(i != p4 && m5 > nums[i]){
                m5 = nums[i];
                p5 = i;
            }
        }

        int ans2 = m4*m5;
        ans2 = ans2 * m1;

        return max(ans1, ans2);
    }
};