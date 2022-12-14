// O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector <int > sum ; 
      for (int i = 0 ; i < nums.size() -1 ; i++ ){
          for (int j = i+1 ; j < nums.size()  ; j++){
              if (target == nums[i] + nums[j]){
                  return {i , j} ; 
              }
          }
      
       
      }
      return {0} ; 
    }
};
O(n)
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map <int , int > mp ; 
     vector <int > ret ; 
     int i ; 
     for ( i =0 ; i < nums.size() ; i++){
         if (mp.find(target - nums[i]) != mp.end()){
           // return { i ,  mp[target- nums[i] ]} ;  
            ret.push_back(i) ; 
            ret.push_back(mp[target - nums[i]]) ; 
            return ret ; 
         }
           mp[nums[i]] = i ; 
     }
      
     return ret ; 

    }
};

*/
