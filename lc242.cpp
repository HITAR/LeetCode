/**  The solutions are from clever StefanPochmann
*	in LeetCode.com
*
*/


/**
*Solution 1: Hash Table
*
*This idea uses a hash table to record the times of appearances of each letter in the two strings s and t.
	*For each letter in s, it increases the counter by 1 while for each letter in t, it decreases the counter by 1. 
*Finally, all the counters will be 0 if they two are anagrams of each other.
*/

Class Solution
{
	public:
		bool inAnagram(string s,string t)
	{
		if(s.length()!=t.length())
	        return false;
	    int n = s.length();
	    map<char,int> counts;
	    for(int i=0; i<n; i++)
	    {
	        counts[s[i]]++;
	        counts[t[i]]--;
	    }
	    map<char,int>::iterator iter;
	    for(iter = counts.begin();iter!=counts.end();iter++)
	        if(iter->second) return false;
	    return true;
	}
}



/**
*Solution 2: Sort
*For two anagrams, once they are sorted in a fixed order, 
*they will become the same.
*/

Class Solution
{
	public:
		bool isAnagram(string s,string t)
		{
			sort(s.begin(),s.end());
			sort(t.begin(),t.end());
			return s==t;
		}
}



