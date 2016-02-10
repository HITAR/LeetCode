#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<int>::iterator iter = nums.end()-1;
    int cnt[*iter];
    memset(cnt,0,sizeof(int)*(*iter));
    for(iter = nums.begin(); iter!=nums.end(); iter++)
    {
        cnt[*iter]++;
    }
    for(iter = nums.begin(); iter!=nums.end(); iter++)
    {
        if(cnt[*iter]>=n/2)
            return *iter;
    }

}


int main()
{
    vector<int> nums;
    nums.clear();
    nums.push_back(2);
     nums.push_back(1);
      nums.push_back(4);
       nums.push_back(7);
        nums.push_back(4);
         nums.push_back(4);
     nums.push_back(4);
     nums.push_back(6);
      nums.push_back(4);
       nums.push_back(7);
     //[2147483647]
   /*  sort(nums.begin(),nums.end());
     vector<int>::iterator iter;
    iter = nums.end()-1;
     cout<<*iter;*/
    /*   for(iter = nums.begin(); iter!=nums.end(); iter++)
    {
        cout<<*iter<<" ";
    }*/

    int rt = majorityElement(nums);
    cout<<rt<<endl;
    return 0;
}

