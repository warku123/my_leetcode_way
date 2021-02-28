class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> tmp;
        sort(nums.begin(),nums.end());
        helper(nums,tmp);
        return res;
    }

    void helper(vector<int> nums,vector<int> tmp)
    {
        res.push_back(tmp);
        for(unsigned i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            vector<int> new_nums(nums.begin()+i+1,nums.end());
            tmp.push_back(nums[i]);
            helper(new_nums,tmp);
            tmp.pop_back();
        }
    }
};

//翻译了一遍python代码，注意因为tmp放在外面了，所以最后要pop