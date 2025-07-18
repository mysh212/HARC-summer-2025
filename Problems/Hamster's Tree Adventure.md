## **B. hamster的樹林探險** ***<font color = '#AAAAAA'> Hamster’s Tree Adventure </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

Hamster 是一隻聰明又勤奮的小倉鼠，牠住在一棵 **巨大二元樹形的樹林**中，樹林結構如下規則：

* 樹的根是編號 1 的樹洞。
* 每個樹洞編號為 $i$ 符合以下條件：

  * 左子節點為 $2i$（若 $2i \leq n$），
  * 右子節點為 $2i+1$（若 $2i+1 \leq n$）。

每個樹洞裡都有寶藏，其價值為 $w_i$。

現在 Hamster 想請你幫忙回答 $m$ 個問題。
每個問題給你一個樹洞編號 $u$，請輸出以 $u$ 為根的底下子樹內所有樹洞的寶藏總價值（包括 $u$ 自己）。

---

### ***Input***

$n$ $m$
$w_1, w_2, \dots, w_n$
$q_1, q_2, \dots, q_m$

第一行包含兩個整數 $n, m$（$1 \leq n, m \leq 10^5$）：

* $n$ 是樹洞數（節點數）
* $m$ 是詢問次數

第二行包含 $n$ 個整數 $w_1, w_2, \dots, w_n$（$-10^9 \leq w_i \leq 10^9$）：
第 $i$ 個數字表示節點 $i$ 的寶藏價值。

第三行包含 $m$ 個整數 $q_1, q_2, \dots, q_m$（$1 \leq q_i \leq n$）：
表示 Hamster 要詢問的節點編號。




### ***Output***
$Ans$
對於每個詢問，輸出一行，表示以 $q_i$ 為根的子樹內所有寶藏總價值Ans

<div class = 'page' />

### ***Note***
```
      5
     / \
    2   3
   / \  /\
  4  5 6  7
```
編號1樹洞底下總寶藏 = 5+2+3+4+5+6+7 = 32
### ***Sample Input***

```
7 3
1 2 3 4 5 6 7
1 2 3
```

---

### ***Sample Output***

```
28
11
16
```

---

### ***Subtask***

* ***subtask1***: $10\\%$，$n, m \leq 100$
* ***subtask2***: $90\\%$，$n, m \leq 10^5$