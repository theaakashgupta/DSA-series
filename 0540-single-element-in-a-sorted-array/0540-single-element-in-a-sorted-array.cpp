class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size ();
        map< int ,int > freq;
        for ( int num : nums ){
            freq[num]++;
        }
        

        for ( auto it : freq ){
            if (it.second == 1 ){
                return it.first;
            }
        }

        return -1;

    }
    
};