class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
     int n=nums.size();
     int k=0;
     for(int i=1;i<n;i++){
        if(nums[k]!=nums[i]){
            k++;
            nums[k]=nums[i];
        }
     }   
  
 
  return k+1;
  }
};



// this was a tricky one
// you can either do it via hashing
// or you can do it via two pointers
// i did it via two pointers
// there i a pointer k initialized to 0
// and an i initialized to 1
// now we iterate through the array
// if the element at k is not equal to the element at i
// we increment k 
// then
// we update the element at k to the element at i

// lets say the array is [0,1,1,1,2]
// k and i are there
// k=0 i=1
// now array[k]!=array[i]
// so we increment k
// and update array[k] to array[i]
// now we have k=1 and i=1
// now loop begins
// i will move till it encounters a 2
// now k=1 and i=4
// now array[k]!=array[i]
// so we increment k
// and update array[k] to array[i]