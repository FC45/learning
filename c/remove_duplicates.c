// remove duplicates 8ms 161 test case

int removeDuplicates(int* nums, int numsSize) {
        if (!numsSize)
            return 0;
        int* current = nums;

        for (int i = 1; i < numsSize; i++) {
                if (nums[i] != nums[i-1]) {
                        *++current = nums[i];
                } 
        }
        return 1 + current - nums;
}

