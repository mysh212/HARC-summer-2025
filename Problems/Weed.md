## **F. 拔樹** ***<font color = '#AAAAAA'> Weed </font>***

`time limit` 3s
`memory limit` 256MB

### ***Statement***

***ysh*** 有一棵樹，奇高無比，高到白天時會把所有陽光給擋住，對此 ***ysh*** 感到相當困擾，於是 ***ysh*** 打算對這棵樹進行一些操作來讓他獲得陽光。

對於一棵樹，有 $n$ 個節點、 $n - 1$ 條邊，而從根節點 $1$ 到任一節點只有一條路徑，長 $h_i,\ 1 \leq i \leq n$

而 ***ysh*** 會挑任一個邊 $edge_i$ 進行 **拔樹**，並更改其長度(沒錯，鋸木頭的機器不只能鋸樹也可以揠苗助長)。

但在 **拔樹** 的同時， ***ysh*** 也相當好奇 **節點 $i$** 目前的高度，也就是 $h_i$ 為何，好讓他精確地控制進度。

於是你必須寫一個程式幫他完成這件事:D

### ***Input***

$n$
$a_1$ $b_1$ $c_1$
$a_2$ $b_2$ $c_2$
...
$a_{n - 1}$ $b_{n - 1}$ $c_{n - 1}$
$k$
$op_1$ ...
$op_2$ ...
...
$op_k$

輸入會有若干行，第一行輸入 $n, m$，接著會有 $m$ 行描述這棵樹一開始的樣子，每一行共有三個數，分別是 $a_i, b_i, c_i,\ 1 \leq i \leq n$ ，代表 $a_i$ 與 $b_i$ 之間有一條邊，長度為 $c_i$

接著會有一個數字 $k$ ，代表操作筆數。
而後會有 $k$ 行描述操作，每行的第一個數字為 $op_i,\ 1 \leq i \leq k$

而 $op_i$ 僅有可能為 $0$ 或 $1$，其中

 - $op_i = 0$ 時，後面會接著一個數字 $x_i,\ 1 \leq i \leq k$ ，代表 ***ysh*** 想知道點 $x_i$ 距離地面的長度 $h_i$，而你必須回答他:D
 - $op_i = 1$ 時，後面會接著三個數字，分別為 $l_i, r_i, x_i,\ 1 \leq i \leq k$ ，代表 ***ysh*** 使用了神奇鋸木器將 **節點 $l_i$** 到 **節點 $r_i$** 的邊之距離改為了 $x_i$

### ***Output***

$Ans_{o_1}$
$Ans_{o_2}$
...
$Ans_{o_{|o|}}$

其中 $o \equiv [x | op_x = 1]$

<div class = 'page' />

### ***Sample Input***

```
6
1 5 3
2 6 2
3 4 4
3 5 3
5 6 5
3
1 1 5 1
0 4
0 2
```

### ***Sample Output***

```
8
8
```

### ***Note***

 - $1 \leq n \leq 2 \times 10 ^ 5$
 - $k \leq 10^6$
 - $0 \leq c_i \leq 10 ^ 9,\ \forall\ 1 \leq i \leq n - 1$
 - $0 \leq x_i \leq 10 ^ 9,\ \forall\ (1 \leq i \leq n \wedge op_i = 1)$
 - $1 \leq x_i \leq n,\ \forall\ (1 \leq i \leq n \wedge op_i = 0)$
 - $1 \leq a_i, b_i \leq n,\ \forall\ 1 \leq i \leq n - 1$

### ***Subtask***

 - ***subtask1***: $10\\%$ $n \leq 10$
 - ***subtask2***: $10\\%$ $k \leq 100$
 - ***subtask3***: $20\\%$ $n \leq 1000, k \leq 1000$
 - ***subtask4***: $30\\%$ 圖是一直線
 - ***subtask5***: $30\\%$ ***As statement***