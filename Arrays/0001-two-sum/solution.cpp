//LeetCode #1 - Two Sum
//Approach: Brute Force - for each element, check every other element to find a pair that sums to target
//Difficulty: Easy
/*Time Complexity: O(n^2)
  Space Complexity:O(1)
*/  
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            for(int j=i+1;j<n;j++){
                if (diff == nums[j]){
                    return {i,j};

                }
                
            }
        
        }
        return{};
        
    }

};
