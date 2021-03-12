/**
 * @param {string} preorder
 * @return {boolean}
 */
 var isValidSerialization = function(preorder) {
    let stack_free = 1;
    preorder = preorder.split(',');
    // console.log(preorder);
    let i=0,n = preorder.length;
    while(i<n)
    {
        if(preorder[i]=='#')
        {
            stack_free-=1;
            i++;
        }
        else
        {
            stack_free-=1;
            if(stack_free<0)
            {
                return false;
            }
            stack_free+=2;
            i++;
        }
    }
    return stack_free==0;
};