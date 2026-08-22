class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.length();
        int count = 0;

        vector<int> lastsmall(26, -1);
        vector<int> firstcaps(26, -1);

        for (int i = 0; i < n; i++) {
            char c = word[i];   // Store the current character in c

            if (c >= 'a' && c <= 'z') {
                lastsmall[c - 'a'] = i; //Store the FIRST occurrence of this lower case character.
            }
            else if (c >= 'A' && c <= 'Z') {
                if (firstcaps[c - 'A'] == -1) // Only store the position if this  uppercase letter has NOT appeared before
                    firstcaps[c - 'A'] = i; //Store the FIRST occurrence of this uppercase character.
            }
        }

        for (int i = 0; i < 26; i++) { // applying all the 3 conditions here 
            if (lastsmall[i] != -1 &&
                firstcaps[i] != -1 &&
                lastsmall[i] < firstcaps[i]) {
                count++;
            }
        }

        return count;
    }
};