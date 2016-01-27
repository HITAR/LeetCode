void moveZeroes1(vector<int>& nums)
{
    for(int cnt = 0,i = 0; cnt < nums.size(); cnt++ )
    {
        if(nums[i] == 0)
        {
            nums.erase(nums.begin()+i);
            nums.push_back(0);
        }
        else i++;
    }
}
