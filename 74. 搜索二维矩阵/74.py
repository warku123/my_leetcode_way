class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        h = len(matrix)
        w = len(matrix[0])
        i = 0
        j = 0
        while(i<h and j<w):
            # print(matrix[i][j])
            if(matrix[i][j]==target):
                return True
            elif(i+1<h and matrix[i+1][j]<=target):
                i+=1
            elif(j+1<w and matrix[i][j+1]<=target):
                j+=1
            else:
                return False
        return False