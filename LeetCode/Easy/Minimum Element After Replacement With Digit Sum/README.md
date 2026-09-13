# Minimum Element After Replacement With Digit Sum

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 14, 2026 |
| **Tags** | Array, Math |
| **Link** | [View Problem](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/) |
| **Runtime** | 0 ms |
| **Memory** | 27.6 MB |

## Problem Description

<p>You are given an integer array <code>nums</code>.</p>

<p>You replace each element in <code>nums</code> with the <strong>sum</strong> of its digits.</p>

<p>Return the <strong>minimum</strong> element in <code>nums</code> after all replacements.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [10,12,13,14]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p><code>nums</code> becomes <code>[1, 3, 4, 5]</code> after all replacements, with minimum element 1.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p><code>nums</code> becomes <code>[1, 2, 3, 4]</code> after all replacements, with minimum element 1.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [999,19,199]</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation:</strong></p>

<p><code>nums</code> becomes <code>[27, 10, 19]</code> after all replacements, with minimum element 10.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: simple and easy C++ solution
**Author**: [@shishirRsiam](https://leetcode.com/shishirRsiam/)
**Upvotes**: 4 👍
**Link**: [View Original Post](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/solutions/5854450/)

---

# if it\'s help, please up \u2B06 vote! \u2764\uFE0F

###### Let\'s Connect on LinkedIn: www.linkedin.com/in/shishirrsiam
###### Let\'s Connect on Facebook: www.fb.com/shishirrsiam


# Code
```cpp []
class Solution {
public:
    int minElement(vector<int>& nums) 
    {
        int ans = INT_MAX;
        for(auto val:nums)
        {
            int sum = 0;
            for(auto ch:to_string(val))
                sum += ch - \'0\';
            ans = min(ans, sum);
        }
        return ans;
    }
};
```

</details>
