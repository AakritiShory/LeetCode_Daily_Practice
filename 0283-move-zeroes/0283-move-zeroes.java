class Solution {
    public void moveZeroes(int[] arr) {
  int n = arr.length;
        int j = 0; // Pointer for the next zero position

        // Traverse the array
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                // Swap non-zero element with the element at index `j`
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++; // Increment the zero pointer
            }
        }
      
    }
}