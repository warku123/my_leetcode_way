/**
 * @param {number[]} nums
 * @return {number}
 */
 var deleteAndEarn = function(nums) {
    if(nums.length==0){
        return 0;
    }
    else if(nums.length==1){
        return nums[0];
    }
    let length = Math.max(...nums);
    const all_nums = new Array(length+1).fill(0);
    const dp = new Array(length+1).fill(0);
    for(const i of nums){
        all_nums[i] ++;
    }
    dp[0] = 0;
    dp[1] = all_nums[1];
    for(let i=2;i<length+1;i++){
        dp[i] = Math.max(dp[i-2]+all_nums[i]*i,dp[i-1]);
    }
    return dp[length];
};