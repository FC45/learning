//Remove Element

int removeElement(int* nums, int numsSize, int val) {
    int* current = nums;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val)
            *current++ = nums[i];
    }
    return current-nums;
}
