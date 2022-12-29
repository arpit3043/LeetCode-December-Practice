/*
Suppose you have a sorted array of infinite numbers, how would you search an element in the array?
Source: Amazon Interview Experience.
Since array is sorted, the first thing clicks into mind is binary search, but the problem here is that we don’t know size of array.
If the array is infinite, that means we don’t have proper bounds to apply binary search. So in order to find position of key, first we find bounds and then apply binary search algorithm.
Let low be pointing to 1st element and high pointing to 2nd element of array, Now compare key with high index element,
->if it is greater than high index element then copy high index in low index and double the high index.
->if it is smaller, then apply binary search on high and low indices found.

 */
package Arrays;
public class searchElementinInfiniteArray {
    public static void main(String[] args) {
        int[] arr = {1,3,5,7,9,11,13,15};
        int target = 11;
        System.out.println(binarySearch(arr, 0, arr.length-1, target));
        System.out.println(findPos(arr, 11));
    }
    public static int binarySearch(int[] A, int start, int end, int target) {
        start = 0;
        end = A.length-1;
        int mid = start+(end-start)/2;
        while (start<=end) {
            if(A[mid]==target) {
                return mid;
            }
            else if(A[mid]<target) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return mid;
    }
    // Method takes an infinite size array and a key to be
    // searched and returns its position if found else -1.
    // We don't know size of arr[] and we can assume size to be
    // infinite in this function.
    // NOTE THAT THIS FUNCTION ASSUMES arr[] TO BE OF INFINITE SIZE
    // THEREFORE, THERE IS NO INDEX OUT OF BOUND CHECKING
    public static int findPos(int[] arr,int key) {
        int l = 0;
        int h = 1;
        int val = arr[0];
        // Find h to do binary search
        while (val < key) {
            // store previous high
            l = h;
            //check that 2*h doesn't exceeds array
            //length to prevent ArrayOutOfBoundException
            if(2*h < arr.length-1) {
                h = 2*h;
            }
            else {
                h = arr.length-1;
            }
            // update new val
            val = arr[h];
        }
        // at this point we have updated low
        // and high indices, thus use binary
        // search between them
        return binarySearch(arr, l, h, key);
    }
}
