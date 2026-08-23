# Minimum Cost of Buying Candies With Discount

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | August 24, 2026 |
| **Tags** | Array, Greedy, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/) |
| **Runtime** | 0 ms |
| **Memory** | 14.2 MB |

## Problem Description

<p>A shop is selling candies at a discount. For <strong>every two</strong> candies sold, the shop gives a <strong>third</strong> candy for <strong>free</strong>.</p>

<p>The customer can choose <strong>any</strong> candy to take away for free as long as the cost of the chosen candy is less than or equal to the <strong>minimum</strong> cost of the two candies bought.</p>

<ul>
	<li>For example, if there are <code>4</code> candies with costs <code>1</code>, <code>2</code>, <code>3</code>, and <code>4</code>, and the customer buys candies with costs <code>2</code> and <code>3</code>, they&nbsp;can take the candy with cost <code>1</code> for free, but not the candy with cost <code>4</code>.</li>
</ul>

<p>Given a <strong>0-indexed</strong> integer array <code>cost</code>, where <code>cost[i]</code> denotes the cost of the <code>i<sup>th</sup></code> candy, return <em>the <strong>minimum cost</strong> of buying <strong>all</strong> the candies</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> cost = [1,2,3]
<strong>Output:</strong> 5
<strong>Explanation:</strong> We buy the candies with costs 2 and 3, and take the candy with cost 1 for free.
The total cost of buying all candies is 2 + 3 = 5. This is the <strong>only</strong> way we can buy the candies.
Note that we cannot buy candies with costs 1 and 3, and then take the candy with cost 2 for free.
The cost of the free candy has to be less than or equal to the minimum cost of the purchased candies.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="display: block;"><strong>Input:</strong> cost = [6,5,7,9,2,2]
<strong>Output:</strong> 23
<strong>Explanation:</strong> The way in which we can get the minimum cost is described below:
- Buy candies with costs 9 and 7
- Take the candy with cost 6 for free
- We buy candies with costs 5 and 2
- Take the last remaining candy with cost 2 for free
Hence, the minimum cost to buy all candies is 9 + 7 + 5 + 2 = 23.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="display: block;"><strong>Input:</strong> cost = [5,5]
<strong>Output:</strong> 10
<strong>Explanation:</strong> Since there are only 2 candies, we buy both of them. There is not a third candy we can take for free.
Hence, the minimum cost to buy all candies is 5 + 5 = 10.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= cost.length &lt;= 100</code></li>
	<li><code>1 &lt;= cost[i] &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅C++ easy solution using sorting with full explanations
**Author**: [@dhruba-datta](https://leetcode.com/dhruba-datta/)
**Upvotes**: 14 👍
**Link**: [View Original Post](https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/solutions/1710139/)

---

> **If you\u2019re interested in coding you can join my Discord Server, link in the comment section. Also if you find any mistake please let me know. Thank you!\u2764\uFE0F**
> 

---

## Explanation:

### Solution 01

- Simply sort the array and iterate from last.
- Take the last 2 costs & skip the next one, because we\u2019ll get free if it\u2019s equal or less than the minimum one.
- Reduce the index by 3 to skip an element **`i = i-3`**
- If ***i*** became 1 or 0 then return ans else we need to add the first element of the array because we won\u2019t get that free.
- **Time complexity:** O(nlogn).

---

## Code:

```cpp
//Solution 01:
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int i = n-1, ans = 0;
        
        if(n <= 2){
            for(auto x: cost) 
                ans += x;
            return ans;
        }
        
        sort(cost.begin(), cost.end());
        
        while(i>=1){
            ans += cost[i] + cost[i-1];
            if(i-1 == 0 || i-1 == 1) return ans;
            i = i-3;
        }
        ans += cost[0];
        
        return ans;
    }
};
```

---

> **Please upvote this solution**
>

</details>
