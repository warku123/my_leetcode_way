class Solution:
    def isValidSerialization(self, preorder: str) -> bool:
        stack_free = 1
        preorder = preorder.split(',')
        for i in preorder:
            if(i!='#'):
                stack_free-=1
                if(stack_free<0):
                    return False
                stack_free+=2
            else:
                stack_free-=1
            
        return stack_free==0