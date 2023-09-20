class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum+nums[i];
            if(sum>maxi) maxi=sum;
            if(sum<0) sum=0;
        }return maxi;
    }
};

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int sum=0,maxi=INT_MIN;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum=sum+nums[i];
//             if(sum>maxi) maxi=sum;
//             if(sum<0) sum=0;
//         }return maxi;

//     }
// };