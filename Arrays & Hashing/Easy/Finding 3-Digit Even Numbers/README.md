# Finding 3-Digit Even Numbers

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 12, 2026 |
| **Tags** | Array, Hash Table, Recursion, Sorting, Enumeration |
| **Link** | [View Problem](https://leetcode.com/problems/finding-3-digit-even-numbers/) |
| **Runtime** | 602 ms |
| **Memory** | 146 MB |

## Approach

very bad ans , optimised req

## Problem Description

<p>You are given an integer array <code>digits</code>, where each element is a digit. The array may contain duplicates.</p>

<p>You need to find <strong>all</strong> the <strong>unique</strong> integers that follow the given requirements:</p>

<ul>
	<li>The integer consists of the <strong>concatenation</strong> of <strong>three</strong> elements from <code>digits</code> in <strong>any</strong> arbitrary order.</li>
	<li>The integer does not have <strong>leading zeros</strong>.</li>
	<li>The integer is <strong>even</strong>.</li>
</ul>

<p>For example, if the given <code>digits</code> were <code>[1, 2, 3]</code>, integers <code>132</code> and <code>312</code> follow the requirements.</p>

<p>Return <em>a <strong>sorted</strong> array of the unique integers.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> digits = [2,1,3,0]
<strong>Output:</strong> [102,120,130,132,210,230,302,310,312,320]
<strong>Explanation:</strong> All the possible integers that follow the requirements are in the output array. 
Notice that there are no <strong>odd</strong> integers or integers with <strong>leading zeros</strong>.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> digits = [2,2,8,8,2]
<strong>Output:</strong> [222,228,282,288,822,828,882]
<strong>Explanation:</strong> The same digit can be used as many times as it appears in digits. 
In this example, the digit 8 is used twice each time in 288, 828, and 882. 
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="display: block;"><strong>Input:</strong> digits = [3,7,5]
<strong>Output:</strong> []
<strong>Explanation:</strong> No <strong>even</strong> integers can be formed using the given digits.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= digits.length &lt;= 100</code></li>
	<li><code>0 &lt;= digits[i] &lt;= 9</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ with Explanation | O(n) Solution | Easy to Understand |
**Author**: [@tupesoham](https://leetcode.com/tupesoham/)
**Upvotes**: 117 👍
**Link**: [View Original Post](https://leetcode.com/problems/finding-3-digit-even-numbers/solutions/1612135/)

---

The Approach: 

Find count of all elements in given digits array.

**Check for all numbers between 100 to 999 whether it can be formed by the digits present in *digits vector*.**

We are using 2 maps for the same. If we are able to make it, Then we can add it to the answer.

At the end we will Sort the answer vector and return it.

```
class Solution {
 public:
  vector<int> findEvenNumbers(vector<int>& digits) {
    // generating frequency map of the given digits
    vector<int> count(10, 0);
    for (auto& d : digits) count[d]++;

    vector<int> res;

    for (int num = 100; num < 999; num += 2) {
      // generating frequency map of the current number
      vector<int> currCount(10, 0);
      int temp = num;

      while (temp) {
        currCount[temp % 10]++;
        temp /= 10;
      }

      // checking if the number can be generated or not
      bool flag = true;
      for (int i = 0; i < 10; i++) {
        if (currCount[i] > count[i]) {
          flag = false;
          break;
        }
      }

      if (flag) {
        res.push_back(num);
      }
    }
    return res;
  }
};
```

If you like the solution, don\'t forget to upvote. Thanks! 
If you have any questions, feel free to comment down below.
Credits for cleaner code: @mycoding1729


</details>
