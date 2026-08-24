# Customers Who Bought All Products

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | mysql |
| **Solved On** | August 24, 2026 |
| **Tags** | Database |
| **Link** | [View Problem](https://leetcode.com/problems/customers-who-bought-all-products/) |
| **Runtime** | 96 ms |
| **Memory** | 0B |

## Problem Description

<p>Table: <code>Customer</code></p>

<pre style="display: block;">+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| customer_id | int     |
| product_key | int     |
+-------------+---------+
This table may contain duplicates rows. 
<code>customer_id</code> is not NULL<code>.</code>
product_key is a foreign key (reference column) to <code>Product</code> table.
</pre>

<p>&nbsp;</p>

<p>Table: <code>Product</code></p>

<pre style="display: block;">+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| product_key | int     |
+-------------+---------+
product_key is the primary key (column with unique values) for this table.
</pre>

<p>&nbsp;</p>

<p>Write a solution to report the customer ids from the <code>Customer</code> table that bought all the products in the <code>Product</code> table.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> 
Customer table:
+-------------+-------------+
| customer_id | product_key |
+-------------+-------------+
| 1           | 5           |
| 2           | 6           |
| 3           | 5           |
| 3           | 6           |
| 1           | 6           |
+-------------+-------------+
Product table:
+-------------+
| product_key |
+-------------+
| 5           |
| 6           |
+-------------+
<strong>Output:</strong> 
+-------------+
| customer_id |
+-------------+
| 1           |
| 3           |
+-------------+
<strong>Explanation:</strong> 
The customers who bought all the products (5 and 6) are customers with IDs 1 and 3.
</pre>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Simple Solution with two line query
**Author**: [@deepankyadav](https://leetcode.com/deepankyadav/)
**Upvotes**: 412 👍
**Link**: [View Original Post](https://leetcode.com/problems/customers-who-bought-all-products/solutions/3608247/)

---

## ***Please Upvote my solution, if you find it helpful ;)***

# Intuition
To find the customers who have bought all the products, we need to compare the distinct products bought by each customer with the total number of products available. If the counts match, it means the customer has bought all the products.

# Approach
1. Select the customer_id from the Customer table.
1. Group the results by customer_id.
1. Apply a HAVING clause to filter out customers who have not bought all the products.
1. In the HAVING clause, use ***COUNT(DISTINCT product_key)*** to count the number of distinct product keys for each customer.
1. Compare this count with the total count of product keys in the Product table obtained through a subquery.
1. If the counts match, it means the customer has bought all the products.
# Complexity
- Time complexity:
The time complexity of this solution depends on the size of the Customer and Product tables. Let\'s assume there are n customers and m products. The counting of distinct product keys for each customer takes $$O(n)$$ time, and the subquery to count the total number of products takes $$O(m)$$ time. Therefore, the overall time complexity can be approximated as $$O(n + m)$$.

- Space complexity:
The space complexity of this solution is considered $$O(1)$$ or constant. It only requires a constant amount of additional space for storing intermediate results and the subquery. The space usage does not depend on the size of the input tables.

# Code
```
# Write your MySQL query statement below

\'SELECT  customer_id FROM Customer GROUP BY customer_id
HAVING COUNT(distinct product_key) = (SELECT COUNT(product_key) FROM Product)\'
```
***Please Upvote my solution, if you find it helpful ;)***
![6a87bc25-d70b-424f-9e60-7da6f345b82a_1673875931.8933976.jpeg](https://assets.leetcode.com/users/images/9b775724-1c6b-46bb-8e7b-5f6f8be29f1c_1686125409.4786477.jpeg)


</details>
