//Remove Element

int removeElement(int* nums, int numsSize, int val) {
    int* current = nums;
    int len = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            *current = nums[i];
            current++;
            len++;
        }
    }
    return len;
}
