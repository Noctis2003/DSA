int largest(int arr[], int n) {
    int largest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {  // Corrected comparison
            largest = arr[i];
        }
    }
    return largest;
}


// what we basically did was
// create largest variable and initialize it with -1
// now we iterated through the array and checked if the current element is greater than the largest element
// if it is then we updated the largest element
// and so on