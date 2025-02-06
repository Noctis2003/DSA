// here we have to rotate the array by k elements
// for example we have [1,2,3,4,5,6,7]
// and we have to rotate it by 3 elements
// so the output will be [5,6,7,1,2,3,4]
// basically we want the last three elements to come to the front in a sorted manner
// we can either do this by using a stack
// or we can reverse the array so that it becomes [7,6,5,4,3,2,1]
// now we reverse the first k elements ie [5,6,7,4,3,2,1]
// now we reverse the last n-k elements ie [5,6,7,1,2,3,4]
// and we have our answer



class Solution {
public:
// you can have as many traversals as you want 



    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k = k % n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }

};