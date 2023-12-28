// 你是产品经理，目前正在带领一个团队开发新的产品。不幸的是，你的产品的最新版本没有通过质量检测。由于每个版本都是基于之前的版本开发的，所以错误的版本之后的所有版本都是错的。
// 假设你有 n 个版本 [1, 2, ..., n]，你想找出导致之后所有版本出错的第一个错误的版本。
// 你可以通过调用 bool isBadVersion(version) 接口来判断版本号 version 是否在单元测试中出错。实现一个函数来查找第一个错误的版本。你应该尽量减少对调用 API 的次数。
 
// 示例 1：
// 输入：n = 5, bad = 4
// 输出：4
// 解释：
// 调用 isBadVersion(3) -> false 
// 调用 isBadVersion(5) -> true 
// 调用 isBadVersion(4) -> true
// 所以，4 是第一个错误的版本。

// 二分查找，也称为折半查找，是一种在有序数组中查找目标元素的高效算法。它的基本思想是通过比较目标值和数组中间元素的大小关系，不断缩小查找范围，直到找到目标元素或确定目标元素不在数组中。

// 以下是二分查找的基本步骤：
// 初始化： 定义两个指针，一个指向数组的起始位置（通常为 left），另一个指向数组的末尾位置（通常为 right）。
// 循环： 在每一次循环中，计算中间位置 mid，并将中间位置的元素与目标元素进行比较。
// 如果中间位置的元素等于目标元素，则找到了目标，返回中间位置。
// 如果中间位置的元素大于目标元素，则说明目标元素可能在左半部分，更新 right = mid - 1。
// 如果中间位置的元素小于目标元素，则说明目标元素可能在右半部分，更新 left = mid + 1。
// 终止条件： 当 left 大于 right 时，表示整个数组已经被搜索完毕，但仍未找到目标元素，此时返回一个特殊值（例如 -1）表示未找到。


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution {
public:
    int firstBadVersion(int n) {
        int right = n;
        int left = 1;
        int mid;
        
        while(left < right){
            mid = left + (right - left) / 2;  //在第一次我在这里有失误，把mid赋值放在了循环外，这会导致超时
            if(isBadVersion(mid)){
                right = mid ;

            }else{
                left = mid + 1;
            }

        }
        return left;
    }
};

// 时间复杂 O(logn) 

