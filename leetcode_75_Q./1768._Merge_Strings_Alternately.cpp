#include <bits/stdc++.h>
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergestring="";
        int n= min(word1.length(), word2.length());
        for(int i=0;i<n;i++){
            mergestring += word1[i];
            mergestring += word2[i];
        }

        mergestring += word1.substr(n);
        // here substr(n) means, n ke baad jo bhi index bcha h large wrod me wo sari substring isme aa jayegi.
        //word1.substr(n) extracts a substring of word1 starting from the position n (which is 3 in this example) to the end of the string. So, in our example, word1.substr(3) gives us "def", the remaining characters from word1.
        mergestring += word2.substr(n);

return mergestring;
    }
};
