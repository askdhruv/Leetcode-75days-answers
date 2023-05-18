class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word;
        int i=0,j=0;
        int m = word1.size();
        int n = word2.size();
        while(i<m || j<n){
            if(i<m){
                word.push_back(word1[i]);
                i++;
            }
            if(j<n){
                word.push_back(word2[j]);
                j++;
            }
        }
        return word;
    }
};
