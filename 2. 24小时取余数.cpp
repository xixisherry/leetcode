// 给你一个正整数 arrivalTime 表示列车正点到站的时间（单位：小时），另给你一个正整数 delayedTime 表示列车延误的小时数。

// 返回列车实际到站的时间。

// 注意，该问题中的时间采用 24 小时制.

// 示例 1：

// 输入：arrivalTime = 15, delayedTime = 5 
// 输出：20 
// 解释：列车正点到站时间是 15:00 ，延误 5 小时，所以列车实际到站的时间是 15 + 5 = 20（20:00）。

//第一边做的时候没反应过来，实际上只需要return（arrivalTime+delayedTime）% 24;一行
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
       int sum =0;
       if(arrivalTime+delayedTime<24){
            sum = arrivalTime+delayedTime;
            return sum;
        }
        else{
            sum = arrivalTime+delayedTime;
            while(sum >= 24){
                sum = sum%24;
            }
            return sum;
        }
    }
};

//return（arrivalTime+delayedTime）% 24;
