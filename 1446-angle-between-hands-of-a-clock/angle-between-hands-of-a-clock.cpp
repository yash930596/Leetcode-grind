class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans;
        ans=abs(30*hour - 5.5*minutes);
        if(ans>180)
        return (360-ans);
        else
        return ans;
        
    }
};