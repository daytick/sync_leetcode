/**
* 删除排序数组中的重复项
*/
int removeDuplicates(int* nums, int numsSize){
    // 边界条件
    if(numsSize <= 1){
        return numsSize;
    }
    // 当前查看的元素
    int current = 1;
    // 不重复元素的边界
    int bound = 0;
    // 循环查看元素
    while(current < numsSize){
        if(nums[current] != nums[bound]){
            bound++;
            nums[bound] = nums[current];
        }
        current++;
    }
    return bound + 1;
}
