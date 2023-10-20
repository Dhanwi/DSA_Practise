class Solution {
public:
    string reverseVowels(string s) {
        set<char> vwls = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int start = 0;
        int end = s.length() - 1; // Initialize 'end' to the last character index.

        while (start < end) {
            if (vwls.find(s[start]) != vwls.end() && vwls.find(s[end]) != vwls.end()) {
                
                
    /*             here:
    
    The expression vwls.find(s[start]) != vwls.end() is used to check whether the character s[start] is found in the set vwls, which contains vowels.

Here's how it works:

vwls.find(s[start]) searches for the character s[start] within the set vwls. If the character is found, it returns an iterator to the position where it was found in the set. If the character is not found, it returns vwls.end(), which is an iterator pointing to one past the last element in the set.

vwls.end() represents the end of the set and is commonly used to check for unsuccessful searches in a set.
*/

                swap(s[start], s[end]);
                start++;
                end--;
            } else if (vwls.find(s[start]) != vwls.end()) {
                end--;
            } else if (vwls.find(s[end]) != vwls.end()) {
                start++;
            } else {
                start++;
                end--;
            }
        }

        return s;
    }
};
