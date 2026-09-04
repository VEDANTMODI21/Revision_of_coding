# Minimum Bit Flips to Convert Number

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 4, 2026 |
| **Tags** | Bit Manipulation |
| **Link** | [View Problem](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/) |
| **Runtime** | 0 ms |
| **Memory** | 7.9 MB |

## Problem Description

<p>A <strong>bit flip</strong> of a number <code>x</code> is choosing a bit in the binary representation of <code>x</code> and <strong>flipping</strong> it from either <code>0</code> to <code>1</code> or <code>1</code> to <code>0</code>.</p>

<ul>
	<li>For example, for <code>x = 7</code>, the binary representation is <code>111</code> and we may choose any bit (including any leading zeros not shown) and flip it. We can flip the first bit from the right to get <code>110</code>, flip the second bit from the right to get <code>101</code>, flip the fifth bit from the right (a leading zero) to get <code>10111</code>, etc.</li>
</ul>

<p>Given two integers <code>start</code> and <code>goal</code>, return<em> the <strong>minimum</strong> number of <strong>bit flips</strong> to convert </em><code>start</code><em> to </em><code>goal</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> start = 10, goal = 7
<strong>Output:</strong> 3
<strong>Explanation:</strong> The binary representation of 10 and 7 are 1010 and 0111 respectively. We can convert 10 to 7 in 3 steps:
- Flip the first bit from the right: 101<u>0</u> -&gt; 101<u>1</u>.
- Flip the third bit from the right: 1<u>0</u>11 -&gt; 1<u>1</u>11.
- Flip the fourth bit from the right: <u>1</u>111 -&gt; <u>0</u>111.
It can be shown we cannot convert 10 to 7 in less than 3 steps. Hence, we return 3.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> start = 3, goal = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong> The binary representation of 3 and 4 are 011 and 100 respectively. We can convert 3 to 4 in 3 steps:
- Flip the first bit from the right: 01<u>1</u> -&gt; 01<u>0</u>.
- Flip the second bit from the right: 0<u>1</u>0 -&gt; 0<u>0</u>0.
- Flip the third bit from the right: <u>0</u>00 -&gt; <u>1</u>00.
It can be shown we cannot convert 3 to 4 in less than 3 steps. Hence, we return 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= start, goal &lt;= 10<sup>9</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Note:</strong> This question is the same as <a href="https://leetcode.com/problems/hamming-distance/description/" target="_blank">461: Hamming Distance.</a></p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Most easy || beats 100% || Best Solution || All languages
**Author**: [@raghavagarwal28](https://leetcode.com/raghavagarwal28/)
**Upvotes**: 173 👍
**Link**: [View Original Post](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/solutions/5765774/)

---


![Screenshot 2024-09-10 172844.png](https://assets.leetcode.com/users/images/c94d5829-2397-4533-8986-68255beb4f1f_1725969578.3645458.png)
# Intuition
The question asks how few bit flips are necessary to change one integer into another. It follows easily that the bits of the two numbers can be compared. The amount of flips required will depend on how the bits in the binary representation of start and aim differ from one another. The result of a bitwise XOR operation between start and goal is a number where each 1 denotes a location where the bits of the two numbers differ. The necessary number of bit flips can be found by counting the 1s in this XOR result.

# Approach
1) XOR the two numbers: Perform a bitwise XOR between start and goal. The result will have 1 in positions where the bits are different between the two numbers.
2) Count the number of 1s in the XOR result: This tells us the number of positions where the bits differ and hence the number of bit flips required.
3) Bit counting: Use a loop to repeatedly check the last bit of the XOR result using & 1. Right shift the XOR result (>> 1) to process the next bit. Continue until all bits are processed.

# Complexity
- Time complexity:
The time complexity is O(k), where k is the number of bits in the binary representation of the larger of the two numbers (start or goal).

- Space complexity:
The space complexity is O(1).

# Code
```java []
class Solution {
    public int minBitFlips(int start, int goal) {
        int ans = 0; 
        // XOR will give 1 where the bits are different
        int xor = start ^ goal;

        while(xor!=0){
            // If the last bit is 1, increment count 
            ans += xor & 1;

            // Right-shift to check the next bit
            xor >>=1;
        }
        return ans;
    }
}
```
``` C++ []
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorResult = start ^ goal;
        int ans = 0;
        
        
        while (xorResult > 0) {
            ans += xorResult & 1; 
            xorResult >>= 1;
        }
        
        return ans;
    }
};
```
``` python []
class Solution(object):
    def minBitFlips(self, start, goal):
        """
        :type start: int
        :type goal: int
        :rtype: int
        """

        xor_result = start ^ goal
        ans = 0
        
        while xor_result > 0:
            ans += xor_result & 1  
            xor_result >>= 1     
        
        return ans

```
``` Javascript []
/**
 * @param {number} start
 * @param {number} goal
 * @return {number}
 */
var minBitFlips = function(start, goal) {
    // XOR to find differing bits between start and goal
    let xorResult = start ^ goal;
    let ans = 0;
    
    // Count the number of 1\'s in the XOR result
    while (xorResult > 0) {
        ans += xorResult & 1;  
        xorResult >>= 1;        
    }
    
    return ans;
};

```
![193730892e8675ebafc11519f6174bee5c4a5ab0.jpeg](https://assets.leetcode.com/users/images/506c452c-eda6-43de-828e-cf5fda2aff01_1725969557.0600255.jpeg)


</details>
