/* https://leetcode.com/problems/3sum/description/ */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n =nums.size();
      sort(nums.begin(), nums.end());
      set<vector<int>> s;
      vector<vector<int>> o;
      for(int i=0; i<n-2; i++){
          for(int j=i+1; j<n-1; j++){
              for(int k=j+1; k<n; k++){
                  if(i!=j && i!=k && j!=k && (nums[i]+nums[j]+nums[k]==0)){
                              s.insert({nums[i], nums[j], nums[k]});
                          }
              }
          }
      }  
      for(auto it: s){
          o.push_back(it);
      }
      return o;
    }
};