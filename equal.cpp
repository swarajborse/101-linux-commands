class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int pscore = 0, nscore = 0;

            
            for (int k = 0; k <= i; k++) {
                pscore += (s[k] - 'a' + 1); 
            }

            
            for (int j = i + 1; j < n; j++) {
                nscore += (s[j] - 'a' + 1);
            }

            if (pscore == nscore) return true;
        }
        return false;
    }
};
