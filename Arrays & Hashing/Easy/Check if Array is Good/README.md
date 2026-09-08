# Check if Array is Good

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 8, 2026 |
| **Tags** | Array, Hash Table, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/check-if-array-is-good/) |
| **Runtime** | 2 ms |
| **Memory** | 28.3 MB |

## Problem Description

<p>You are given an integer array <code>nums</code>. We consider an array <strong>good </strong>if it is a permutation of an array <code>base[n]</code>.</p>

<p><code>base[n] = [1, 2, ..., n - 1, n, n] </code>(in other words, it is an array of length <code>n + 1</code> which contains <code>1</code> to <code>n - 1 </code>exactly once, plus two occurrences of <code>n</code>). For example, <code>base[1] = [1, 1]</code> and<code> base[3] = [1, 2, 3, 3]</code>.</p>

<p>Return <code>true</code> <em>if the given array is good, otherwise return</em><em> </em><code>false</code>.</p>

<p><strong>Note: </strong>A permutation of integers represents an arrangement of these numbers.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> nums = [2, 1, 3]
<strong>Output:</strong> false
<strong>Explanation:</strong> Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. However, base[3] has four elements but array nums has three. Therefore, it can not be a permutation of base[3] = [1, 2, 3, 3]. So the answer is false.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> nums = [1, 3, 3, 2]
<strong>Output:</strong> true
<strong>Explanation:</strong> Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. It can be seen that nums is a permutation of base[3] = [1, 2, 3, 3] (by swapping the second and fourth elements in nums, we reach base[3]). Therefore, the answer is true.</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="display: block;"><strong>Input:</strong> nums = [1, 1]
<strong>Output:</strong> true
<strong>Explanation:</strong> Since the maximum element of the array is 1, the only candidate n for which this array could be a permutation of base[n], is n = 1. It can be seen that nums is a permutation of base[1] = [1, 1]. Therefore, the answer is true.</pre>

<p><strong class="example">Example 4:</strong></p>

<pre style="display: block;"><strong>Input:</strong> nums = [3, 4, 4, 1, 2, 1]
<strong>Output:</strong> false
<strong>Explanation:</strong> Since the maximum element of the array is 4, the only candidate n for which this array could be a permutation of base[n], is n = 4. However, base[4] has five elements but array nums has six. Therefore, it can not be a permutation of base[4] = [1, 2, 3, 4, 4]. So the answer is false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= num[i] &lt;= 200</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Very simple & easy to understand solution
**Author**: [@kreakEmp](https://leetcode.com/kreakEmp/)
**Upvotes**: 10 👍
**Link**: [View Original Post](https://leetcode.com/problems/check-if-array-is-good/solutions/3802259/)

---


# Code
```
bool isGood(vector<int>& nums) {
    vector<int> v(202, 0);
    for(auto n:nums) v[n]++;
    if(v[nums.size()-1] != 2) return false;
    for(int i = 1; i < nums.size()-1; ++i){
        if(v[i] != 1) return false;
    }
    return true;
}
```

</details>
