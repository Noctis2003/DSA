class Solution{
public:	
	// Function returns the second
	// largest elements
	 int largest(int arr[], int n)
    {
        int largest=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>=largest){
                largest=arr[i];
            }
        }
        return largest;
    }
	int print2largest(int arr[], int n) {
	    int x=largest(arr,n);
	    int y=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(y<arr[i]){
	            if(arr[i]<x && y!=x){
	                y=arr[i];
	            }
	        }
	    }
	    return y==INT_MIN?-1:y;
	}
};



// what we basically did was use the code for the largest element in an array 
// now once we have the largest element in the array 
// we enter the main code
// and now we find the largest element provided it is not equal to the largest element
// and we return the second largest element if it exists else we return -1