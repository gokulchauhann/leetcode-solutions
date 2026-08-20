//LeetCode #713 - Subarray Product Less Than K
//Approach: Sliding Window / Two Pointers 
//Difficulty: Medium
/*Time Complexity: O(n)
  Space Complexity:O(1)
*/  
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size(),i=0,j,prod=1,res=0;
        if(k<=1){
            return 0;
        }
        for(j=0;j<n;j++){
            prod *= nums[j];
            while(prod>=k){
                prod /=nums[i];
                  i++;}
            res += (j-i+1);
        }
       return res; 
        
    }
};
