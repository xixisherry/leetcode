// 给你一个字符串 date ，按 YYYY-MM-DD 格式表示一个 现行公元纪年法 日期。返回该日期是当年的第几天。

// 示例 1：
// 输入：date = "2019-01-09"
// 输出：9
// 解释：给定日期是2019年的第九天。

//stoi and substr
class Solution {
public:
    int dayOfYear(string date) {
        // stoi可以把字符串转为数字，substr是截断字符串，substr(起始位置,截断长度)
        int year = stoi(date.substr(0,4));
        int month= stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        //
        int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int sum = 0;
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){ //闰年在2月数字加一
            ++ arr[1];
        }     

        for(int i = 0; i < month-1; i++){
            sum += arr[i];
            
        }
        
        return sum + day;
    }
};




