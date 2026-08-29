# Fruit Into Baskets

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | August 29, 2026 |
| **Tags** | Array, Hash Table, Sliding Window |
| **Link** | [View Problem](https://leetcode.com/problems/fruit-into-baskets/) |
| **Runtime** | 0 ms |
| **Memory** | 8.5 MB |

## Problem Description

<p>You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array <code>fruits</code> where <code>fruits[i]</code> is the <strong>type</strong> of fruit the <code>i<sup>th</sup></code> tree produces.</p>

<p>You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:</p>

<ul>
	<li>You only have <strong>two</strong> baskets, and each basket can only hold a <strong>single type</strong> of fruit. There is no limit on the amount of fruit each basket can hold.</li>
	<li>Starting from any tree of your choice, you must pick <strong>exactly one fruit</strong> from <strong>every</strong> tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.</li>
	<li>Once you reach a tree with fruit that cannot fit in your baskets, you must stop.</li>
</ul>

<p>Given the integer array <code>fruits</code>, return <em>the <strong>maximum</strong> number of fruits you can pick</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> fruits = [<u>1,2,1</u>]
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can pick from all 3 trees.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> fruits = [0,<u>1,2,2</u>]
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can pick from trees [1,2,2].
If we had started at the first tree, we would only pick from trees [0,1].
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="display: block;"><strong>Input:</strong> fruits = [1,<u>2,3,2,2</u>]
<strong>Output:</strong> 4
<strong>Explanation:</strong> We can pick from trees [2,3,2,2].
If we had started at the first tree, we would only pick from trees [1,2].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= fruits.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= fruits[i] &lt; fruits.length</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++✅✅ | Faster🧭 than 85%🔥| Dynamic Sliding Window🆗 | Clean Code |
**Author**: [@mr_kamran](https://leetcode.com/mr_kamran/)
**Upvotes**: 162 👍
**Link**: [View Original Post](https://leetcode.com/problems/fruit-into-baskets/solutions/3153512/)

---


# Code

# **PLEASE DO UPVOTE!!!**

##### **Connect with Me on Linkedin -> https://www.linkedin.com/in/md-kamran-55b98521a/**
```

class Solution {
public:

    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> mpp;

        int i = 0, j = 0, res = 0;
        
        while(j < fruits.size())
        {

            mpp[fruits[j]]++;
            
            if(mpp.size() <= 2) res = max(res, j-i+1);
            
            else
            {
                mpp[fruits[i]]--;

                if(mpp[fruits[i]] == 0) mpp.erase(fruits[i]);

                i++;
            }

            j++;
        }

        return res; 
    }
};


```
![b62ab1be-232a-438f-9524-7d8ca4dbd5fe_1675328166.1161866.png](https://assets.leetcode.com/users/images/781bb870-cdb2-4bae-8cd7-8c946763e461_1675733563.012412.png)


</details>
