class Solution {
   public:
    bool isAnagram(string s, string t) {
        array<int,26> arr1{};
        array<int,26> arr2{}; 
        int n = s.length();
        int m = t.length();
        for (int i = 0; i < n; i++) {
                arr1[s[i]-97]++;
            }
        for (int j = 0; j < m; j++) {
                arr2[t[j]-97]++;
            }  
        for(int k = 0; k < 26; k++){
            if(arr1[k]!=arr2[k])
            return false;
        }
        return true;
        }
    };
