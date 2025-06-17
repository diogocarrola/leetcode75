int findMin(int* nums, int numsSize) {
    int left = 0;
    int right = numsSize - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] < nums[right]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return nums[left];
}