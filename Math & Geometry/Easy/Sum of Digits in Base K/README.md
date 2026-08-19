# Sum of Digits in Base K

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | August 20, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/sum-of-digits-in-base-k/) |
| **Runtime** | 0 ms |
| **Memory** | 7.9 MB |

## Approach

To convert decimal n to base b:

Divide n by b.
Store the remainder.
Replace n with the quotient.
Repeat until n becomes 0.
Reverse the remainders.

## Problem Description

<p>Given an integer <code>n</code> (in base <code>10</code>) and a base <code>k</code>, return <em>the <strong>sum</strong> of the digits of </em><code>n</code><em> <strong>after</strong> converting </em><code>n</code><em> from base </em><code>10</code><em> to base </em><code>k</code>.</p>

<p>After converting, each digit should be interpreted as a base <code>10</code> number, and the sum should be returned in base <code>10</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> n = 34, k = 6
<strong>Output:</strong> 9
<strong>Explanation: </strong>34 (base 10) expressed in base 6 is 54. 5 + 4 = 9.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> n = 10, k = 10
<strong>Output:</strong> 1
<strong>Explanation: </strong>n is already in base 10. 1 + 0 = 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>2 &lt;= k &lt;= 10</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ || Recursive || Iterative || Self Explanatory
**Author**: [@rajat_gupta_](https://leetcode.com/rajat_gupta_/)
**Upvotes**: 8 👍
**Link**: [View Original Post](https://leetcode.com/problems/sum-of-digits-in-base-k/solutions/1175583/)

---

**1.**
```
class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        while(n!=0) sum+=n%k,n=n/k;
        return sum;
    }
};
```
**2.**
```
class Solution {
public:
    int sumBase(int n, int k) {
        if(n==0) return 0;
        return n%k+sumBase(n/k,k);
    }
};
```
**Feel free to ask any question in the comment section.**
I hope that you\'ve found the solution useful.
In that case, **please do upvote and encourage me** to on my quest to document all leetcode problems\uD83D\uDE03
Happy Coding :)


</details>
