# Number of Changing Keys

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | August 21, 2026 |
| **Tags** | String |
| **Link** | [View Problem](https://leetcode.com/problems/number-of-changing-keys/) |
| **Runtime** | 0 ms |
| **Memory** | 7.8 MB |

## Problem Description

<p>You are given a <strong>0-indexed </strong>string <code>s</code> typed by a user. Changing a key is defined as using a key different from the last used key. For example, <code>s = "ab"</code> has a change of a key while <code>s = "bBBb"</code> does not have any.</p>

<p>Return <em>the number of times the user had to change the key. </em></p>

<p><strong>Note: </strong>Modifiers like <code>shift</code> or <code>caps lock</code> won't be counted in changing the key that is if a user typed the letter <code>'a'</code> and then the letter <code>'A'</code> then it will not be considered as a changing of key.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> s = "aAbBcC"
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
From s[0] = 'a' to s[1] = 'A', there is no change of key as caps lock or shift is not counted.
From s[1] = 'A' to s[2] = 'b', there is a change of key.
From s[2] = 'b' to s[3] = 'B', there is no change of key as caps lock or shift is not counted.
From s[3] = 'B' to s[4] = 'c', there is a change of key.
From s[4] = 'c' to s[5] = 'C', there is no change of key as caps lock or shift is not counted.

</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> s = "AaAaAaaA"
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no change of key since only the letters 'a' and 'A' are pressed which does not require change of key.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists of only upper case and lower case English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅Beats 100%🔥Detecting Key Changes in Strings || Java | Python | C++| JavaScript
**Author**: [@Mohit-P](https://leetcode.com/Mohit-P/)
**Upvotes**: 5 👍
**Link**: [View Original Post](https://leetcode.com/problems/number-of-changing-keys/solutions/4636934/)

---

# Intuition
The goal is to count the number of key changes in a given string s. A key change occurs when the ASCII difference between consecutive characters is not equal to 32, -32, or 0.

# Approach
- The code uses a simple loop to iterate through the characters of the string starting from the second character. 
- For each pair of consecutive characters, it calculates the ASCII difference (x) and checks whether it is not equal to 32, -32, or 0. 

- If the condition is met, it increments the count. The final count represents the number of key changes in the string.

# Complexity
- Time complexity:
The code iterates through each character in the string once, making it linear with respect to the length of the input string. Therefore, the time complexity is O(n), where n is the length of the input string.

- Space complexity:
The algorithm uses a constant amount of space for variables (count, x, and i). Therefore, the space complexity is O(1)


# Code
```Java []
    public int countKeyChanges(String s) {
        // Initialize a counter to keep track of key changes
        int count = 0;

        // Iterate through the characters of the string starting from the second character
        for (int i = 1; i < s.length(); i++) {
            // Calculate the ASCII difference between consecutive characters
            int x = s.charAt(i) - s.charAt(i - 1);

            // Check if the ASCII difference is not equal to 32, -32, or 0
            // These values correspond to no change, a space character, and the opposite case, respectively
            if (x != 32 && x != -32 && x != 0) {
                // Increment the count if a key change is detected
                count++;
            }
        }

        // Return the final count representing the number of key changes in the string
        return count;
    }
```
```python []
def count_key_changes(s):
    # Initialize a counter to keep track of key changes
    count = 0

    # Iterate through the characters of the string starting from the second character
    for i in range(1, len(s)):
        # Calculate the ASCII difference between consecutive characters
        x = ord(s[i]) - ord(s[i - 1])

        # Check if the ASCII difference is not equal to 32, -32, or 0
        # These values correspond to no change, a space character, and the opposite case, respectively
        if x != 32 and x != -32 and x != 0:
            # Increment the count if a key change is detected
            count += 1

    # Return the final count representing the number of key changes in the string
    return count

```
```C++ []
int countKeyChanges(string s) {
    // Initialize a counter to keep track of key changes
    int count = 0;

    // Iterate through the characters of the string starting from the second character
    for (int i = 1; i < s.length(); i++) {
        // Calculate the ASCII difference between consecutive characters
        int x = s[i] - s[i - 1];

        // Check if the ASCII difference is not equal to 32, -32, or 0
        // These values correspond to no change, a space character, and the opposite case, respectively
        if (x != 32 && x != -32 && x != 0) {
            // Increment the count if a key change is detected
            count++;
        }
    }

    // Return the final count representing the number of key changes in the string
    return count;
}

```
```JavaScript []
function countKeyChanges(s) {
    // Initialize a counter to keep track of key changes
    let count = 0;

    // Iterate through the characters of the string starting from the second character
    for (let i = 1; i < s.length; i++) {
        // Calculate the ASCII difference between consecutive characters
        let x = s.charCodeAt(i) - s.charCodeAt(i - 1);

        // Check if the ASCII difference is not equal to 32, -32, or 0
        // These values correspond to no change, a space character, and the opposite case, respectively
        if (x !== 32 && x !== -32 && x !== 0) {
            // Increment the count if a key change is detected
            count++;
        }
    }

    // Return the final count representing the number of key changes in the string
    return count;
}


```

If you found this content helpful, consider giving it an **upvote** and share your thoughts in the comments.



</details>
