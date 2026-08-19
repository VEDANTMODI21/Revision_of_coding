# Maximum Number of Balloons

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | August 20, 2026 |
| **Tags** | Hash Table, String, Counting |
| **Link** | [View Problem](https://leetcode.com/problems/maximum-number-of-balloons/) |
| **Runtime** | 2 ms |
| **Memory** | 8.1 MB |

## Problem Description

<p>Given a string <code>text</code>, you want to use the characters of <code>text</code> to form as many instances of the word <strong>"balloon"</strong> as possible.</p>

<p>You can use each character in <code>text</code> <strong>at most once</strong>. Return the maximum number of instances that can be formed.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/09/05/1536_ex1_upd.JPG" style="width: 132px; height: 35px;"></strong></p>

<pre style="display: block;"><strong>Input:</strong> text = "nlaebolko"
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/09/05/1536_ex2_upd.JPG" style="width: 267px; height: 35px;"></strong></p>

<pre style="display: block;"><strong>Input:</strong> text = "loonbalxballpoon"
<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="display: block;"><strong>Input:</strong> text = "leetcode"
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= text.length &lt;= 10<sup>4</sup></code></li>
	<li><code>text</code> consists of lower case English letters only.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Note:</strong> This question is the same as <a href="https://leetcode.com/problems/rearrange-characters-to-make-target-string/description/" target="_blank"> 2287: Rearrange Characters to Make Target String.</a></p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ 3 line solution, using unordered_map. 4ms 9mb
**Author**: [@scaa](https://leetcode.com/scaa/)
**Upvotes**: 64 👍
**Link**: [View Original Post](https://leetcode.com/problems/maximum-number-of-balloons/solutions/395059/)

---

```
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mm;
        for (char i : text) mm[i] += 1;
        return min(mm[\'b\'], min(mm[\'a\'], min(mm[\'l\']/2, min(mm[\'o\']/2, mm[\'n\']))));
    }
};
```

---
# **Suggestions listed below**
---

Suggestion made by [muhammetzahitaydin](https://leetcode.com/muhammetzahitaydin/): you can use one min for return:
```
return min ( { mm[\'b\'] , mm[\'a\'] , mm[\'l\']/2 , mm[\'o\']/2 ,mm[\'n\'] } ) ;
```

Suggestion made by [Body_sweep69](https://leetcode.com/body_sweep69/) to use array of size 256 instead of unordered map to reduce memory usage. [BSalwiczek](https://leetcode.com/bsalwiczek/) suggested using array of size 5 since we only care about 5 chars (b, a, l, o, n).

---

*suggestions added on June 29th 2020

</details>
