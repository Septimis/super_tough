# Building Bridges
## DESCRIPTION
Given a `m` x `n` 2D binary matrix that represents a map of 1s (land) and 0s (water), return the minimum cost to connect all the islands with bridges or -1 if it is impossible.  A bridge is a vertical or horizontal path over water between islands with a cost associated with the number of water cells the path traverses.  In other words, all bridges are straight, and can only run either north-south or east-west.  An island is surrounded by water and formed by connecting adjacent land horizontally or vertically.

## Input Format
The first line will contain two integers `m` and `n` representing the size of the matrix `m` x `n`. The next `m` lines will each contain `n` integers representing the values of the matrix.
```
m n
grid[0][0], grid[0][1], ..., grid[0][n-1]
grid[1][0], grid[1][1], ..., grid[1][n-1]
...
grid[m-1][0], grid[m-1][1], ... grid[m-1][n-1]
```


## OUTPUT
The output will be a single integer representing the minimum total cost to connect all islands, or -1 if impossible.

## EXAMPLES
#### Ex 1
<table>
    <tr>
        <td>1</td>
        <td>0</td>
        <td>1</td>
    </tr>
    <tr>
        <td>0</td>
        <td>0</td>
        <td>0</td>
    </tr>
    <tr>
        <td>0</td>
        <td>1</td>
        <td>1</td>
    </tr>
</table>
Output: 2

Bridges can be places at index [0][1] & [1][2]

#### Ex 2
<table>
    <tr>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>0</td>
    </tr>
    <tr>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
    </tr>
    <tr>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
    </tr>
    <tr>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
    </tr>
    <tr>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr>
</table>
Output: 3

you can make bridges at indexes [0][1], [0][2], & [1][3]

#### Ex 3
<table>
    <tr>
        <td>1</td>
        <td>0</td>
        <td>1</td>
    </tr>
    <tr>
        <td>0</td>
        <td>0</td>
        <td>0</td>
    </tr>
    <tr>
        <td>0</td>
        <td>1</td>
        <td>0</td>
    </tr>
</table>
Output: -1

While there is a possible connection at [0][1], the land at [2][1] cannot connect to any other land