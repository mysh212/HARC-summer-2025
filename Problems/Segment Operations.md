## **E. 區間操作** ***<font color = '#AAAAAA'> Segment Operations </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
給定一個長度為 $n$ 的整數序列 $a_1, a_2, \ldots, a_n$，你需要處理以下兩種操作共 $q$ 次：

1. **區間修改 (Segment Modify)：**  
   對於給定的兩個索引 $l$ 和 $r$，將區間 $[l, r]$ 中的所有元素 $a_i$ 替換為 $\lfloor \frac{a_i}{2} \rfloor$。  

2. **單點查詢 (Point Query)：**  
   給定一個索引 $i$，輸出當前序列中 $a_i$ 的值。


### ***Input***
$n$
$a_1\ a_2\ \ldots\ a_n$
$q$
$query_1$
$query_2$
$\vdots$
$query_q$


第 1 行有一個整數 $n$，表示序列長度。
第 2 行有 $n$ 個整數，表示初始序列。
第 3 行有一個整數 $q$，表示操作筆數。 
接下來 $q$ 行：每行一筆操作，格式如下：
- `1 l r`：表示進行一次區間向下取整操作。
- `2 i`：表示查詢第 $i$ 個元素的值。



### ***Output***
$Ans_1$
$Ans_2$
$\vdots$

對於每個單點查詢操作，輸出對應的元素值，每個值佔一行。

<div class = 'page' />

### ***Sample Input***
```
5
5 8 3 9 2
3
1 2 4
2 4
2 1
```

### ***Sample Output***
```
4
5
```


### ***Note***
* $1 \leq n, q \leq 10^5$
* $1 \leq a_i \leq 10^9$
* $1 \leq l \leq r \leq n$
* 所有輸入皆為正整數


### ***Subtask***

 - ***subtask1***: $30\\%\ \ n \times q \leq 10^6$
 - ***subtask2***: $70\\%\ \ As\ statement$