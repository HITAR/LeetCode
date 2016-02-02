class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    map<int,int> mp;
    mp.clear();
    vector<int>::iterator iter;
    for(iter = nums.begin();iter!=nums.end();iter++)
    {
        mp[*iter] += 1;
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second!=1)
            return true;
    }
    return false;

    }
};
