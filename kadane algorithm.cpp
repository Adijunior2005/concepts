int maxSubArray(vector<int>& nums) {
        int maxSum=0;
        int currsum=0;
        int n= sizeof(nums);
        for(int n:nums){
        if (currsum<0){
            currsum=0;
        }
        currsum+=n;
        maxSum= max(currsum,maxSum);
        
        }
    return maxSum;
    }