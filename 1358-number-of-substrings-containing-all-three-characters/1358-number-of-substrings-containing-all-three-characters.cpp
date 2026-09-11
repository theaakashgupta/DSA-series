class Solution {
public:
    int numberOfSubstrings(string s) {
    
        int A = -1;
        int B = -1 ;
        int C = -1;
        int ans =0;
        int count = 0;

        int i =0 ;
        for ( int j = 0 ; j < s.size(); j++){
            if (s[j] == 'a')
            A = j;

            else if  
                (s[j] == 'b')

                B = j;
            

            else {

            
                C = j;

            }

            if ( A != -1 && B  != -1  && C != -1){
                ans += min (A ,min(B, C )) + 1;

            }

        }
        return ans;


        
    }
};