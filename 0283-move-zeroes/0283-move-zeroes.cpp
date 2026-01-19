class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[a] = nums[i];
                a++;
            }else{
                count++;
            }
        }

        for(int i = 0; i < count; i++){
            nums[a] = 0;
            a++;
        }




    }
};