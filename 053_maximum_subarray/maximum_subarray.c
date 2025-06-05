#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int i = 1; i < numsSize; i++) {
        currentSum = MAX(nums[i], currentSum + nums[i]);
        maxSum = MAX(maxSum, currentSum);
    }
    
    return maxSum;
}