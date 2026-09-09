class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        unordered_map < char , int > mp;
        int i =0;

        int maxL = 0 ;
        int j = 0;

        while ( j < n ) {
            if (mp.find(s[j]) != mp.end()) {
                i = max( i , mp[s[j] ] + 1);
            }

            mp[s[j]] = j ;
            maxL = max ( maxL , j - i  + 1);
            j++;
            
        }

        return maxL;


        
        
    }

    
};