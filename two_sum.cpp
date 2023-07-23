/*https://leetcode.com/problems/two-sum/description/*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /* for(int i=0; i<nums.size(); i++){
           for(int j=0; j<nums.size(); j++){
               if(nums[i]+nums[j]==target){
                   return {i,j};                 brute force o(n^2)
               }
           }
       } 
       return{};*/
       unordered_map<int,int> nm;
       int n = nums.size();
       for(int i=0; i<n; i++){
           int c=target-nums[i];                 //one pass hash table o(n)
           if(nm.count(c)){
               return {nm[c],i};
           }
           nm[nums[i]]=i;
       }
       return{};
    }
};