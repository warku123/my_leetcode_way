class NumArray {
public:
    NumArray(vector<int>& nums) {
        int tmp=0;
        for(auto i:nums)
        {
            sums.push_back(tmp);
            tmp += i;
        }
        sums.push_back(tmp);
    }
    
    int sumRange(int i, int j) {
        return sums[j+1]-sums[i];
    }
private:
    vector<int> sums;
};


//简单前缀和，三月估计是个前缀和月
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */