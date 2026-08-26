# Delete Characters to Make Fancy String

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | August 26, 2026 |
| **Tags** | String |
| **Link** | [View Problem](https://leetcode.com/problems/delete-characters-to-make-fancy-string/) |
| **Runtime** | 36 ms |
| **Memory** | 44.6 MB |

## Approach

make sure to use freq and keep it as 1 

## Problem Description

<p>A <strong>fancy string</strong> is a string where no <strong>three</strong> <strong>consecutive</strong> characters are equal.</p>

<p>Given a string <code>s</code>, delete the <strong>minimum</strong> possible number of characters from <code>s</code> to make it <strong>fancy</strong>.</p>

<p>Return <em>the final string after the deletion</em>. It can be shown that the answer will always be <strong>unique</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> s = "le<u>e</u>etcode"
<strong>Output:</strong> "leetcode"
<strong>Explanation:</strong>
Remove an 'e' from the first group of 'e's to create "leetcode".
No three consecutive characters are equal, so return "leetcode".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> s = "<u>a</u>aab<u>aa</u>aa"
<strong>Output:</strong> "aabaa"
<strong>Explanation:</strong>
Remove an 'a' from the first group of 'a's to create "aabaaaa".
Remove two 'a's from the second group of 'a's to create "aabaa".
No three consecutive characters are equal, so return "aabaa".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="display: block;"><strong>Input:</strong> s = "aab"
<strong>Output:</strong> "aab"
<strong>Explanation:</strong> No three consecutive characters are equal, so return "aab".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of lowercase English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Best and Easiest Solution ✅✅ | C++ | Java | Python
**Author**: [@jay_singla](https://leetcode.com/jay_singla/)
**Upvotes**: 41 👍
**Link**: [View Original Post](https://leetcode.com/problems/delete-characters-to-make-fancy-string/solutions/5991071/)

---

# Intuition 
1) Tracking Consecutive Characters:

- The problem requires us to limit each character to appear at most twice consecutively.
- To achieve this, we can keep a count (cnt) of how many times the current character has appeared consecutively so far. This count lets us decide if the next character should be added or skipped.
2) Building the Result Incrementally:

- By starting with the first character of the input string s and iterating through the rest, we can build the result string (ans) one character at a time.
- This incremental approach allows us to check each character as it arrives, only adding it if it maintains the "fancy" requirement of no three consecutive identical characters.

3) Switching Between Characters:

- Whenever a new character (different from the previous one) is encountered, the consecutive count (cnt) is reset, allowing us to add the new character freely.
- This reset is crucial because a different character means there\u2019s no longer a risk of exceeding two consecutive characters.

# Approach
1) Initialize Variables:

- ans : This string (or string builder in Java) will store the final result.
- cnt : This integer counter tracks how many times the current character has appeared consecutively in the result string.
- n : Length of the input string s.

2) Initial Setup:

- The code first adds the first character of s to ans since there\'s no need to check it (as there\u2019s nothing before it), and sets cnt to 1 because there is only one instance of this character so far.

3) Iterate Through the String:

- The loop iterates from the second character to the end of the string.
- For each character:
  -   If the current character matches the last character of ans:
        - This means there\u2019s a consecutive repetition.
        - Increment cnt to count this occurrence.
        - Check if cnt is less than 3. If it is, add this character to ans, allowing it to appear twice consecutively.
        - If cnt is 3 or more, skip adding this character, effectively preventing more than two consecutive occurrences.
    - If the current character is different from the last character in ans:
        - Reset cnt to 1, as we\u2019re now dealing with a new character.
        - Add this character to ans since it\u2019s not consecutive with the last one.
4) Return the Result:

- After the loop completes, ans will contain the "fancy" version of the input string, which is then returned.

# Complexity
- Time complexity:
O(n)

- Space complexity:
O(n) // space used for answer string otherwise O(1) 

# Code
```cpp []
class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        ans.push_back(s[0]);
        int n = s.size(),cnt = 1;
        for(int i=1;i<n;i++){
            if(s[i] == ans.back()){
                cnt++;
                if(cnt < 3)ans.push_back(s[i]);
            }
            else{
                cnt = 1;
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
```
```java []
class Solution {
    public String makeFancyString(String s) {
        StringBuilder ans = new StringBuilder();
        ans.append(s.charAt(0));
        int n = s.length(), cnt = 1;
        for (int i = 1; i < n; i++) {
            if (s.charAt(i) == ans.charAt(ans.length() - 1)) {
                cnt++;
                if (cnt < 3) {
                    ans.append(s.charAt(i));
                }
            } else {
                cnt = 1;
                ans.append(s.charAt(i));
            }
        }
        return ans.toString();
    }
}

```
```python []
class Solution:
    def makeFancyString(self, s: str) -> str:
        ans = s[0]
        cnt = 1
        for i in range(1, len(s)):
            if s[i] == ans[-1]:
                cnt += 1
                if cnt < 3:
                    ans += s[i]
            else:
                cnt = 1
                ans += s[i]
        return ans
```



</details>
