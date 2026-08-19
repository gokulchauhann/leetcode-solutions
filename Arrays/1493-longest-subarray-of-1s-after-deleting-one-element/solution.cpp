//LeetCode #1493 - Longest Subarray of 1s After Deleting One Element
//Approach: Sliding Window - expand with j, shrink from i whenever zero count exceeds 1
//Difficulty: Medium
/*Time Complexity: O(n)
  Space Complexity:O(1)
*/  
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j,zeroes=0,res=0;
        for(j=0;j<n;j++){
            if(nums[j]==0)
            zeroes++;
        while(zeroes>1){
            if(nums[i]==0)
                zeroes--;
                i++;
        }
        res = max(res,j-i);  

        }
        return res;
    }
};
