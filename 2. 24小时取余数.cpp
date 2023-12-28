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
