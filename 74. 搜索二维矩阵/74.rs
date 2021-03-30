impl Solution {
    pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
        let mut min = 0;
        let mut max = matrix.len()-1;
        let mut i:i32;
        let mut j:i32;
        while min!=max{
            let mid = (min+max+1)/2;
            if(target>=matrix[mid][0]){
                min = mid;
            }
            else{
                max = mid-1;
            }
        }
        let i = min;
        min = 0;
        max = matrix[0].len()-1;
        while(min!=max){
            let mid = (min+max+1)/2;
            if(target>=matrix[i][mid]){
                min = mid;
            }
            else{
                max = mid-1;
            }
        }
        let j = min;
        if(target==matrix[i][j]){
            return true;
        }
        else{
            return false;
        }
    }
}