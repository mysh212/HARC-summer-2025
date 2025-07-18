## **A. 庭院深深深幾許** ***<font color = '#AAAAAA'> Garden </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

眾所周知，將「庭院深深深幾許」重新排列後共有 $\displaystyle\frac{7!}{1!1!3!1!1!}$ 種不互相重複的可能組合。

而徐氏數學裏頭有一題:「現在給你 $n$ 個字元，字元 ***ASCII*** 值為 $a_i,\ 1 \leq i \leq n$ 的字元會重複 $c_i,\ 1 \leq i \leq n$ 次，請你求出共有幾種不互相重複的可能組合」

現在 ***ysh*** 因為數學太弱，被 ***yy*** 出的徐氏數學難住了，於是請 **你－－C++電神** 寫出一個程式來幫助 ***ysh*** 計算。

### ***Input***

$n$
$a_1$ $c_1$
$a_2$ $c_2$
...
$a_n$ $c_n$

### ***Output***

$Ans \mod (10^9 + 7)$

請輸出答案除以 $10^9 + 7$ 的餘數

<div class = 'page' />

### ***Sample Input***

```
5
1 1
2 1
3 3
4 1
5 1
```

### ***Sample Output***

```
840
```

### ***Note***

 - $0 \leq n \leq 10 ^ 5$
 - $1 \leq c_i \leq 10 ^ {6},\ 1 \leq i \leq n$
 - $0 \leq a_i \leq n,\ 1 \leq i \leq n$
 - $\displaystyle \sum_{k = 1}^n c_k \leq 10^6$

### ***Subtask***

 - ***subtask1***: $10\\%$ $\displaystyle n \leq 10,\ \sum_{k=1}^{n} c_k \leq 20$
 - ***subtask2***: $20\\%$ $\displaystyle n \leq 100,\ \sum_{k=1}^{n} c_k \leq 1000$
 - ***subtask3***: $30\\%$ $\displaystyle n \leq 10^4,\ \sum_{k=1}^{n} c_k \leq 10^6$
 - ***subtask4***: $40\\%$ ***As statement***