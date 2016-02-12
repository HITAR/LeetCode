#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <ctime>
#include <map>
using namespace std;

/*
*Hash solution
*/

int majorityElement(vector<int>& nums)
{
    map<int, int> counts; 
    int n = nums.size();
    for (int i = 0; i < n; i++)
        if (++counts[nums[i]] > n / 2)
             return nums[i];
}


/**
* Sort solutions. nth_element() is a nice function.
*/

int majorityElement_sort1(vector<int>& nums)
{
     sort(nums.begin(),nums.end());
     int len = nums.size();
     return nums[len/2];
}
int majorityElement_sort2(vector<int>& nums) {
        nth_element(nums.begin(), nums.begin() + nums.size() / 2, nums.end());
        return nums[nums.size() / 2];
}

/*
*Randomization.This is a really nice idea and works pretty well. 
(16ms running time on the OJ, almost fastest among the C++ solutions).
*The code is as follows, randomly pick an element and see if it is the majority one.
*/


int majorityElement_random(vector<int>& nums)
{
	srand(unsigned(time(NULL)));
	int n = nums.size();
	while(true)
    {
        int idx = rand() % n;
        int candidate = nums[idx];
        int counts = 0;
        for(int i=0;i<n;i++)
            if(nums[i] = candidate)
                counts++;
        if(counts>n/2)
            return candidate;
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

