impl Solution {
    pub fn fixed_point(arr: Vec<i32>) -> i32 {
        let mut left = 0;
        let mut right = arr.len() - 1;
        while (left < right) {
            let mid = (left + right) / 2;
            if (arr[mid] < mid as i32) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        if arr[left] == left as i32{
            return left as i32;
        }
        else{
            return -1;
        }
    }
}