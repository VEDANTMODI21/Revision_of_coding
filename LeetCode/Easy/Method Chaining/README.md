# Method Chaining

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | pythondata |
| **Solved On** | August 20, 2026 |
| **Link** | [View Problem](https://leetcode.com/problems/method-chaining/) |
| **Runtime** | 219 ms |
| **Memory** | 65.8 MB |

## Approach

once learn this topic of df of pands lib

## Problem Description

<pre style="display: block;">DataFrame <code>animals</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| name        | object |
| species     | object |
| age         | int    |
| weight      | int    |
+-------------+--------+
</pre>

<p>Write a solution to list the names of animals that weigh <strong>strictly more than</strong> <code>100</code> kilograms.</p>

<p>Return the&nbsp;animals sorted by weight in <strong>descending order</strong>.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="display: block;"><strong>Input:</strong> 
DataFrame animals:
+----------+---------+-----+--------+
| name     | species | age | weight |
+----------+---------+-----+--------+
| Tatiana  | Snake   | 98  | 464    |
| Khaled   | Giraffe | 50  | 41     |
| Alex     | Leopard | 6   | 328    |
| Jonathan | Monkey  | 45  | 463    |
| Stefan   | Bear    | 100 | 50     |
| Tommy    | Panda   | 26  | 349    |
+----------+---------+-----+--------+
<strong>Output:</strong> 
+----------+
| name     |
+----------+
| Tatiana  |
| Jonathan |
| Tommy    |
| Alex     |
+----------+
<strong>Explanation:</strong> 
All animals weighing more than 100 should be included in the results table.
Tatiana's weight is 464, Jonathan's weight is 463, Tommy's weight is 349, and Alex's weight is 328.
The results should be sorted in descending order of weight.</pre>

<p>&nbsp;</p>
<p>In Pandas, <strong>method chaining</strong> enables us to&nbsp;perform operations on a DataFrame without breaking up each operation into a separate line or creating multiple temporary variables.&nbsp;</p>

<p>Can you complete this&nbsp;task in just <strong>one line </strong>of code using method chaining?</p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅☑️ Best Pandas Solution with simple meaning of every line
**Author**: [@sgupta99299](https://leetcode.com/sgupta99299/)
**Upvotes**: 68 👍
**Link**: [View Original Post](https://leetcode.com/problems/method-chaining/solutions/4920087/)

---



```python
import pandas as pd
```
- `import pandas as pd`: Imports the Pandas library and assigns it the alias `pd`, allowing us to refer to Pandas functions and classes using `pd`.

```python
def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
```
- `def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame`: Defines a function named `findHeavyAnimals` that takes one argument, `animals`, which is expected to be a Pandas DataFrame. It specifies that the function returns a Pandas DataFrame. This function appears to filter the DataFrame to find animals whose weight is greater than 100 and return a DataFrame containing only those animals.

```python
    return animals[animals[\'weight\'] > 100].sort_values([\'weight\'],ascending=False)[[\'name\']]
```
- `return animals[animals[\'weight\'] > 100].sort_values([\'weight\'],ascending=False)[[\'name\']]`: This line does several operations:
  - `animals[\'weight\'] > 100`: Filters the DataFrame `animals` to select rows where the value in the `\'weight\'` column is greater than 100. This creates a boolean mask.
  - `animals[...]`: Uses the boolean mask to filter rows from the DataFrame `animals`, keeping only those rows where the weight is greater than 100.
  - `.sort_values([\'weight\'], ascending=False)`: Sorts the filtered DataFrame by the `\'weight\'` column in descending order.
  - `[[\'name\']]`: Selects only the `\'name\'` column from the sorted DataFrame.
  - The entire expression returns a DataFrame containing the names of animals whose weight is greater than 100, sorted by weight in descending order.



# Code
```
import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    return animals[animals[\'weight\'] > 100].sort_values([\'weight\'],ascending=False)[[\'name\']]
```

</details>
