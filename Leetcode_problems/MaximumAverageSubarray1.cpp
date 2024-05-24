// problem link
// https://leetcode.com/problems/maximum-average-subarray-i/description/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long int n = nums.size();
        long long int s = 0, e = 0;
        double max_val = 0;
        double sum = 0;

        for(e = 0;e < k;e++){
            sum += nums[e];
        }

        max_val = sum/k;

        for(e = k;e < n;e++){
            sum -= nums[s];
            sum += nums[e];

            double cur_avg = sum/k;
            if(cur_avg > max_val){
                max_val = cur_avg;
            }
            s++;
        }

        return max_val;
    }
};
