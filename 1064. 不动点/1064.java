class Solution {
    public int fixedPoint(int[] A) {
        int left = 0;
        int right = A.length - 1;
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (A[mid] < mid) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return A[left] == left ? left : -1;
    }
}
