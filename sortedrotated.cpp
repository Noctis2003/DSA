class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true; // Single-element array is trivially sorted and rotated
        
        int count = 0; // To count the number of breaks in the sorted order
        
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[i - 1]) {
                count++;
            }
        }
        
        // If there is more than one break, the array is not sorted rotated
        if (count > 1) return false;
        
        // If there are no breaks, it's already sorted (rotated array is a valid sorted array)
        if (count == 0) return true;
        
        // If there is exactly one break, check if the array is rotated properly
        // The array should end with a value not greater than the start of the array
        return nums[n - 1] <= nums[0];
    }
};


// what we basically did here is finding the number of breaks in the sorted order ie [nums[i] < nums[i - 1]]
// one break is ok
// more than one break is not ok
// if there are no breaks then the array is already sorted( or has been rotated n times where n is the size of the array)


// checkout this [2,1,3,4]
// it has one break but is not sorted rotated
// so we need to check if the last element is less than the first element
// because when we rotate the last elements will come to starting 
// such is the nature of the sorted rotated array