/**
 * Day 15 - Product of Array Except Self
 *
 * https://github.com/agileshaw/30-Day-LeetCoding-Challenge
 **/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int i, prefix = nums[0], suffix = nums[numsSize-1];
    int* array = malloc(sizeof(int) * numsSize);

    *returnSize = numsSize;
    array[0] = 1;

    for (i = 1; i < numsSize; i++) {
        array[i] = prefix;
        prefix *= nums[i];
    }

    for(i = numsSize-2; i >= 0; i--) {
        array[i] *= suffix;
        suffix *= nums[i];
    }

    return array;
}
