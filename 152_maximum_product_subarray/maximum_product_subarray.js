/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    let maxProd = nums[0];
    let minProd = nums[0];
    let result = nums[0];
    
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] < 0) [maxProd, minProd] = [minProd, maxProd];
        
        maxProd = Math.max(nums[i], maxProd * nums[i]);
        minProd = Math.min(nums[i], minProd * nums[i]);
        
        result = Math.max(result, maxProd);
    }
    
    return result;
};