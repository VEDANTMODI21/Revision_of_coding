# Maximum Nesting Depth of the Parentheses

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | August 29, 2026 |
| **Tags** | String, Stack, Bracket Sequences |
| **Link** | [View Problem](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/) |
| **Runtime** | 0 ms |
| **Memory** | 8 MB |

## Approach

simple push and pop and size of the stack

## Problem Description

<p>Given a <strong>valid parentheses string</strong> <code>s</code>, return the <strong>nesting depth</strong> of<em> </em><code>s</code>. The nesting depth is the <strong>maximum</strong> number of nested parentheses.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "(1+(2*3)+((8)/4))+1"</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>Digit 8 is inside of 3 nested parentheses in the string.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "(1)+((2))+(((3)))"</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>Digit 3 is inside of 3 nested parentheses in the string.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "()(())((()()))"</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists of digits <code>0-9</code> and characters <code>'+'</code>, <code>'-'</code>, <code>'*'</code>, <code>'/'</code>, <code>'('</code>, and <code>')'</code>.</li>
	<li>It is guaranteed that parentheses expression <code>s</code> is a VPS.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅96.33%🔥Easy Solution🔥With explanation🔥
**Author**: [@MrAke](https://leetcode.com/MrAke/)
**Upvotes**: 117 👍
**Link**: [View Original Post](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/solutions/4969587/)

---

# Intuition
#### To find the nesting depth of the given VPS string `s`, we can iterate through each character of the string and keep track of the current nesting depth. Whenever we encounter an opening parenthesis `\'(\'`, we increment the depth, and whenever we encounter a closing parenthesis `\')\'`, we decrement the depth. We update the maximum depth encountered so far accordingly.
----

# Approach
#### 1. Initialize variables `count` and `max_num` to keep track of the current depth and maximum depth encountered so far, respectively. Set both to 0.
#### 2. Iterate through each character `i` in the input string `s`.
#### 3. If `i` is `\'(\'`, increment `count` by 1 and update `max_num` if count exceeds it.
#### 4. If `i` is `\')\'`, decrement `count` by 1.
#### 5. Finally, return `max_num`, which represents the maximum nesting depth.



# Complexity
- ## Time complexity:
#### $$O(n)$$, where n is the length of the input string `s`. We traverse the entire string once.

- ## Space complexity:
#### $$O(1)$$, as we only use a constant amount of extra space for variables `count` and `max_num`.

---
# Code

```python []
class Solution:
    def maxDepth(self, s):
        count = 0
        max_num = 0
        for i in s:
            if i == "(":
                count += 1
                if max_num < count:
                    max_num = count
            if i == ")":
                count -= 1
        return(max_num)
```
```C++ []
class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int max_num = 0;
        for (char c : s) {
            if (c == \'(\') {
                count++;
                if (max_num < count)
                    max_num = count;
            } else if (c == \')\') {
                count--;
            }
        }
        return max_num;
    }
};

```
```java []
class Solution {
    public int maxDepth(String s) {
        int count = 0;
        int maxNum = 0;
        for (char c : s.toCharArray()) {
            if (c == \'(\') {
                count++;
                if (maxNum < count)
                    maxNum = count;
            } else if (c == \')\') {
                count--;
            }
        }
        return maxNum;
    }
}

```
```javascript []
var maxDepth = function(s) {
    let count = 0;
    let maxNum = 0;
    for (let c of s) {
        if (c === \'(\') {
            count++;
            if (maxNum < count)
                maxNum = count;
        } else if (c === \')\') {
            count--;
        }
    }
    return maxNum;
};

```
```C# []
public class Solution {
    public int MaxDepth(string s) {
        int count = 0;
        int maxNum = 0;
        foreach (char c in s) {
            if (c == \'(\') {
                count++;
                if (maxNum < count)
                    maxNum = count;
            } else if (c == \')\') {
                count--;
            }
        }
        return maxNum;
    }
}

```
----


![Screenshot 2023-08-20 065922.png](https://assets.leetcode.com/users/images/5c563f96-855d-4e07-8b7c-1f76d8d46957_1712189841.0071785.png)













</details>
