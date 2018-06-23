// Search Insert Position

int binarySearchInsert(int* nums, int start, int numsSize, int target) {
        int mid = (start + numsSize)/2;

        if (nums[mid-1] < target && target <= nums[mid]) {
            if (nums[mid-1] < target)
                    return mid;
            if (nums[mid-1] < target)
                    return mid - 1;
        }

        if (nums[mid] < target)
                return binarySearchInsert(nums, mid, numsSize,target);
        else
                return binarySearchInsert(nums, mid/2, mid,target);
}

int searchInsert(int* nums, int numsSize, int target) {
        int mid = numsSize/2;
        if(target <= nums[0])
                return 0;
    
        if(nums[numsSize-1] < target)
                return numsSize;
    
        if (nums[mid-1] <= target && target <= nums[mid]){
            if (nums[mid-1] < target)
                return mid;
            if (nums[mid-1] == target)
                return mid -1;
        }

        if (nums[mid] < target)
                return binarySearchInsert(nums, mid, numsSize,target);
        else    
                return binarySearchInsert(nums, mid/2, mid,target); 
}
