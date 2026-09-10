# Smallest Divisible Digit Product I

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 10, 2026 |
| **Tags** | Math, Enumeration |
| **Link** | [View Problem](https://leetcode.com/problems/smallest-divisible-digit-product-i/) |
| **Runtime** | 0 ms |
| **Memory** | 8.5 MB |

## Problem Description

<p>You are given two integers <code>n</code> and <code>t</code>. Return the <strong>smallest</strong> number greater than or equal to <code>n</code> such that the <strong>product of its digits</strong> is divisible by <code>t</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 10, t = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation:</strong></p>

<p>The digit product of 10 is 0, which is divisible by 2, making it the smallest number greater than or equal to 10 that satisfies the condition.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 15, t = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">16</span></p>

<p><strong>Explanation:</strong></p>

<p>The digit product of 16 is 6, which is divisible by 3, making it the smallest number greater than or equal to 15 that satisfies the condition.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= t &lt;= 10</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Python3 || 2 lines, check 10 integers  || T/S: 99% / 38%
**Author**: [@Spaulding_](https://leetcode.com/Spaulding_/)
**Upvotes**: 12 👍
**Link**: [View Original Post](https://leetcode.com/problems/smallest-divisible-digit-product-i/solutions/6027586/)

---

Here\'s the intuition:

It\'s not difficult to show that we are ensured of encountering a solution in the interval [*n* . . *n* + 10], so we reduce the problem to an iteration over this interval.

```python3 []
class Solution:
    def smallestNumber(self, n: int, t: int) -> int:

        for i in range(n, n + 10):
            if reduce(mul, map(int,str(i))) %t == 0: return i
```
```cpp []
class Solution {
public:
    int smallestNumber(int n, int t) {
        auto productOfDigits = [](int x) {
            int product = 1;
            while (x > 0) {
                product *= (x % 10);
                x /= 10;}
            return product;
        };

        for (int i = n; i < n + 10; ++i) {
            if (productOfDigits(i) % t == 0) {
                return i;}
        }
        
        return -1; }
};
```
```java []
public class Solution {
    public int smallestNumber(int n, int t) {
        for (int i = n; i < n + 10; i++) {
            if (productOfDigits(i) % t == 0) {
                return i; }
        }
        return -1;
    }
    
    private int productOfDigits(int x) {
        int product = 1;
        while (x > 0) {
            product *= (x % 10);
            x /= 10;}

        return product;
    }
}
```
[https://leetcode.com/problems/smallest-divisible-digit-product-i/submissions/1447882802/](https://leetcode.com/problems/smallest-divisible-digit-product-i/submissions/1447882802/)

I could be wrong, but I think that time complexity is *O*(*N*) and space complexity is *O*(1), in which *N* ~ `len(str(x))`. *Note: In this problem, *N* <= 3.

</details>
