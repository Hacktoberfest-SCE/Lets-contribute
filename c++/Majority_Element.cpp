class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int posit=0;
        for(int num:nums){
            if(cnt==0){
                posit=num;
            }
            if(posit==num){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return posit;
    }
};
